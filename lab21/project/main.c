#include "../library/src/lib.h"

int main()
{
	clock_t start_time = clock();
	Date_Time();
	 srand(time(NULL));
	char *arr1 = (char *)malloc(sizeof(char));
	char *arr2 = (char *)malloc(sizeof(char));
	int t=0;
	arr1 = "sun_moon_sunshine";
	arr2 = "moonlight";
	printf("your first string : %s\n", arr1);
	
	printf("\n your second string : %s\n", arr2);
	
	printf("\nEnter your index where you want put second string : ");
	scanf("%d", &t);
	printf("\n---------------\n");
	insert(arr1,arr2,t);
	printf("\n---------------\n");
	int k = 0;
	printf("Enter your index from where you want erase string : ");
	scanf("%d", &k);
	int a = 0;
	printf("\nEnter your index to where you want erase string : ");
	scanf("%d", &a);
	reduce( arr1, k, a);
	printf("\n---------------\n");
	commercial *greement = (commercial *)malloc(sizeof(commercial));
	output(greement, N);
	printf("What would you like to do with this struct array?\n1 - nothing\n2 - add struct\n3 - delete struct\n");
	int m = 0;
    	scanf("%d", &m);
    	printf("\n");
    	
    	if ( m == 1)
    	{
    		output(greement,N);
    	}
    	
    	else if ( m == 2)
    	{
		add_struct(greement, N);
				
		for ( int i = 0; i < N +1 ; i++)
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
	else if ( m == 3)
    	{	
    		
    		delete_struct(greement, N,m);
    		
			
		}
    		
	
	
	free(greement);
	clock_t end_time = clock();
    	Spent_Time();	
	
	return 0;
}


