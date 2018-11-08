char *ft_strncpy(char *dest, char *src, unsigned int n);
void ft_putstr(char *str);
void ft_putchar(char c);
#include <stdio.h>
#include <string.h>

int main()
{
	char s[100]= "aaaaaaaaaaaaa";
	char s1[100] = "dsfgfgdfghdfhgfhgh";
	char s2[100]= "aaaaaaaaaaaaa";
	char s3[100] = "dsfgfgdfghdfhgfhgh";
	
	printf ("%s",ft_strncpy(s, s1, 5));
	printf ("%c",'\n');
	printf ("%s",strncpy(s2, s3, 5));

	return (0);
}
