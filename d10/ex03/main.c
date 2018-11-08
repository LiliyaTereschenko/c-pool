
#include <stdio.h>

int ft_any(char **tab, int(*f)(char*));

int 	*check_p(char **str)
{
	int i = 0;
	while (str[i])
	{	
		if (str[i] == 'p')
			return (1);
	}
	return (0);
}

int main()
{

	char *tab = {"qwe", "asd", "ppp"};
	
	tab = tab + 2;
	printf("%d\n", check_p(tab);
	printf("%d\n", ft_any(tab, &check_p));

	char *tab1 = {"qwe", "asd", "sda"};
	printf("%d\n", check_p(tab1[0]));
	printf("%d\n", check_p(tab1[1]));
	printf("%d\n", check_p(tab1[2]));
	printf("%d\n", ft_any(tab1, &check_p));
	return (0);
}
