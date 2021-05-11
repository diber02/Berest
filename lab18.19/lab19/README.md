# Загальне завдання

1.  ** Зчитати з файлу список, вивести до консолю, додати новий елемент та видалити елемент**
**Виконання роботи**

  
2. Написання коду програми




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



		int read(list *head, int rows)
		{
		FILE*point_read = fopen ( "read.txt", "r");
		if (point_read == 0)
		{
		printf("This file doesn't exist");
		}

		char stage[20];
		char open[10];
		list *current = head;
		for(int i = 0; i < rows; i++)
		{

		while ( current -> next != 0)
		{
			current = current->next;
		}
		
		fscanf(point_read,"%s", open );
		if ( strcmp(open, "true") == 0 )
		{
			current -> open = true;			 
		}
		else if( strcmp(open, "false") == 0 )
		{
			current -> open = false;			 
		}
		 
		fscanf(point_read,"%s", current -> name );
		fscanf(point_read,"%d", &current ->summary );

		fscanf(point_read,"%s", current ->director.name );
		fscanf(point_read,"%s", current ->director.email );
		fscanf(point_read,"%s",current ->director.country );
		fscanf(point_read,"%s", stage );
		if ( strcmp(stage, "received") == 0 )
		{
			current ->stage = 0;
		}
		if ( strcmp(stage, "discussion") == 0 )
		{
			current ->stage  = 1;
		}   
		if ( strcmp(stage, "evaluation") == 0 )
		{
			current ->stage = 2;
		}  
		if ( strcmp(stage, "coordination") == 0 )
		{
			current ->stage = 3;
		}
		current->next = 0;	
		
		if ( rows - i != 1)
		{
			current -> next = (list *)malloc(sizeof(list));
		}	
		}
		fclose(point_read);
		}


		void output (list *head, int rows)
		{
		list *temp = head;
		for ( int i = 0; i < rows || temp != 0; i++)
		{
	
		printf("\n\nCompany № %d\n", i+1);
		if ( temp -> open ==  true)
		{
			printf("Open \n");
		}
		else  
		{
			printf("Close\n");
		}
		
		printf("Name of company: %s\n",temp ->name );
		printf("Summary: %d\n", temp ->summary );
		printf("Director's name: %s\n",temp ->director.name );
		printf("Director's email: %s\n",temp ->director.email );
		printf("Company's country: %s\n",temp ->director.country );
		if ( temp ->stage == received  )
		{
			printf("The stage: a request for project implementation was received \n" );
		}
		if ( temp ->stage == discussion  )
		{
			printf("The stage: a project discussion  \n" );
		}
		if (temp ->stage == evaluation )
		{
			printf("The stage: project evaluation \n" );
		}
		if ( temp ->stage == coordination )
		{
			printf("The stage : coordination of details\n" );
		}
		temp = temp -> next;
		printf("\n\n");

		}
		}

		void write( list *head, int rows)
		{

		FILE*point_write = fopen("write.txt","w");
		list *current = head;
		
		for ( int i = 0; i < rows; i++)
		{
		if ( current -> open == true  )
		{
		fprintf(point_write,"%s", "true " );
		}
		else 
		{
		fprintf(point_write,"%s", "false " );
		}
 
		fprintf(point_write, "%s %d %s %s %s" ,current -> name, current ->summary, current ->director.name, current ->director.email, current ->director.country);
		 
		if ( current ->stage == received  )
		{
		fprintf(point_write,"%s", "The stage: a request for project implementation was received \n" );
		}
		if ( current ->stage == discussion  )
		{
		fprintf(point_write,"%s","The stage: a project discussion  \n" );
		}
		if ( current ->stage == evaluation )
		{
		fprintf(point_write,"%s","The stage: project evaluation \n" );
		}
		if ( current ->stage == coordination )
		{
		fprintf(point_write,"%s","The stage : coordination of details\n" );
		}
	       
		current = current -> next;	
		}

		}


		void sort(list *head, int rows)
		{
		list *current = head;
		printf("Do you want to check how many summary in these companys?(1 - yes, 2 - no) : ");
		int  d = 0, x = 0;
		scanf("%d", &d);
		if (d == 1)
		{
	
		for (int i = 0; i < rows; i++)
		{
			printf ( " In %s company summary : %d \n", current -> name, current -> summary); 
			current = current->next;
		}
		printf("\n\n");
		}
		else 
		{
		printf("Do you want to check directors contacts in these companys?(1 - yes, 2 - no) : ");
		scanf("%d", &x);
		if (x == 1)
		{
			for (int i = 0; i < rows; i++)
			{
				printf ( " In %s company director : \n%s\n%s\n\n", current -> name, current ->director.name, 
												current ->director.email);
				current = current->next;
			}
			printf("\n\n");
		}
		}
		}          

		void add(list* head)
		{

		 


		printf("\nDo you want to add new elemet?\n[1] yes\n[2] no\n : ");
		int check;
		scanf("%d", &check);

		if(check == 1)
		{
			list* temp = head;
			list* new_element = (list*)malloc(sizeof(list));
			char new_name[15];;
			int sum;
			char direc_name[10];
			char direc_country[10];
			char direc_email[15];
			int new_stage ;

		    
			printf("Enter your new element\n");
			printf("enter new name:");
			scanf("%s", new_name);
			strcpy(new_element->name, new_name);
			printf("enter new summary:");
			scanf("%d", &sum);
			new_element->summary = sum;
			printf("enter new director's name:");
			scanf("%s", direc_name);
			strcpy(new_element -> director.name, direc_name);
			printf("enter new director's country:");
			scanf("%s", direc_country);
			strcpy(new_element -> director.country, direc_country);
			printf("enter new director's email:");
			scanf("%s", direc_email);
			strcpy(new_element -> director.country, direc_country);
			printf("enter new stage(1-4):");
			scanf("%d", &new_stage);
			if ( new_stage == 1  )
			{
				new_element -> stage = 0;
			}
			if ( new_stage == 2   )
			{
				new_element -> stage = 1;
			}
			if (new_stage == 3 )
			{
				new_element -> stage = 2;
			}
			if ( new_stage == 4 )
			{
				new_element -> stage = 3;
			}
		    
		    


			if(temp->next == NULL)
			{
			new_element->next = temp->next;
			temp->next = new_element;
			}
			else
			{
			while(temp->next != NULL)
			{
			temp = temp->next;
			}
			new_element->next = temp->next;
			temp->next = new_element;
			}
			}
			else if(check == 2)
			{
			return;
			}
			}

		void delete(list** head)
		{

		 


		printf("Do you want to delete element?\n[1] yes\n[2] no\n");
		printf("your answer: ");
		int check;
		scanf("%d", &check);
		if(check == 1)
		{
		list* current = *head; //для поиска элемента, который мы удаляем
		list* temp = *head;    //для подсчета количества элементов в списке
		list* del = (list*)malloc(sizeof(list)); //место под элемент, который мы удаляем
		list* prev = (list*)malloc(sizeof(list)); //место под элемент, который стоит перед элементом удаления

		int count = 0;
		while (temp != NULL)
		{
		count++;
		temp = temp->next;
		}

		printf("Введите номер элемента, который хотите удалить (1-%d): ", count);
		int num;
		scanf("%d", &num);

		if(num == 1)
		{
		del = current;
		current = current->next;
		*head = current;
		free(del);
		}
		else if(num != 1)
		{
		for(int i = 1; i < num; i++)
		{
			if(i + 1 == num)
			{
			prev = current;
			current = current->next;
			del = current;

			prev->next = del->next;
			del->next = NULL;
			free(del);
			}
			else
			{
			current = current->next;
			}
			}
			}
			}
		else if(check == 2)
		{
			return;
		}
		}


  
3. Блок-схема


![] (file:///home/diana/Berest/lab18.19/doc/19.png)

	

@author Berest D.
@date 20-dec-2020
@version 7.1.5

