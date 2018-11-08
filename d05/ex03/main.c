char *ft_strcpy(char *dest, char *src);
void ft_putstr(char *str);
void ft_putchar(char c);
#include <stdio.h>
#include <string.h>

int main()
{
	char s[100]= "gshrtjrryjerty";
	char st[100] = "aaa";
	printf ("%s",ft_strcpy(s, st));
	char s1[100]= "gshrtjrryjerty";
	    char st1[100] = "aaa";

	printf ("%c",'\n');
	printf ("%s",strcpy(s1, st1));

	return (0);
}
