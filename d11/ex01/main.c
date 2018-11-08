#include "ft_list.h"
#include <stdio.h>
#include <stddef.h>

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
  //  printFromTail(list);
   // printf("%c", '\n');                                                       
    return (0);
}
