#include <lib.h>

int main ()
{
	test_sort();
	return 0;	
}


void test_sort()
{
	int M = 3;
	commercial test[M];
	test[0].stage = 0;
	test[1].stage = 2;
	test[2].stage = 3;
	
	int t = sort_alph(test, M);
	if (t == 1)
	{
		printf("Function has been failed. The count of stages should be : 2, but function returned : 1\n");
	}
	else if ( t==2)
	{
		printf("Function has been successfully done\n");
	}
	else if ( t==3)
	{
		printf("Function has been failed. The count of stages should be : 2, but function returned : 3\n");
	}
	else if ( t==2)
	{
		printf("Function has been failed. The count of stages should be : 2, but function returned : 4\n");
	}
}



