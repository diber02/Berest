
 
 #include <stdio.h>
#define N 5

int main()
{
    int arr[N] = {1, 3, 8, 9, 5};
    int temp = 0;
    char symbol = 'u';
    
    switch (symbol) {
        case 'u' :
          for (int i = 0; i < N; i++) {
            for (int j = 0; j < N-i-1; j++){
                if ( arr[j] > arr[j+1]) {
                    temp = arr [j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
       break;
        
        
        case 'd' :
           for (int i = 0; i < N; i++) {
            for (int j = 0; j < N-i-1; j++){
                if ( arr[j] < arr[j+1]) {
                    temp = arr [j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
       break;
    } 
    
    return 0;
}
