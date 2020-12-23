/**
 * @mainpage
 * # Загальне завдання
 * 1. **Визначити **  усі парні та невід'ємні числа вхідного масиву
 *
 *
 * @author  Berest D.
 * @date 21-dec-2020
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи структури та методів оперування ним.
 *
 * @author Berest D.
 * @date 20-dec-2020
 * @version 1.0
 */

#define N 7   

#include <stdlib.h> 


/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних
 *	@param arr  	Наш віхдний масив
 *	@param mas_res 	Результуючий масив

 *	
 * - Вивід результату роботи фунуції @function zap_arr_rand
 * - Вивід результату роботи фунуції @function sort_and_fill_mas_res
 *
 * @return успішний код повернення з програми (0)
 */
 
int main() {

int arr[N][N];

int mas_res[N];


zap_arr_rand(arr);

sort_and_fill_mas_res(mas_res);
 


return 0;
}      
 /**
 *
 * @function zap_arr_rand
 *
 *
 * Послідовність дій:
 *
 * - Через цикли заповнюємо масив псевдовипадковими числами
 *

 *
 * @return @param arr[].
 *
 *
 */
 
 int zap_arr_rand (int arr[][N]){

for (int i = 0; i < N; i++) {
for (int j = 0; j < N; j++) {
  *(*(arr + i)+j)= rand()%10-5;
  }
  }
  return arr;
 }
 
 


  
 /**
 *
 * @function sort_and_fill_mas_res
 *
 *
 * Послідовність дій:
 *
 * - Через цикли перевіряємо масив за умови що елемент масиву повинен
 * - ділитися без остачі на 2, та повинен бути більшим за нуль
 *
 * 
 *
 * @return @param mas_res.
 *
 *
 */
 
int sort_and_fill_mas_res(int mas_res[], int arr[][N]) {

int schetchik;
for (int i = 0; i < N; i++) {
	for (int j = 0; j < N; j++) {
	
 	if ( *(*(arr + i ) + j ) % 2 == 0 && *(*(arr + i ) + j ) > 0) {
 	
	 *(mas_res + 1 + schetchik) =  *(*(arr + i ) + j ) ;
	 schetchik++;
	 *(mas_res+i) = schetchik;
}
}
}
return  mas_res;
}


