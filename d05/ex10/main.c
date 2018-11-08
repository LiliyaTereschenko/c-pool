char	*ft_strcapitalize(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int main()
{ 
	char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_putstr(str);
	ft_putstr("  ");
	ft_putstr(ft_strcapitalize(str));
	return (0);	
}
