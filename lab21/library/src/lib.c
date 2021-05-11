/**
 * @file lib.c
 * @brief Файл з реалізацією функцій.
 *
 * @author Berest D.
 * @date 10-may-2021
 * @version 1.0
 */
 

#include "lib.h"


char *insert( char *arr1, char *arr2, int t)
{
	 My_Function();
	 
	int SIZE = strlen(arr1)+ strlen(arr2);
	char *str = (char *) malloc(SIZE);
	
	if (str == 0)
	{
		printf("the memory doesn't allocated");
	}

	int size1 = strlen(arr1);
	printf("%d\n", size1);
	int size2 = strlen(arr2);
	printf("%d\n", size2);
	memcpy(str, arr1, t);
	memcpy(str + t, arr2, size2);
	memcpy( str+t+size2, arr1 + t, size1);
	printf("Final string : %s\n", str);
	
	
	return str;
	
	
}

char *reduce( char *arr1, int k, int a)
{
	 My_Function();
	 
	char *str = (char *) malloc(strlen(arr1));
	if (str == 0)
	{
		printf("the memory doesn't allocated");
	}
	
	memcpy(str, arr1, k);
	memcpy (str+k,arr1 + a, strlen(arr1) - a);
	printf("\nFinal string : %s\n", str);
	return str;
	
}

void output( commercial *greement, int n )
{
	 My_Function();

    for ( int i = 0; i < n; i++)
    {
        
        sprintf(greement[i].name, "%d", rand() % 20+2);
        greement[i].summary = rand()%20 + 2;
        sprintf(greement[i].director.name, "%d", rand() % 20+2);
        sprintf(greement[i].director.country, "%d", rand() % 20+2);
        greement[i].stage  = rand() % 4;
    }


    for ( int i = 0; i < n; i++)
    {	
    	printf("Структура № : %d\n", i +1 );
    	printf("\n---------------\n");
        printf("\n\nКомпания № %s\n", greement[i].name );
        printf("Сумма : %d\n", greement[i].summary );
        printf("Партнер № %s\n", greement[i].director.name );
        printf("Место в рейтинге популярных фирм : №%s\n", greement[i].director.country);
        if ( greement[i].stage == received  )
	{
	      printf("The stage: a request for project implementation was received \n" );
        }
        if ( greement[i].stage == discussion  )
        {
            printf("The stage: a project discussion  \n" );
	}
        if ( greement[i].stage == evaluation )
        {
            printf("The stage: project evaluation \n" );
	}
        if ( greement[i].stage == coordination )
        {
            printf("The stage : coordination of details\n" );
	}
        printf("\n\n");
    }
}

int add_struct( commercial *greement, int n )
{
	 My_Function();
	 
	int i =0;
   
    	commercial new_add[1];
    	
    		for ( ; i < n + 1; i++)
		{
			sprintf(new_add[i].name, "%d", rand() % 20+2);
			new_add[i].summary = rand()%20 + 2;
			sprintf(new_add[i].director.name, "%d", rand() % 20+2);
			sprintf(new_add[i].director.country, "%d", rand() % 20+2);
			new_add[i].stage  = rand() % 4;
			i++;
		}
	
		memcpy(greement + n, new_add , sizeof(commercial));
		
		
		return i;
}
    	
    
    		
    	
int delete_struct(commercial *greement, int n, int m)
{
	
    		printf("\n");
    		memset(greement + m,' ',sizeof(commercial)); 
 		
 		for(int k = m; k < n; k++)
 		{
 			memmove(greement+k , greement +k+1 , sizeof(commercial));
 		}
 		
		for ( int i = 0;  i < n-1  ; i++)
		{	
			printf("Структура № : %d\n", i+1);
			printf("\n---------------\n");
			printf("\n\nКомпания № %s\n", greement[i].name );
			printf("Сумма : %d\n", greement[i].summary );
			printf("Партнер № %s\n", greement[i].director.name );
			printf("Место в рейтинге популярных фирм : №%s\n", greement[i].director.country);
			if ( greement[i].stage == received  )
			{
				printf("The stage: a request for project implementation was received \n" );
			}
			if ( greement[i].stage == discussion  )
			{
				printf("The stage: a project discussion  \n" );
			}
			if ( greement[i].stage == evaluation )
			{
				printf("The stage: project evaluation \n" );
			}
			if ( greement[i].stage == coordination )
			{
				printf("The stage : coordination of details\n" );
			}
			printf("\n\n");

}
}
    	

