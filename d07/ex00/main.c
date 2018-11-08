#include <string.h>
#include <stdio.h> 

char *ft_strdup (char *src);

int main()
{
	char s1[10] = "0123456789";
	char s2[5] = "hgjdk";
	
	printf("%s", ft_strdup(s1));
	printf("%c", '\n');	
	printf("%s", ft_strdup(s2));
	printf("%c", '\n');
	printf("%s", strdup(s1));
	printf("%c", '\n');
	printf("%s", strdup(s2));
	return (0);
}
