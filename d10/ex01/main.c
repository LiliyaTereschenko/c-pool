#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int));
void  add_one(int a)
{
 	printf("%d", a+1);
}

int main ()
{
	int i = 0;
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};
	while (i < 10)
	{
		printf("%d",tab[i]);
		i++;
	}
	printf("%c", '\n');
//	void (*f)(int);
//	f = &add_one;
	ft_foreach(tab, 10 , &add_one);
	return (0);
}
