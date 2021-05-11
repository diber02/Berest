#define DEBUG



#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define Local_Time __TIME__
#define Local_Date __DATE__
#define Date_Time() { \
	printf("Local date : %s\n", Local_Date); \
	printf("Local time : %s\n\n", Local_Time); \
}

#define function __func__
#define My_Function() { \
	printf(" This function : %s\n\n", function);\
}

#define Spent_Time() { \
	float time = (float)(end_time - start_time) / CLOCKS_PER_SEC; \
	printf ("Spent time : %f sec's\n", time);\
	}

#define ROWS 4

typedef struct
{
	char name[20];
	char email[30];
	char country[30];
} contact;
typedef struct  node_t
{
	bool open;
	char name[60];
	int summary;
	contact director;
	enum development
	{
		received,
		discussion, 
		evaluation, 
		coordination
	} stage;
	struct node_t *next;
} list;

