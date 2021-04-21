/*
 * Copyright (c) 2006-2020, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-09-02     RT-Thread    first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include "drv_common.h"
#include "drv_spi_ili9488.h"
#include <lcd_spi_port.h>
#include <rt_ai_person_dect_model.h>
#include <rt_ai.h>
#include <backend_cubeai.h>
#define LED_PIN GET_PIN(I, 8)

struct rt_event ov2640_event;
extern rt_uint8_t model_input_data_rgb[];
extern rt_uint8_t model_input_data_gray[];
rt_uint8_t ai_flag = 0;
int main(void)
{
    rt_pin_mode(LED_PIN, PIN_MODE_OUTPUT);
    /* init spi data notify event */
    rt_event_init(&ov2640_event, "ov2640", RT_IPC_FLAG_FIFO);
    struct drv_lcd_device *lcd;
    lcd = (struct drv_lcd_device *)rt_device_find("lcd");
    struct rt_device_rect_info rect_info = {0, 0, LCD_WIDTH, 240};
    rt_ai_t person_d = NULL;
    person_d = rt_ai_find(RT_AI_PERSON_DECT_MODEL_NAME);
    if(!person_d) {rt_kprintf("ai find err\n"); return -1;}
    rt_ai_buffer_t *work_buf = rt_malloc(RT_AI_PERSON_DECT_WORK_BUFFER_BYTES);
    if(!work_buf) {rt_kprintf("malloc err\n");return -1;}
    rt_ai_buffer_t *_out = rt_malloc(RT_AI_PERSON_DECT_OUT_1_SIZE_BYTES);
    if(!_out) {rt_kprintf("malloc err\n"); return -1;}
    if(rt_ai_init(person_d,work_buf) != 0){rt_kprintf("ai init err\n"); return -1;}
    rt_ai_config(person_d,CFG_INPUT_0_ADDR,model_input_data_rgb);
    rt_ai_config(person_d,CFG_OUTPUT_0_ADDR,_out);
    rt_uint32_t count = 0 , frame = 0;
    rt_uint8_t res_p;
    while(1)
    {
        rt_event_recv(&ov2640_event,
                            1,
                            RT_EVENT_FLAG_AND | RT_EVENT_FLAG_CLEAR,
                            RT_WAITING_FOREVER,
                            RT_NULL);
        rt_pin_write(LED_PIN, PIN_HIGH);
        lcd->parent.control(&lcd->parent, RTGRAPHIC_CTRL_RECT_UPDATE, &rect_info);
//        rt_event_recv(&ov2640_event,
//                            1,
//                            RT_EVENT_FLAG_AND | RT_EVENT_FLAG_CLEAR,
//                            RT_WAITING_FOREVER,
//                            RT_NULL);

//        rt_pin_write(LED_PIN, PIN_LOW);
//        lcd->parent.control(&lcd->parent, RTGRAPHIC_CTRL_RECT_UPDATE, &rect_info);
        if(ai_flag == 1)
        {
            if(rt_ai_run(person_d,NULL,NULL)!=0){rt_kprintf("ai run err\n"); return -1;}
            res_p = 0;
            for(int i = 0; i < RT_AI_PERSON_DECT_OUT_1_SIZE; i++){
                if(((int8_t*)_out)[i] > ((int8_t*)_out)[res_p]){
                    res_p = i;
                 }
             }
            frame++;
            if(res_p == 1)
            {
                if(count == 0)
                    frame = 0;
                if(frame - count > 10)
                {
                    count = 0;
                }
                else {
                    count++;
                }
                if(count == 10)
                {
                    ai_flag = 0;
                    for(uint8_t i=0 ; i<3 ; i++) //notice
                    {
                        lcd_fill(0, 240, 320, 480, RED);
                        rt_thread_mdelay(500);
                        lcd_fill(0, 240, 320, 480, BLACK);
                        rt_thread_mdelay(500);
                    }
                    count = 0;
                    rt_kprintf("person detect success!\n");
                }
            }
            if(ai_flag == 1)
                DCMI_Start();
            else
                DCMI_Stop();
        }
    }
    return RT_EOK;
}

#include "stm32h7xx.h"
static int vtor_config(void)
{
   /* Vector Table Relocation in Internal QSPI_FLASH */
   SCB->VTOR = QSPI_BASE;
   return 0;
}
INIT_BOARD_EXPORT(vtor_config);

void ai_camera()
{
    rt_gc0328c_init();
    ai_flag = 1;
    DCMI_Start();
}
MSH_CMD_EXPORT(ai_camera, Start the AI camera to recognize person);

