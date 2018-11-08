void ft_putchar(char c);
void ft_putnbr(int nbr);

int main()
{
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(5);
	ft_putchar('\n');
	ft_putnbr(10);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-2147483647);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	return(0);
}
