#include <stdio.h>
int ft_recursive_power(int nb, int power);

int main()
{
	printf("%d",ft_recursive_power(3, 2));
	printf("%c", '\n');
	printf("%d", ft_recursive_power(0, 2));
    printf("%c", '\n');
    printf("%d",ft_recursive_power(1, 2));
    printf("%c", '\n');
    printf("%d",ft_recursive_power(2, 6));
    printf("%c", '\n');
    printf("%d",ft_recursive_power(2, 10));
    printf("%c", '\n');
    printf("%d",ft_recursive_power(2, 0));

}
