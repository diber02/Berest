/**
 * @mainpage
 * # Загальне завдання
 * 1. **Записати та прочитати дані масиву структур у бінарному файлі**
 * @author Berest D.
 * @date 16-apr-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи структури та методів
 * оперування ним.
 *
 * @author Berest D.
 * @date 16-apr-2021
 * @version 1.0
 */

#include "lib.h"

#define N 4

/**
 * Головна функція.
 *
 * Послідовність дій:
 *
 * - Оголошення вказівників на файли
 * - Виведення результату роботи фунуції @function read_from_file
 * - Виведення результату роботи фунуції @function write_to_file
 * - Виведення результату роботи фунуції @function output
 * - Виведення результату роботи фунуції @function sort
 * - Виведення результату роботи фунуції @function sort_alph
 * - Виведення результату роботи фунуції @function rand_fill
 * - Виведення результату роботи фунуції @function write_binfile
 * - Виведення результату роботи фунуції @function read_binfile
 *
 * @return успішний код повернення з програми (0)
 */
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
