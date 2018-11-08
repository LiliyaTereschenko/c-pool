#include <unistd.h>

void ft_putstr(char *str);
void ft_putchar(char c);

int main(void)
{
	char *str;
    str = "asdfgh";

	ft_putstr(str);
	return(0);
}
