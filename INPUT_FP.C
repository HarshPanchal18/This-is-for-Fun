#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;
	char another = 'y';
	struct emp
	{
		char name[10];
		int age;
		float s;
	} e;
	fp = fopen("Emp.txt", "a");
	if (fp == NULL)
	{
		fp = fopen("Emp.txt", "wb+");

		if (fp == NULL)
		{
			puts("Cannot open file");
			exit(1);
		}
	}
	while (another == 'y' || another == 'Y')
	{
		printf("\nEnter name, age & salary:\n");
		scanf("%s %d %f", e.name, &e.age, &e.s);
		fwrite(&e, sizeof(e), 1, fp);
		/* &e - Address of structure
		   sizeof(e) - size of the structure
		   1 - number of structure
		   fp - file pointer
		   */
		printf("\nAdd another record??(y/n): ");
		fflush(stdin);
		another = getche();
	}
	fclose(fp);
	getch();
}
