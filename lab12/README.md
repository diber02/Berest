# Загальне завдання

1.  **Продемонструвати взаємодію з користувачем шляхом використання певних функцій**

**Виконання роботи**
1. **Функціональне призначення** 
	Програма призначена для демонстрації взаємодії з користувачем
2. Написання коду програми

		#include <stdio.h>
		#include <stdlib.h>
		#define SIZE 30

		void fill_array (int **array,int  N) ;//прототипи функцій

		void sort_array(int **array,int N);

		int main() 
		{
		srand(time(NULL));
		  
		char name [SIZE];
		char group;
		    
		printf("\n\nВведіть ім'я користувача : ");
		gets(name);
		printf ("Введіть букву своєї групи : ");
		group = getc(stdin);
		puts("Добрий день, можете почати працювати! \n");
		  
		char s = '-';
		for (int i = 0; i < 80; i++)
		{
		putc ( s,stdout);
		}
		  
		printf("\n\nАвтор : Берест Діана, студентка групи КІТ-120в\n\nЛабораторна робота 12\n\nТема : продемонструвати взаємодію з користувачем шляхом використання різноманітних функцій\n\n");
		  
		  
		for (int i = 0; i < 80; i++)
		{
			putc ( s,stdout);
		}
		 
		int N;

		printf("Якого розміру буде ваш масив? :");
		scanf("%d",&N);
		  
		   //create a new dimensional array

		int **array = (int**)calloc(N,sizeof(int*));
		for(int i=0; i<N; i++)
		{
		array[i] = (int*)calloc(N,sizeof(int));
		}
		  
		  
		  
		fill_array(array,N);
		sort_array(array,N);
		  
		return 0;
		  
		for (int i = 0; i < N; i++) // освобождаем память после окончания работы 
		{ 
		free(array[i]);
		}
		free(array);
		     
		}


		void fill_array (int **array,int N) 
		{ 
		for (int i= 0;i<N;i++)
		{
		for (int j= 0; j <N;j++) 
		{
		    
		*(*(array+i)+j)=rand()%10;
		/*
		printf ("arr[%d][%d] = ", i,j);
		scanf ("%d",&*(&*(array + i)+j));
		*/
		      
		}
		}
		}  


		void sort_array( int **array, int N)
		{

		int array_result[15] = {0};
		int counter = 0;
		int *p_result=&array_result[0];

		for (int i = 0; i < N; i++)
		{
		for (int j = 0; j < N; j++)
		{
		if(*(*(array+i)+j)%2==0 && *(*(array+i)+j)>0)
		{ 
		*(p_result + counter + 1)=*(*(array+i)+j);
		counter++;
		}
		}
		}
		*(p_result) = counter;
		for(int i=0;*(p_result+i)!=0;i++)
		{ 
		printf("%d\n",*(p_result+i));
		}
		}



3. Компіяція програми та перевірка на правильність її роботи через nemiver

![] (file:///home/diana/Berest/lab12/doc/компиляция.png ) 

4.Блок-схема

![] (file:///home/diana/Berest/lab12/doc/12.png)     

	

@author Berest D.
@date 23-feb-2021
@version 12.0

