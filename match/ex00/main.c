#include <stdio.h>
int     match(char *s1, char *s2);

int main()
{
	char s1[128] = "Adcdefgh";
	char s2[128] = "A*fgh";
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n\n", match(s1, s2));

	char s3[128] = "Adcdefgh";
	char s4[128] = "**A***";
	printf("%s\n", s3);
	printf("%s\n", s4);
	printf("%d\n\n", match(s3, s4));
	
	char s5[128] = "Adcdefgh";
	char s6[128] = "**A*e*";
	printf("%s\n", s5);
	printf("%s\n", s6);
	printf("%d\n\n", match(s5, s6));

    char s7[128] = "Adcdefgh";
    char s8[128] = "**A*h";
    printf("%s\n", s7);
    printf("%s\n", s8);
    printf("%d\n\n", match(s7, s8));

	char s9[128] = "Adcdefgh";
    char s10[128] = "*A*h*";
	printf("%s\n", s9);
	printf("%s\n", s10);
	printf("%d\n\n", match(s9, s10));

	char s11[128] = "Adcdefgh";
    char s12[128] = "*d*";
    printf("%s\n", s11);
    printf("%s\n", s12);
    printf("%d\n\n", match(s1, s2));
	
	char s13[128] = "";
	char s14[128] = "";
	printf("%s\n", "empty string");
	printf("%s\n", "empty string");
	printf("%d\n\n", match(s13, s14));
	
	char s15[128] = "";
    char s16[128] = "*";
    printf("%s\n", "empty string");
    printf("%s\n", s16);
    printf("%d\n\n", match(s15, s16));

	char s17[128] = "";
    char s18[128] = "s*";
	printf("%s\n", "empty string");
	printf("%s\n", s18);
	printf("%d\n\n", match(s17, s18));

	char s19[128] = "gdr";
	char s20[128] = "g*gerg";
	printf("%s\n", s19);
	printf("%s\n", s20);
	printf("%d\n\n", match(s19, s20));
	return (0);
}
