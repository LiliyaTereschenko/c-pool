#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	char s1[100] = "";
	char s2[100] = "LKNBLFJNN";
	char s3[100] = "khber!@@#!$efp_ijqref'pgi";
	char s4[100] = {1,2,3, 56};

	printf("%d", ft_str_is_printable(s1));
	printf("%c", '\n');
	printf("%d", ft_str_is_printable(s2));
	printf("%c", '\n');
	printf("%d", ft_str_is_printable(s3));
	printf("%c", '\n');
	printf("%d", ft_str_is_printable(s4));
	return (0);
}
