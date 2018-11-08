#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char s1[100] = "LKNBLFJNN";
	char s2[100] = "";
	char s3[100] = "khber!@@#!$efp_ijqref'pgi";
	char s4[100] = "fefefefe";

	char s5[100] = "LKNBLFJNN";
	char s6[100] = "";
	char s7[100] = "khber!@@#!$efp_ijqref'pgi";
	char s8[100] = "fefefefe";

	printf("%s", ft_strcat(s1, s2));
	printf("%c", '\n');
	printf("%s", ft_strcat(s3, s4));
	printf("%c", '\n');
	printf("%s", strcat(s5, s6));
	printf("%c", '\n');
	printf("%s", strcat(s7, s8));
	return (0);
}
