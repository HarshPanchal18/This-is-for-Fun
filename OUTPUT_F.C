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

	fp = fopen("emp.txt", "rb");
	if (fp == NULL)
	{
		puts("Unable to open");
		exit(1);
	}
	while (fread(&e, sizeof(e), 1, fp) == 1)
	{
		printf("%s %d %.2f\n", e.name, e.age, e.s);
		count++;
	}
	if (count == 0)
		printf("\nThe File has no conent..");
	fclose(fp);
	getch();
}