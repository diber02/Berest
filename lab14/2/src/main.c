#include <stdio.h>
#define N 100


long int filesize( FILE* pointer) //This function is for counting bytes
{
	long int position;
	long int size;
	position = ftell( pointer);
	fseek( pointer, 0L, SEEK_END);
	size = ftell (pointer);
	fseek (pointer,position,SEEK_SET);
	return (size);
}

int main () 
{
	FILE *pointer;

	pointer = fopen("doc.txt", "a+");
	char stroka[N] = {0};
	
	if (pointer != NULL)
	{
		printf("The file has been opened successfully\n");
		printf ("Введите строку :");
		gets(stroka);
		
		fprintf (pointer, "%s", stroka);
	
		printf("File size = %ld bytes\n ", filesize(pointer));
		fclose (pointer);
	}
	else 
	{
		printf ("The file hasn't been opened\n");
	}
	
return 0;
}
