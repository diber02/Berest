# Загальне завдання

1.  **Даний масив з речовинних чисел. Максимальні елементи кожного стовпця переписати в одномвиірний масив**

**Виконання роботи**
1. **Функціональне призначення** 
	Програма призначена для визначення максимального елементу стовпця у двовимірному масиві
2. Написання коду програми

		#include "stdio.h"

		#define N 7
		int main() {
		float arr[N][N];
		float mas_res[N*N]={0};
		zap_arr(arr);
		schet (arr, mas_res);
		return 0;
		}
		void zap_arr(float arr[][N]){
		srand(time(0));
		for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
		*(*(arr+i)+j)=rand()%100;
		}
		}
		}
		void schet(float arr[][N], float mas_res[]){
		float a;
		for(int i=0;i<N;i++){
		a=*(*(arr+i));
		for(int j=1;j<N;j++){
		if(a <*(*(arr+i)+j)){
		a =*(*(arr+i)+j);
		}
		}
		*(mas_res+i)= a;
		}
		}
  
3. Компіяція програми та перевірка на правильність її роботи через nemiver

![] (file:///home/diana/Berest/lab11/3/doc/nemiver.png)  

4.Блок-схема

![] (file:///home/diana/Berest/lab08,09,10/7.1.5/doc/block.png)     

	

@author Berest D.
@date 20-dec-2020
@version 7.1.5

