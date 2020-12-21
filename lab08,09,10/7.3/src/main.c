/**
 * @mainpage
 * # Загальне завдання
 * 1. **Скласти варіативну функцію** яка буде рахувати кількість пар , у яких перше число менше наступного
 *
 *
 * @author  Berest D.
 * @date 20-dec-2020
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
 
#include "stdio.h"
#include "stdarg.h"

int zap(int N, ... ) ;


  
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінної @param result  та присвоєння їй значення @function zap
 *
 * @return успішний код повернення з програми (0)
*/
int main ()
{
int result = zap;

 return 0;
}


/**
*
* @function zap
*
* Послідовність дій :
*
* - Оголошення змінних :
*	@param arr Наш заданий масив
*	@param N кількість елементів у масиві
*	@param res змінна - лічильник пар
*	@param elem  елемент масиву
*
*	Перевіряємо наші числа на виконання умови 
*
*
* 	@return  успішний код повернення з програми (res)
*/
int zap(int N, ... ) {

int arr[N];
int res = 0;

va_list ar; /*указывает на каждый из аругментов */
va_start (ar, N); /*инициализирует то что после N*/


for (int i = 0; i < N; i++) {

int elem = va_arg (ar,int); /*получаем след значение аргумета*/

arr[i] = elem;
}

/* сделаем счетчик для количества пар, у которых первое число больше другого */

for (int i = 0; i < N; i++) {
   /*зададим условие */
   if ( i != N - 1) {
     if (arr[i-1] < arr [i]) {
        res++;
       }
      }
     }  

 va_end (ar);
 
 return res;
}

