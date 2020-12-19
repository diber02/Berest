#include <stdio.h>

/* Визначити найбільший спільний дільник двох заданих чисел. */

int main () {

int a = 529;
int b = 1541;
int NOD=0;

/*  Використаємо метод Евкліду */ 

  while ( a > 0 && b > 0 &&  a != 0 && b != 0 ){
    if ( a > b) {
      a = a % b;
      NOD = b;
      
    } else if ( a < b ) {
     b = b % a;
     NOD = a;
    } 

    }
   
   
   
   /* for ( int i = a , k = b; i != 0 && k != 0 ; ) {
        if ( i > k ) {
            i = i % k;
            NOD = k;
        } else if ( k > i )  {
            k = k % i;
            NOD = i;
        }
    
     
   }
 */
   
  /* 
   do {
       if ( a > b ) {
           a = a % b;
           NOD = b;
       } else if ( b > a ) {
           b = b % a;
           NOD = a;
       }
       
   }  while ( a > 0 && b > 0 && a != 0 && b != 00);
     
     
  */ 
   
 
  
  return 0;
 }
