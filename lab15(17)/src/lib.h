/**
 * @file lib.h
 * @brief Файл з об'явою прототипів функцій.
 *
 * @author Berest D.
 * @date 16-apr-2021
 * @version 1.0
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
	char name[20];
	char email[30];
	char country[30];
} contact;
typedef struct 
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
} commercial;
/**
*
*	@function read_from_file 	-читання з файлу даних для полів стуктури
*
*/
void read_from_file (FILE *point_read, commercial *greement, int N);
/**
*
*	@function write_from_file 		-запис структури до файлу
*
*/
void write_to_file(FILE *point_write,  commercial *greement, int N);
/**
*
*	@function output		-виведення структури до терміналу
*
*/
void output (commercial *greement, int N);
/**
*
*	@function sort			- сортування за зростанням Суми
*
*/
void sort ( commercial *greement, int N );
/**
*
*	@function sort_alph		-сортування за алфавітом
*
*/
int sort_alph(  commercial *greement, int N);
/**
*
*	@function rand_fill 		- заповнення декулькох полів рандомними числами
*
*/
void rand_fill( commercial *greement, int N );
/**
*
*	@function write_binfile		-запис до бінарного файлу
*
*/
void write_binfile( FILE *point_write_binfile, commercial *greement, int N);
/**
*
*	@function read_binfile			-читання з бінарного файлу 
*
*/
void read_binfile( FILE* point_read_binfile, commercial *greement, int N);
