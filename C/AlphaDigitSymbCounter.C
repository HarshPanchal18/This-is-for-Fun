#include <stdio.h>
#include <conio.h>
#include <string.h>
//#include<ctype.h>
int main(void)
{
	int i, a = 0, d = 0, s = 0;
	char str[20];
	printf("\nEnter string:- ");
	gets(str);
	for (i = 0; i < strlen(str); i++)
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			a++;
		else if (str[i] >= 48 && str[i] <= 57)
			d++;
		else
			s++;
	}
	printf("\nAlphabets in string:- %d", a);
	printf("\nDigits in string:- %d", d);
	printf("\nSymbols in string (Including Spaces): %d", s);
	getch();
}
