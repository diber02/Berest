# Загальне завдання

1.  **Визначити**  усі парні та невід'ємні числа вхідного масиву

**Виконання роботи**
1. **Функціональне призначення** 
	Програма призначена для визначення усіх парних та невід'ємних чисел вхідного масиву
2. Написання коду програми

			#define N 7   

			#include <stdlib.h> 
			int main() {

			int arr[N][N];

			int mas_res[N];


			zap_arr_rand(arr);
			calloc_mas_res(mas_res,arr);
			sort_and_fill_mas_res(arr,mas_res);


			return 0;
			}      
			int zap_arr_rand (int arr[][N]){

			for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
			*(*(arr + i)+j)= rand()%50-50;
			}
			}
			return arr;
			}
			int calloc_mas(int mas_res[]) {

			for (int i = 0; i < N; i++) {
			int *mas_res = calloc (N,sizeof(int));
			}
			}
			int sort_and_fill_mas_res(int mas_res[], int arr[][N]) {

			for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				
			if ( *(*(arr + i ) + j ) % 2 == 0 && *(*(arr + i ) + j ) > 0) {
			*(mas_res + i) =  *(*(arr + i ) + j ) ;
			}
			}
			}
			for(int i=0;*(mas_res+i)!= 0; i++){
			printf("%d ", *(mas_res+i));


			}
			}

3. Компіяція програми та перевірка на правильність її роботи через nemiver

![] (file:///home/diana/Berest/lab08,09,10/7.1.5/doc/nemiver.png  

4.Блок-схема

![] (file:///home/diana/Berest/lab11/2/doc/11.png)     

	

@author Berest D.
@date 20-dec-2020
@version 7.1.5

