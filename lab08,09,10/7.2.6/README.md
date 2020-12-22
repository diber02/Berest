# Загальне завдання

1. **Відсортувати** заданий масив методом "бульбашки" зважаючи на значення флагу.

**Виконання роботи**
1. **Функціональне призначення** 
	Програма призначена для сортування масиву за зростанням або зменшенням.

		#include <stdio.h>
		#define N 5
		
		int zap_arr( int arr[]) {

		srand(time(NULL));
		for (int i = 0; i < N; i++){
		arr[i] = rand()% 10;
      		}
  		}
  		
			 int main()
			{
			    int arr[N];
			    char symbol = 'u';
			    
			    zap_arr(arr);
			    
			    switch (symbol) {
				case 'u' :
				  sort_up (arr);
				break;
				
				case 'd' :
				  sort_down(arr);
				  break;
			    } 
			    

			    return 0;
			}
			int sort_down (int arr[]) {

			for (int i = 0; i < arr; i++) {
				for (int j = 0; j < N-i-1; j++){
					if ( arr[j] < arr[j+1]) {
					int temp = arr [j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					}
				 	}
					}
			  	}
			  
				  int sort_up (int arr[]){ 
				 for (int i = 0; i < N; i++) {
					    for (int j = 0; j < N-i-1; j++){
						if ( arr[j] > arr[j+1]) {
						int temp = arr [j];
						arr[j] = arr[j+1];
						arr[j+1] = temp;
						}
					    }
					}
				   }  
  
3. Компіяція програми та перевірка на правильність її роботи через nemiver

![] (file:///home/diana/Berest/lab08,09,10/7.2.6/doc/nemiver.png)   

4.Блок-схема

![] (file:///home/diana/Berest/lab08,09,10/7.2.6/doc/6.1.png)  

   	

@author Berest D.
@date 20-dec-2020
@version 7.1.5

