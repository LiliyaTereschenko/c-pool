#include "ft_stock_par.h"
#include <stdio.h>

int main (int argc, char **argv)
{
	t_stock_par *q;
	
	q = ft_param_to_tab(argc, argv);
	printf("%d", q->size_param);	
	return(0);
}
