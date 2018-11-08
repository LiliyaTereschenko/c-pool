#include <stdio.h>
#include <stdlib.h>
# include <unistd.h>

void ft_swap(int *a, int*b);

int main()
{
	int a = 5;
	int b = 6;
	int *a1;
	int *b1;
	a1 = &a;
	b1 = &b;
	
	printf("a = ", a);
	printf("b = ", b);	
    ft_swap(*a1, *b1);
	printf("a = ", a);
	printf("b = ", b);	
	return(0);
}
