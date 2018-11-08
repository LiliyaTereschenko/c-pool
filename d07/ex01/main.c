#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int min, int max);

int main ()
{	
	int *a;
	int i;
	int min;
	int max;

	i = 0;
	a = ft_range(35, 9);
	while (i < 5)
	{
		printf("%d ", a[i]);
		i++;
	}
	return(0);
}
