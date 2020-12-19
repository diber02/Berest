

/* Визначити, чи є задане чиcло простим.*/

int main () {
 int a = 31 ;
 int b = 2 ; 
 int c;
 int result;
  
for ( a > 1 ;  b < a; b ++ ) {
       c = a % b;  
    if ( c == 0) {
     result = 0 ; /* 0 - чиcло не просте */
    } else {
     result = 1 ; /* 1 - число просте */
    }
     break ;
    } 
    


/*
 while ( a > 1 && b < a) {
    c = a % b;
    b++;
  if ( c == 0) {
     result = 0 ; // 0 - чиcло не просте 
    } else {
     result = 1 ; // 1 - число просте 
    }
    
}

*/


/* do  { 
   c = a % b;
    b++;
  if ( c == 0) {
     result = 0 ; // 0 - чиcло не просте 
    } else {
     result = 1 ; // 1 - число просте 
    }
    
}    while( a > 1 && b < a);

*/

  return 0;
 } 
 
