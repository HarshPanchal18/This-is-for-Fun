#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(void)
{
	int i, x, count[26] = {0}, k = 0;
	char str[20];
	printf("Enter sentence:- ");
	gets(str);

	while (str[k] != '\0')
	{
		if (str[k] >= 'A' && str[k] <= 'Z')
		{
			x = str[k] - 'A';
			count[x]++;
		}
		else if (str[k] >= 'a' && str[k] <= 'z')
		{
			x = str[k] - 'a';
			count[x]++;
		}
		k++;
	}
	printf("\nCase is Ignored... \n");
	for (i = 0; i < 26; i++)
	{
		if (count[i] != 0)
			printf("\n%c comes %d times in sentence", i + 'A', count[i]);
	}
	getch();
}
