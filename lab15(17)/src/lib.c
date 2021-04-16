/**
 * @file lib.c
 * @brief Файл з реалізацією функцій.
 *
 * @author Berest D.
 * @date 16-apr-2021
 * @version 1.0
 */
 
#include "lib.h"

char* bool_output(bool b)
{
    return (b) ? ("да") : ("нет");
}

bool bool_input(char *str)
{
    return ( strcmp(str, "true") == 0 ) ? true : false;
}


void read_from_file( FILE *point_read,  commercial greement[], int N )
{   
    int i;

    for ( i = 0; i < N; i++)
    {
        char stage[20];
        char open[7];

        fscanf(point_read,"%s", open );
        fscanf(point_read,"%s", &greement[i].name );
        fscanf(point_read,"%d", &greement[i].summary );

        fscanf(point_read,"%s", &greement[i].director.name );
        fscanf(point_read,"%s", &greement[i].director.email );
	fscanf(point_read,"%s", &greement[i].director.country );
        fscanf(point_read,"%s", stage );
         if ( strcmp(stage, "received") == 0 )
         {
           greement[i].stage = 0;
	}
        if ( strcmp(stage, "discussion") == 0 )
        {
            greement[i].stage  = 1;
         }   
        if ( strcmp(stage, "evaluation") == 0 )
        {
           greement[i].stage = 2;
         }  
   	if ( strcmp(stage, "coordination") == 0 )
   	{
           greement[i].stage = 3;
	}

        
        greement[i].open = bool_input(open); 
    }


}

void output ( commercial *greement, int N )
{   
    

    for ( int i = 0; i < N; i++)
    {
        printf("\n\nCompany №%d\n", i+1 );
        printf("Open or not - %s\n", bool_output(greement[i].open) );
        

        printf("Name of company: %s\n",greement[i].name );
        printf("Summary: %d\n", greement[i].summary );

        printf("Director's name: %s\n", greement[i].director.name );
        printf("Director's email: %s\n", greement[i].director.email );
	printf("Company's country: %s\n",greement[i].director.country );
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

void write_to_file( FILE *point_write, commercial *greement, int N  )
{   
    for ( int i = 0; i < N; i++)
    {
        fprintf(point_write, "%s %s %d %s %s %s", bool_output(greement[i].open), greement[i].name, greement[i].summary, 
         greement[i].director.name, greement[i].director.email, greement[i].director.country);
         
        if ( greement[i].stage == received  )
	{
	      fprintf(point_write,"%s", "The stage: a request for project implementation was received \n" );
        }
        if ( greement[i].stage == discussion  )
        {
           fprintf(point_write,"%s","The stage: a project discussion  \n" );
	}
        if ( greement[i].stage == evaluation )
        {
           fprintf(point_write,"%s","The stage: project evaluation \n" );
	}
        if ( greement[i].stage == coordination )
        {
            fprintf(point_write,"%s","The stage : coordination of details\n" );
	}
       
    }
}


void sort (  commercial *greement, int N)
{
  	int temp;

	       for (int i = 0; i < N-1; i++) 
		{
		    for (int j = 0; j < N-i-1; j++) 
		    {
		           if (greement[j].summary < greement[j+1].summary)
		           {
		           
		            temp = greement[j].summary;
		            greement[j].summary = greement[j+1].summary;
		            greement[j+1].summary = temp;
		    	}
		    }
		 }           
		printf("Sorting summary\n\n");
		
		for (int i = 0; i < N; i++) 
		    printf("%d\n", greement[i].summary);
		    printf("\n\n"); 

   
   
}
int sort_alph( commercial *greement, int N)
{
	int count= 0;
	for (int i = 0; i < N; i++) 
      	{
      		if (greement[i].stage == 3 || greement[i].stage == 2)
      		{
      		
           	 count++;
           	}           
        
        }
    	printf("\n\ncount of stages : %d\n\n", count );
	
      return count;
}




void rand_fill( commercial *greement, int N )
{
    srand((unsigned int)time(NULL));

    for ( int i = 0; i < N; i++)
    {
        greement[i].open = rand() % 2;

        sprintf(greement[i].name, "%d", rand() % 20+2);
        greement[i].summary = rand()%20 + 2;
        sprintf(greement[i].director.name, "%d", rand() % 20+2);
        sprintf(greement[i].director.country, "%d", rand() % 20+2);
        greement[i].stage  = rand() % 4;
    }



    for ( int i = 0; i < N; i++)
    {
    
    	
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
  
void write_binfile( FILE *point_write_binfile, commercial *greement, int N)
{
	for (int i = 0; i < N; i++)
	{
		fwrite(greement + i, sizeof(commercial), 1,point_write_binfile);
	}
	
}

void read_binfile( FILE* point_read_binfile, commercial *greement, int N)
{
	for (int i = 0; i < N; i++)
	{
		fread( greement + i, sizeof(commercial), 1, point_read_binfile);
	
	}	
	 
}

