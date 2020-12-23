/**
 * @mainpage
 * # Загальне завдання
 * 1. Даний масив з речовинних чисел. Максимальні елементи кожного стовпця переписати в одномвиірний масив
 * @author Berest D.
 * @date 21-dec-2020
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи структури та методів
 * оперування ним.
 *
 * @author Berest D.
 * @date 21-dec-2020
 * @version 1.0
 */

#include "stdio.h"

#define N 7


/**
 * Головна функція.
 *
 * Послідовність дій:
 *
 * - Виведення @function  zap_arr
 * - Виведення @function schet
 *
 *
 * @return успішний код повернення з програми (0)
 */
int main() {
	float arr[N][N];
	float mas_res[N*N]={0};
	zap_arr(arr);
	schet (arr, mas_res);
	return 0;
}

/**
 * @function zap_arr
 *
 * Функція для заповнення вхідного массиву псевдовипадковими числами
 *
 */
void zap_arr(float arr[][N]){
srand(time(0));
for(int i=0;i<N;i++){
for(int j=0;j<N;j++){
*(*(arr+i)+j)=rand()%100;
}
}
}

/**
 * @function schet
 *
 * Функція для визначення всiх парних додатніх чисел
 *
 * Послідовність дій:
 
 * - Оголошення змінних :
 *
 *	@param а кількість парних додатніх чисел
 *
 * - Цикл для перевірки кожного елементу двовимірного массиву:
 * 	- Якщо число додатне і парне - а++ і число записується у одновимірний массив
 */
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
