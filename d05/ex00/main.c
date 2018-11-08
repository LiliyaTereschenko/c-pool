void ft_putchar(char c);
void ft_putstr(char *str);

int main()
{
	char *str;
	
	str = "Hello world";
	ft_putstr(str);
	ft_putchar('\n');
	str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	ft_putstr(str);
	return(0);
}
