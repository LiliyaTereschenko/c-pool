#include <unistd.h>
#include <stdio.h>

char  *ft_strrev(char *str);

int main(void)
{
	char str[] = "hello";
    
	printf("%s\n", str);
	printf("%s", ft_strrev(str));
	return(0);
}
