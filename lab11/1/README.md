# Загальне завдання

1. **Визначити**  кількість пар сусідніх елементів з однаковими значеннями. Переписати ці пари у другий масив.

**Виконання роботи**
1. **Функціональне призначення** 
	
2. Написання коду програми

			#define N 6
			 
			int main() {
			int schetchik;
			int mas_res[N]={0};
			int arr [N] = {1,2,2,9,3,3};

			sort_arr(arr);
			 
			fill_mas_res (arr,mas_res);
			 
			return 0;
			}



			int sort_arr( int arr []) {

			int schetchik = 0;
			for (int i = 0; i < N; i++) {
			if (( *(arr + i) == *(arr + i + 1)   &&  *(arr+i) != *(arr+i+2))) {
			schetchik++;
			}
			}    
			return schetchik; 
			}
			 
			int fill_mas_res(int arr[], int mas_res[]) {
			for (int i = 0; i < N; i++) {
			if ( *(arr + i) == *(arr + i + 1)   &&  *(arr+i) != *(arr+i+2)) {
			*(mas_res+i) = *(arr+i);
			*(mas_res+i+1) = *(arr+i+1);
			}
			}
			return mas_res;
			}


  
3. Компіяція програми та перевірка на правильність її роботи через nemiver

![] (file:///home/diana/Berest/lab11/1/doc/nemiver.png)  

4.Блок-схема

![] (file:///home/diana/Berest/lab08,09,10/7.1.5/doc/block.png)     

	

@author Berest D.
@date 20-dec-2020
@version 7.1.5

