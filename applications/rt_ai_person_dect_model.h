#ifndef __RT_AI_PERSON_DECT_MODEL_H
#define __RT_AI_PERSON_DECT_MODEL_H

/* model info ... */

// model name
#define RT_AI_PERSON_DECT_MODEL_NAME			"person_dect"

#define RT_AI_PERSON_DECT_WORK_BUFFER_BYTES		(38048)

#define AI_PERSON_DECT_DATA_WEIGHTS_SIZE		(219064)

#define RT_AI_PERSON_DECT_BUFFER_ALIGNMENT		(4)

#define RT_AI_PERSON_DECT_IN_NUM				(1)

#define RT_AI_PERSON_DECT_IN_SIZE_BYTES	{	\
	((96 * 96 * 3) * 1),	\
}
#define RT_AI_PERSON_DECT_IN_1_SIZE			(96 * 96 * 3)
#define RT_AI_PERSON_DECT_IN_1_SIZE_BYTES		((96 * 96 * 3) * 1)
#define RT_AI_PERSON_DECT_IN_TOTAL_SIZE_BYTES		((96 * 96 * 3) * 1)



#define RT_AI_PERSON_DECT_OUT_NUM				(1)

#define RT_AI_PERSON_DECT_OUT_SIZE_BYTES	{	\
	((1 * 1 * 2) * 1),	\
}
#define RT_AI_PERSON_DECT_OUT_1_SIZE			(1 * 1 * 2)
#define RT_AI_PERSON_DECT_OUT_1_SIZE_BYTES		((1 * 1 * 2) * 1)
#define RT_AI_PERSON_DECT_OUT_TOTAL_SIZE_BYTES		((1 * 1 * 2) * 1)




#define RT_AI_PERSON_DECT_TOTAL_BUFFER_SIZE		//unused

#endif	//end
