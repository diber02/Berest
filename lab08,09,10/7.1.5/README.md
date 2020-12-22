# Загальне завдання

1. **Визначити** чи є задане число простим.

**Виконання роботи**
1. **Функціональне призначення** 
	Програма призначена для визначення визначення чи є простим задане число 
2. Написання коду програми

		#include <stdio.h>

		int calc_result();
		int main()
		{	
		int a = 17 ;
 		int b = 2 ; 
 		int c = 0;
 		int result;
 
 
 		int res = calc_result(a, b, c, result);


 		return 0;
 		}
 
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
  
3. Компіяція програми та перевірка на правильність її роботи через nemiver

![] (file:///home/diana/Berest/lab08,09,10/7.1.5/doc/nemiver.png)  

4.Блок-схема

![] (file:///home/diana/Berest/lab08,09,10/7.1.5/doc/block.png)     

	

@author Berest D.
@date 20-dec-2020
@version 7.1.5

