#include <stdio.h>
#include <stdlib.h>

int     *ft_map(int *tab, int length, int(*f)(int));
int		 add_one(int a)
{
	    a = a + 1;
		return (a);
}

int main ()
{
	int i = 0;
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};
	int *arr;

	arr = (int*)malloc(sizeof(int) * 10);
	while (i < 10)
	{
		printf("%d",tab[i]);
		i++;
	}
	printf("%c", '\n');
	arr = ft_map(tab, 10 , &add_one);
	i = 0;
	while (i < 10)
	{
		printf("%d",arr[i]);
		i++;
	}
	return (0);
}
