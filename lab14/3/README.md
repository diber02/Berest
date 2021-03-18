# Загальне завдання

1.  **Визначити кількість слів у рядку тексту.**
**Виконання роботи**
1. **Функціональне призначення** 

  Визначити кількість слів у рядку тексту.
  
2. Написання коду програми

			#include <stdio.h>
			#include <stdlib.h>
			#define SIZE 3


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
					}
					else
					{

						int N = rows;
						int array[SIZE][SIZE] = {0};

						determ(array, N, pointer);
						fclose(pointer); //завершуємо роботу з файлом
					}
				}

			return 0;

			}

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
							for(int k = 0; k < N; k++)
							{
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
					
				




  
3. Компіяція програми та перевірка на правильність її роботи через nemiver

![] (file:///home/diana/Berest/lab14/3/doc/comp.png)  

4.Блок-схема

![] (file:///home/diana/Berest/lab14/3/doc/14.png)     

	

@author Berest D.
@date 20-dec-2020
@version 7.1.5

