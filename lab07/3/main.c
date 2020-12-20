#include "stdio.h"
#include "stdarg.h"


int zap(int N, ... ) ;

int main ()
{

int result = zap;

 return 0;

}


int zap(int N, ... ) {

int arr[N];
int res = 0;

va_list ar; /*указывает на каждый из аругментов */
va_start (ar, N); /*инициализирует то что после N*/


for (int i = 0; i < N; i++) {

int elem = va_arg (ar,int); /*получаем след значение аргумета*/

arr[i] = elem;
}

/* сделаем счетчик для количества пар, у которых первое число больше другого */

for (int i = 0; i < N; i++) {
   /*зададим условие */
   if ( i != N - 1) {
     if (arr[i-1] < arr [i]) {
        res++;
       }
      }
     }  

 va_end (ar);
 
 return res;
}
