char *ft_strstr(char *str, char *to_find);

#include <string.h>
#include <stdio.h>
int main()
{
    char s[100]= "adhckshcnfhso";
    char st[100] = "hck";
    printf ("%s",ft_strstr(s, st));
    printf ("%c",'\n');
    printf ("%s",strstr(s, st));
    return (0);
}

