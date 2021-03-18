/**
 * @mainpage
 * # Загальне завдання
 * 1. **Визначити** кількість слів у рядку тексту.
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

#include "stdio.h"
#include "string.h"
#define N 100


/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Оголошення змінних
 *	@param  stroka	Наш лічильник	
 
 * - Виведення речення "Введите предложение : "	для заповнення строки
 * - Виведення результату роботи фунуції @function fill_word
 * 
 *
 * @return успішний код повернення з програми (0)
 */
int main() {
	FILE *pointer;
	pointer = fopen("doc.txt","a+");
	
	char stroka[N]="";
	int result=0;
	if ( pointer != NULL) 
	{	
		printf("File has been created successfully\n");
		/*printf ("Enter your sentence : ");
		gets(stroka);
		fprintf(pointer,"%s", stroka);*/
		fgets(stroka,N,pointer);
		printf("%s\n",stroka);
	}
		
   
 
    fill_word(stroka,result);
   
    
    return 0;
}
 /**
 *
 * @function fill_word
 *
 *
 * Послідовність дій:
 *
 * Оголошення змінних :
 * - @param result
 * - @param symbol
 * - @param probel 
 * - @param s 
 * 
 *
 * - Пошук першого пробілу у заданій строці.
 * - Пошук пробілу після слова 
 * - Якщо є другий пробіл кількість слів збільшується 
 * 
 * 
 *
 * @return @param result ;
 */
 int fill_word(char stroka[N], int result){
 	FILE *res_doc;
  	res_doc=fopen("res_doc.txt", "a+");
	char *symbol;
	char *probel;
	
	int s = 0;
	char *end = strchr(stroka, '\0');  /*  Створюємо покажчик  для останнього елементу строки*/

	symbol = strchr(stroka, ' '); /* Перший елемент*/
	
while(s < 1){
        symbol =strchr(stroka, '!');
        if(symbol==NULL){
            break;
        }
        int a = symbol-stroka;
        *(stroka+a)=' ';
    }
	while(s < 1)
{
        symbol=strchr(stroka, '/');
        if(symbol==NULL){
            break;
        }
        int a = symbol-stroka;
        *(stroka+a)=' ';
    }
    while(s<1){
        symbol=strchr(stroka, '.');
        if(symbol==NULL){
            break;
        }
        int a = symbol-stroka;
        *(stroka+a)=' ';
    }
    while(s<1)
    {
        symbol=strchr(stroka, '?');
        if(symbol==NULL){
            break;
        }
        int a = symbol-stroka;
        *(stroka+a)=' ';
    }
    while(s<1)
    {
        symbol=strchr(stroka, ',');
        if(symbol==NULL)
        {
            break;
        }
        int a = symbol-stroka;
        *(stroka+a)=' ';
    }

	
	/*
	*(stroka+(symbol-stroka)) = '_';
		
	if(symbol-stroka !=0 ){
		result++;
	}
	*/
	
	probel = strchr(stroka, ' ');
	
	while( s < 1 )
	{
		if(probel == NULL)
		{
			if( symbol -stroka != end-stroka)
			{
				result++;
				break;
			}else
			 {
				break;
			 }
		}
		if(probel - symbol == 1)
		{
			symbol = probel ;
			*( stroka+(symbol-stroka)) = '_';
			probel = strchr(stroka, ' ');
		} else
		{
			symbol=probel;
			*(stroka+(symbol-stroka))='_';
			probel = strchr(stroka, ' ');
			result++;
		}
		
	}	
	
	printf("%d\n", result);
	 fprintf(res_doc, "%d\n",result);
return result;
    
}




 
 
 
 
 
 	
 
 
 
 
 
 
