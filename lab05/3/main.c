/* Визначити, чи є квиток щасливим. */
#include <stdio.h>


int main()
{
    
    int number = 250223;
    int num1 = number;
    int first;
    int second;
    int sum1 = 0; 
    int sum2 = 0;
    
    int i;
    int j;
    int lucky ;
    
    for ( i = 0; i < 3; i ++) {
        number = number / 10;
        first = number;
        
        num1 = num1 % 1000;
        second = num1;
    }
 
     
     for ( j = 0; j < 3; j++) {
         
        
        sum1 += first % 10 ;
        first /= 10; 
        
        sum2 += second % 10 ;
        second /= 10; 
     }
   
     if ( sum1 == sum2) {
     lucky = 1;  // квиток щасливий
     } else if ( sum1 != sum2) {
     lucky = 0; // квиток не щасливий
     } 
 

    
    return 0;
}


 

