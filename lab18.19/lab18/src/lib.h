#include <stdio.h>
#define N 3

typedef struct
{
	char name[20];
	char email[30];
	char country[30];
} contact;
typedef struct 
{
	
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
} commercial;


char *insert(  char *arr1, char *arr2, int t);

char  *reduce( char *arr1, int k, int a);

int add_struct( commercial *greement, int n);

int delete_struct(commercial *greement, int n, int d);
