#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int count = 0;
	struct emp
	{
		char name[10];
		int age;
		float s;
	} e;

	fp = fopen("Emp.txt", "r");
	if (fp == NULL)
	{
		puts("Unable to open");
		exit(1);
	}
	while (fread(&e, sizeof(e), 1, fp) == 1)
	{
		count++;
		printf("%d\t%8s %2d %.2f\n", count, e.name, e.age, e.s);
	}
	if (count == 0)
		printf("\nThe File has no content..");
	fclose(fp);
}
