#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	int k;
	char *str;

    str = "asdfgh";
	k = ft_strlen(str);
	printf("%d", k);
	return(0);
}
