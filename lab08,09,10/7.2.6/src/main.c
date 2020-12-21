/**
 * @mainpage
 * # Загальне завдання
 * 1. **Відсортувати **  заданий масив за зростанням та зменшенням методом "бульбашки"
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
#define N 5

/**
* 	@function zap_arr
* 	
* - Послідовність дій :
*
* - Заповнення масиву псевдовипадковими числами за допогою циклу
* 
*
*/
int zap_arr( int arr[]) {

   srand(time(NULL));

 for (int i = 0; i < N; i++){
        arr[i] = rand()% 10;
      }
  }
  
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних
 *	@param arr[]  	Наш вхідний масив
 *	@param symbol  	Наш флаг, який буде вирішальним для сортурвання 
 *	@param N	Розмір масиву
 *	
 * - Вивід результату роботи функції @funcion sort_up або  @funcion sort_down
 *
 * @return успішний код повернення з програми (0)
 */
  
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

  /**
 * 	@function sort_down 
 *
 * - Послідовність дій :
 * 
 * - Сортування елементів масиву за зростанням , якщо @param char = 'd'
 * - Оголошення змінних 
 *	@param temp
 *
 */
  
  
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
  
  
 
  
 /**
 * 	@function sort_up 
 *
 * - Послідовність дій :
 * 
 * - Сортування елементів масиву за зростанням , якщо @param char = 'u'
 * - Оголошення змінних 
 *	@param temp
 *
 */
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
 
 
 
 
 
 
 
  
