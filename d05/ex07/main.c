#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char s[100]= "q1qqqqq";
	char s1[100] = "q2qqqqq";
	
	char s2[100] = "q1qqqqq";
	char s3[100] =  "q2qqqqq";
						
	printf ("%d",ft_strncmp(s, s1, 3));
	printf ("%c",'\n');
	printf ("%d",strncmp(s2, s3, 3));

	return (0);
}
