# Загальне завдання

1.  **Записати та прочитати дані масиву структур у бінарному файлі**
**Виконання роботи**
1. **Записати та прочитати дані масиву структур у бінарному файлі**

  Визначити кількість слів у рядку тексту.
  
2. Написання коду програми
			#include "lib.h"
			int main() 
			{  
			FILE *point_read = fopen("struct.txt", "r");
			FILE *point_write = fopen("result.txt", "w");
			FILE *point_write_binfile = fopen ("bin.dat","wb");
			FILE *point_read_binfile = fopen("bin.dat","rb");

			commercial greement [N];
			read_from_file( point_read, greement, N );
			write_to_file( point_write, greement, N );
			output( greement, N );
			sort( greement, N );
			sort_alph( greement, N);
			rand_fill( greement, N);
			write_binfile( point_write_binfile , greement, N);
			read_binfile( point_read_binfile, greement, N);
			output( greement, N );

			fclose(point_read);
			fclose(point_write);
			fclose(point_write_binfile);
			fclose(point_read_binfile);

			return 0;
			}



				void write_binfile( FILE *point_write_binfile, commercial *greement, int N)
				{
					for (int i = 0; i < N; i++)
					{
						fwrite(greement + i, sizeof(commercial), 1,point_write_binfile);
					}
					
				}

				void read_binfile( FILE* point_read_binfile, commercial *greement, int N)
				{
					for (int i = 0; i < N; i++)
					{
						fread( greement + i, sizeof(commercial), 1, point_read_binfile);

					}	
					 
				}


  
3. Компіяція програми та перевірка на правильність її роботи через nemiver

![] (file:///home/diana/Berest/lab15.17/doc/terminal.png)  

    

	

@author Berest D.
@date 20-dec-2020
@version 7.1.5

