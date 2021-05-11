
#include <lib.h>


int main ()
{
	clock_t start_time = clock();
	
	list *head = 0; //head- переменная, указывающая на первый элеменет списка
	head = malloc (sizeof(list));


	Date_Time();
	read(head, ROWS);
	output(head, ROWS);
	write(head, ROWS);
	sort(head, ROWS);
	add(head);
	output(head, ROWS);
	delete(&head);
	output(head, ROWS);
	
    	clock_t end_time = clock();
    	Spent_Time();	
	
	return 0;
}


