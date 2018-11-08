#include "ft_list.h"
#include <stdio.h>
#include <stddef.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*list;
	list = (t_list*)malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

void printFromHead(t_list *list) 
{
	if (list)
	{
		printf("%s ", list->data);
		printFromHead(list->next);
	}
}
void printFromTail(t_list *list)
{
    if (list)
	{
		printFromTail(list->next);
		printf("%s ", list->data);
	}
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *current;

	current = *begin_list;
	new = ft_create_elem(data);
	if (current == 0)
		*begin_list = new;
	else
	{
		while (current->next != 0)
			current = current->next;
		current->next = new;
	}
}

int main(int argc, char **argv)
{
	int i = 1;
	t_list *list;
	list = NULL;                  
    while (i < argc)
  	{
		ft_list_push_back(&list, argv[i]);
		i++;
	}                                 
    printFromHead(list);
	printf("%c", '\n');
	ft_list_clear(&list);
  	printFromHead(list);
	printf("%c", 'A');
	//  printFromTail(list);
   // printf("%c", '\n');                                                       
    return (0);
}
