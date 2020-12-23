/**
 * @mainpage
 * # Загальне завдання
 * 1. **Визначити **  кількість пар сусідніх елементів з однаковими значеннями. Переписати ці пари у другий масив.
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
 * @date 21-dec-2020
 * @version 1.0
 */

 #define N 6

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних
 *	@param schetchik	Наш лічильник	
 *	@param mas_ res		Результуючий масив
 *	@param arr 	Наш вхідний масив
 *	
 * - Виведення результату роботи фунуції @function sort_arr
 * - Виведення результату роботи фунуції @function fill_mas_res
 *
 * @return успішний код повернення з програми (0)
 */
int main() {
 int schetchik;
 int mas_res[N]={0};
 int arr [N] = {1,2,2,9,3,3};

sort_arr(arr, schetchik);
 
fill_mas_res (arr,mas_res);
 
 return 0;
 }
 /**
 *
 * @function sort_arr
 *
 *
 * Послідовність дій:
 *
 * - Сортування нашого вхідного масиву за умовою щоб 
 * - і-й елемент масиву дорінвював наступному елементу, та не дорівнював елементу +2 
 * 
 * - Якщо умова виконується, то лічильник збільшується на 1
 *
 * @return @param schetchik
 */
 int sort_arr( int arr []) {

int schetchik = 0;
for (int i = 0; i < N; i++) {
   if (( *(arr + i) == *(arr + i + 1)   &&  *(arr+i) != *(arr+i+2))) {
      schetchik++;
    }
  }    
return schetchik; 
}
 
 /**
 *
 * @function fill_mas_res
 *
 *
 * Послідовність дій:
 *
 * - Задаємо умову для заповнення нашого результуючого масиву : 
 * - елемент нашого масиву повинен дорівнювати наступному та не буде дорівнювати слідуючому,
 * 
 * - Якщо умова виконується, то елемент результуючого масиву буде дорівнювати елементу вхідного масиву
 *
 * @return @param mas_res
 *
 */
 
int fill_mas_res(int arr[], int mas_res[]) {
for (int i = 0; i < N; i++) {
 if ( *(arr + i) == *(arr + i + 1)   &&  *(arr+i) != *(arr+i+2)) {
    *(mas_res+i) = *(arr+i);
    *(mas_res+i+1) = *(arr+i+1);
 }
 }
return mas_res;
}




 
 
 
 
 
 	
 
 
 
 
 
 
