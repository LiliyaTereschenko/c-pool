#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char s[100]= "qqqqq±";
	char s1[100] = "qqqqq";
	
	char s2[100] = "qqqqq±";
	char s3[100] =  "qqqqq";
						
	printf ("%d",ft_strcmp(s, s1));
	printf ("%c",'\n');
	printf ("%d",strcmp(s2, s3));

	return (0);
}
