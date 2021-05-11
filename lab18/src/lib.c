#include <lib.h>


char *insert( char *arr1, char *arr2, int t)
{
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
				
		for ( ; i < n +1 ; i++)
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
		
		return i;
}
    	
    
    		
    	
int delete_struct(commercial *greement, int n, int d)
{
	
    		printf("\n");
    		memset(greement + d,' ',sizeof(commercial)); 
 		
 		for(int k = d; k < n; k++)
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
    	
    	
    	/*switch(m)
    	{
    		case '1' : output(greement,N);
		case '2' :
			
			for ( int i = 0; i < n; i++)
			    {
				
				sprintf(new_add[i].name, "%d", rand() % 20+2);
				new_add[i].summary = rand()%20 + 2;
				sprintf(new_add[i].director.name, "%d", rand() % 20+2);
				sprintf(new_add[i].director.country, "%d", rand() % 20+2);
				new_add[i].stage  = rand() % 4;
			    }
	
				memcpy(greement + n, new_add, sizeof(commercial));
				
				output(greement,N);
				
		case '3' : printf("Which one do you want to delete? 0 - 3"); 
			   int d = 0;
    		scanf("%d",&d);
    		printf("\n");
    		memset(greement + d,' ',sizeof(commercial)); 
 		
 		memcpy(greement + d, greement + d , sizeof(commercial));
 		
				
		for ( int i = 0; i < n - 1 ; i++)
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
			  
	}
			    
	*/	
		
			
    	

