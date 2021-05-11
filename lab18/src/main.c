#include <lib.h>

int main()
{
	 srand(time(NULL));
	char *arr1 = (char *)malloc(sizeof(char));
	char *arr2 = (char *)malloc(sizeof(char));
	int t=0;
	arr1 = "sun_moon_sunshine";
	arr2 = "moonlight";
	printf("your first string : %s\n", arr1);
	//gets(arr1);
	printf("\n your second string : %s\n", arr2);
	//gets(arr2);	
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
	}
	else if ( m == 3)
    	{	
    		printf("Which one do you want to delete? 1 - 3 : "); 
    		int d = 0;
    		scanf("%d",&d);
    		delete_struct(greement, N,d);
    		
			
		}
    		
	
	
	free(greement);
	
	return 0;
}


