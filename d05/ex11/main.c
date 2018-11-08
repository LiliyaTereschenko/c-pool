#include <stdio.h>
int ft_str_is_alpha(char *str);

int main()
{
	char s1[100] = "";
	char s2[100] = "greoirjFDDFgeJHGrthtrpgi";
	char s3[100] = "greoirjgreijqer!@@#!$efp_ijqref'pgi";

	printf("%d", ft_str_is_alpha(s1));
	printf("%c", '\n');
	printf("%d", ft_str_is_alpha(s2));
	printf("%c", '\n');
	printf("%d", ft_str_is_alpha(s3));
	return (0);
}
