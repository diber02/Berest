/**
 * @mainpage
 * # Загальне завдання
 * 1. **Визначити **  чи є задане число простим
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

#include <stdio.h>



int calc_result();


/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних
 *	@param a  	Наше вхідне число
 *	@param b  	Дільник
 *	@param c  	Остача від ділення
 *	@param result    Результат у тілі функції
 	@param res 	Остаточний результат у главній фукції	
 *	
 * - Вивід результату роботи фунуції @function calc_result
 *
 * @return успішний код повернення з програми (0)
 */
int main()
{
	int a = 17 ;
 	int b = 2 ; 
 	int c = 0;
 	int result;
 
 
 	int res = calc_result(a, b, c, result);


 	return 0;
 }
 /**
 *
 * @function calc_result
 *
 *
 * Послідовність дій:
 *
 * - Обрахунок остачі від ділення нашого заданого числа на дільник за допомогою циклу 
 *
 * - Перевірка чи дорівнює остача нулю. 
 *
 * - Якщо дорівнює - @param result дорівнює нулю,тобто число не є простим.
 *
 * - Якщо остача не дорівнює нулю, а дорівнює одиниці, то @param result дорівнює одиниці та число є простим.
 *
 * @return @param result.
 *
 *
 */
 
  int calc_result(int a, int b, int c, int result ) {
 
    for ( a > 1 ;  b < a; b ++ ) {
       c = a % b;  
       }
       
        if (c == 0) {
            result = 0;
       } else if ( c == 1){
           result = 1;
       }
 
       return result;
      }
      
 
 
 
 
