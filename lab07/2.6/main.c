

#include <stdio.h>
#define N 5


int zap_arr( int arr[]) {

   srand(time(NULL));

 for (int i = 0; i < N; i++){
        arr[i] = rand()% 10;
      }
  }
  
int sort_up (int arr[]){ 
 for (int i = 0; i < N; i++) {
            for (int j = 0; j < N-i-1; j++){
                if ( arr[j] > arr[j+1]) {
                   int temp = arr [j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
   }     
    


int sort_down (int arr[]) {

for (int i = 0; i < arr; i++) {
             for (int j = 0; j < N-i-1; j++){
                if ( arr[j] < arr[j+1]) {
                   int temp = arr [j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
  }
      
int main()
{
    int arr[N];
    char symbol = 'u';
    
    zap_arr(arr);
    
    switch (symbol) {
        case 'u' :
          sort_up (arr);
        break;
        
        case 'd' :
          sort_down(arr);
          break;
    } 
    

    return 0;
}

