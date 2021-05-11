
#include <lib.h>


int main ()
{
	
	
	list *head = 0; //head- переменная, указывающая на первый элеменет списка
	head = malloc (sizeof(list));

	read(head, ROWS);
	output(head, ROWS);
	write(head, ROWS);
	sort(head, ROWS);
	add(head);
	output(head, ROWS);
	delete(&head);
	output(head, ROWS);
	
    		
	
	return 0;
}


