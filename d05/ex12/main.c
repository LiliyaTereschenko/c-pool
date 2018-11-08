#include <stdio.h>
int ft_str_is_numeric(char *str);

int main()
{
	char s1[100] = "";
	char s2[100] = "456456346";
	char s3[100] = "53534643i64er!@@#!$efp_ijqref'pgi";
	char s4[100] = "094";

	printf("%d", ft_str_is_numeric(s1));
	printf("%c", '\n');
	printf("%d", ft_str_is_numeric(s2));
	printf("%c", '\n');
	printf("%d", ft_str_is_numeric(s3));
	printf("%c", '\n');
	printf("%d", ft_str_is_numeric(s4));
	return (0);
}
