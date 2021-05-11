/**
 * @file lib.h
 * @brief Файл з об'явою прототипів функцій.
 *
 * @author Berest D.
 * @date 10-may-2021
 * @version 1.0
 */
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
/**
*	@function insert	-  для "вставки" другого рядку в перший 
*/

char *insert(  char *arr1, char *arr2, int t);
/**
*	@function reduce	- для видалення символів за індексом
*/

char  *reduce( char *arr1, int k, int a);
/**
*	@function add_struct	-для додавання структури 
*/
int add_struct( commercial *greement, int n);
/**
*	@function delete_struct	- для видалення структури
*/
int delete_struct(commercial *greement, int n, int d);
