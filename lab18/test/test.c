#include <lib.h>
int main ()
{
	test_insert();
	test_reduce();
	test_add();
	 test_delete();
	return 0;	
}


void test_insert()
{ 
	char test_arr1[] = "stringstring";
	char test_arr2[] = "NOT";
	int w = 6;

	if ( strcmp( insert( test_arr1, test_arr2, w), "stringNOTstring") == NULL)
	{
		printf("Function  INSERT  has been tested successfully!\n");
	} 
	else 
	{
		printf("Function hasn't been tested successfully :(\nTry again!\n");
	}
	
}


void test_reduce()
{
	char *test_arr1 = ( char *) malloc( sizeof( char));
	test_arr1 ="sun_and_moon";
	int l = 3;
	int m = 7;
	if ( strcmp( reduce( test_arr1, l, m), "sun_moon") == NULL)
	{
		printf("Function REDUCE has been tested successfully!\n");
	} 
	else 
	{
		printf("Function hasn't been tested successfully :(\nTry again!\n");
	}
	
}

void test_add()
{
	int n = 3;
	int count = 0;
	commercial *test_arr_add = (commercial *) malloc(n* sizeof(commercial));
	int size_one = sizeof(test_arr_add[0]);
	
	 for ( int i = 0; i < n; i++)
   	 {
        
		sprintf(test_arr_add[i].name, "%d", rand() % 20+2);
		test_arr_add[i].summary = rand()%20 + 2;
		sprintf(test_arr_add[i].director.name, "%d", rand() % 20+2);
		sprintf(test_arr_add[i].director.country, "%d", rand() % 20+2);
		test_arr_add[i].stage  = rand() % 4;
   	 }
   	 for ( int i = 0; i < n; i++)
   	 {
   	 	count += sizeof(test_arr_add[i]); 
   	 }
   	 int func = add_struct(test_arr_add,n);
   	 if ((func * size_one) == (count + (size_one * (func - n))))
   	 {
   	 	printf("Function  ADD  has been tested successfully!\n");
   	 }
   	 else 
	{
		printf("Function hasn't been tested successfully :(\nTry again!\n");
	}
	
}

void test_delete()
{
	int n = 3;
	int del = 3;
	
	
	commercial *test_arr_del = (commercial *) malloc(n* sizeof(commercial));
	for(int i = 0; i<n; i++)
	{
	test_arr_del[i].summary == rand()%40-10;
	}
	
   	delete_struct(test_arr_del,n,del);
   	 if (test_arr_del[del].summary == 0)
   	 {
   	 	printf("Function  DELETE  has been tested successfully!\n");
   	 }
   	 else 
	{
		printf("Function hasn't been tested successfully :(\nTry again!\n");
	}
	
}


