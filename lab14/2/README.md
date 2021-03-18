# Загальне завдання

1.  **Визначити** кількість слів у рядку тексту.
**Виконання роботи**
1. **Функціональне призначення** 

  Визначити кількість слів у рядку тексту.
  
2. Написання коду програми

		#include "stdio.h"
		#include "string.h"
		#define N 50
		int main() {
			
		char stroka[N]="";
		printf("Введите предложение : ");
		fgets(stroka,N, stdin);
		fill_word(stroka);
		return 0;
		}
		int fill_word(char stroka[N]){
				char *symbol;
				char *probel;
				int result=0;
				int s=0;
				char *end=strchr(stroka, '\0');  /*  Створюємо покажчик  для останнього елементу строки*/

				symbol = strchr(stroka, ' '); /* Перший елемент*/
				
			while(s < 1){
				symbol =strchr(stroka, '!');
				if(symbol==NULL){
				    break;
				}
				int a = symbol-stroka;
				*(stroka+a)=' ';
			    }
			 while(s < 1){
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
			    while(s<1){
				symbol=strchr(stroka, '?');
				if(symbol==NULL){
				    break;
				}
				int a = symbol-stroka;
				*(stroka+a)=' ';
			    }
			    while(s<1){
				symbol=strchr(stroka, ',');
				if(symbol==NULL){
				    break;
				}
				int a = symbol-stroka;
				*(stroka+a)=' ';
			    }
			    
				
				if(symbol == NULL){
					result++;
					printf("%d", result);
					return 0;
				}
					
				*(stroka+(symbol-stroka)) = '_';
					
				if(symbol-stroka !=0 ){
					result++;
				}
					
				probel = strchr(stroka, ' ');
				
				while( s < 1 ){
					if(probel == NULL){
						if( symbol -stroka != end-stroka){
							result++;
							break;
						}else{
							break;
						}
					}
					if(probel - symbol == 1){
						symbol = probel ;
						*( stroka+(symbol-stroka)) = '_';
						probel = strchr(stroka, ' ');
					} else{
						symbol=probel;
						*(stroka+(symbol-stroka))='_';
						probel = strchr(stroka, ' ');
						result++;
					}
					
				}	
				
				printf("%d\n", result);
			    
}


  
3. Компіяція програми та перевірка на правильність її роботи через nemiver

![] (file:///home/diana/Berest/lab11/1/doc/nemiver.png)  

4.Блок-схема

![] (file:///home/diana/Berest/lab08,09,10/7.1.5/doc/block.png)     

	

@author Berest D.
@date 20-dec-2020
@version 7.1.5

