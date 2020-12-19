/*досконале число */
#include <stdio.h>

int main() {

int number = 28;
int b ;
int i;
int det = 0;
int perfect;


for ( i = 1; i < number; i++){
    b = number % i;
    if ( b == 0 ) {
        det += i;
    }
    
}
 if ( number == det) {
     perfect = 1; // число досконале 
 } else if ( number != det ) {
     perfect = 0; // число не досконале
 }

 
 /*
 while ( i < number ) {
     
      b = number % i;
    if ( b == 0 ) {
        det += i;
    }
    i++;
}
 if ( number == det) {
     perfect = 1;  
 } else if ( number != det ) {
     perfect = 0; 
 }

*/ 
 
/* 
 
 do {
    i++;
     b = number % i;
    if ( b == 0 ) {
        det += i;
    }
} while ( i < number);
   det = det - number;
  if ( number == det) {
     perfect = 1; 
 } else if ( number != det ) {
     perfect = 0; 
 }

 */

    printf("%d   ", perfect);

    return 0;
}

