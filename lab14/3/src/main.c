/**
 * @mainpage
 * # Загальне завдання
 * 1. **Визначити кількість слів у рядку тексту.**
 *
 *
 * @author  Berest D.
 * @date 14-mar-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи структури та методів оперування ним.
 *
 * @author Berest D.
 * @date 23-feb-2021
 * @version 1.0
 */


#include <stdio.h>
#include <stdlib.h>
#define SIZE 3


/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних
 *	@param pointer  	Створюємо покажчик для результату відкриття файлу
 *	@param rows		Змінна для кількості рядків
 	@param colums		Змінна для кількості стовбців
 	@param arrau[SIZE][SIZE]	Масив 

 *	
 * - Вивід результату роботи фунуції @function determ
 *
 * @return успішний код повернення з програми (0)
 */
int determ(int array[SIZE][SIZE], int N, FILE *pointer);

int main () 
{
	FILE *pointer;

	pointer = fopen("matrix.txt", "a+");
	int rows; // кількість рядків
	int colums; // кількість стовбчиків
	if (pointer != NULL)
	{
		printf("The file has been opened successfully\n");
		 fscanf(pointer, "%d %d", &rows, &colums);
		 if(rows != colums)
  		{
   		 	fclose(pointer); //завершуємо роботу з файлом
   		 	printf("\nError: детермінант матриці знайти неможливо\n\n");
   		 	exit(1);
		}else{

    	int N = rows;
  	  int array[SIZE][SIZE] = {0};

    	determ(array, N, pointer);
	    fclose(pointer); //завершуємо роботу з файлом

  }
  }

  return 0;

}
/**
 *
 * @function determ
 *
 *
 * Послідовність дій:
 *
 * - Через цикли скануємо з файлу нашу матрицю. Також за допомогою формули рахуємо детермінат
 * 
 *
 *
 *
 */

int determ(int array[SIZE][SIZE], int N, FILE *pointer)
{
    float det = 0;  //детермінант матриці
    float a = 0; //тимчасова змінна

    for(int i = 0; i < N; i++)
    {
      for(int j = 0; j < N; j++)
      {
        fscanf(pointer, "%d", &*(*(array+i)+j));
      }
    }

    printf("\n");
    printf("Задана матриця:");
    for(int i = 0; i < N; i++)
    {
      printf("\n");
      for(int j = 0; j < N; j++)
      {
      printf("%d ", *(*(array+i)+j));
      }
    }

    printf("\n\n");

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < N; j++)
    {
      if(j>i)
      {
      a = *(*(array+j)+i) / *(*(array+i)+i);
      for(int k = 0; k < N; k++){
      *(*(array+j)+k) -= a * *(*(array+i)+k);
    }
   }
  }
}
      det = 1;
      for(int i = 0; i < N; i++)
      {
        det *= *(*(array+i)+i);
      }

  printf("Детермінат матриці: %.0f\n", det);

  return det;
}
		
	


