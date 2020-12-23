/* Визначити, чи є задане чиcло простим.*/




#include <stdio.h>



int calc_result();

int main () {

int a = 17 ;
 int b = 2 ; 
 int c = 0;
 int result;
 
 
 int res = calc_result(a,b,c,result);


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
      
       
 
 


