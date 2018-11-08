#include <stdio.h>

int     ft_is_sort(int *tab, int length, int (*f)(int, int));

int 	check_equal(int a, int b)
{
	if (a == b)
		return (0);
	else if (a < b)
		return (-4);
	else 
		return (5);	
}

int main()
{
	int tab1[10] = {0,1,2,3,4,5,6,7,8,9};
	int tab2[10] = {9,8,7,6,5,4,3,2,1,0};
	int tab3[10] = {1,2,5,5,5,5,5,5,8,9};
	int tab4[10] = {2,2,2,2,2,2,2,2,2,2};
	int tab5[10] = {2,2,2,2,2,7,2,2,2,2};
	int tab6[10] = {2,2,2,2,2,7,7,8,8,8};
	int tab7[10] = {2,2,2,2,2,1,1,1,0,-8};

	printf("%d\n", ft_is_sort(tab1, 10, &check_equal));
	printf("%d\n", ft_is_sort(tab2, 10, &check_equal));
	printf("%d\n", ft_is_sort(tab3, 10, &check_equal));
	printf("%d\n", ft_is_sort(tab4, 10, &check_equal));
	printf("%d\n", ft_is_sort(tab5, 10, &check_equal));
	printf("%d\n", ft_is_sort(tab6, 10, &check_equal));
	printf("%d\n", ft_is_sort(tab7, 10, &check_equal));
	return (0);
}
