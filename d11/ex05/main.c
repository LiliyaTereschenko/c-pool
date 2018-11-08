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
                  
int main(int argc, char **argv)
{
	printFromHead(ft_list_push_params(argc, argv));
    return (0);
}
