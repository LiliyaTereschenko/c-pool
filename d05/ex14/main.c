#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	char s1[100] = "";
	char s2[100] = "LKNBLFJNN";
	char s3[100] = "	khber!@@#!$efp_ijqref'pgi";
	char s4[100] = "ljgllknmbrg";

	printf("%d", ft_str_is_uppercase(s1));
	printf("%c", '\n');
	printf("%d", ft_str_is_uppercase(s2));
	printf("%c", '\n');
	printf("%d", ft_str_is_uppercase(s3));
	printf("%c", '\n');
	printf("%d", ft_str_is_uppercase(s4));
	return (0);
}
