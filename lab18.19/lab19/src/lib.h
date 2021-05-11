#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
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

