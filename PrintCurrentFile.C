#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;
	char ch;
	fp = fopen("PrintCurrentFile.c", "r");
	if (fp == NULL)
	{
		printf("Cannot open file");
		exit(1);
	}
	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
			break;
		printf("%c", ch);
	} 
	printf("\n");
	fclose(fp);
	getch();
}
