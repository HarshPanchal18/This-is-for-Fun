#include <stdio.h>
#include <conio.h>
int main(void)
{
	int i, no, count = 0;
	float avg = 0, sum = 0;
	printf("\nEnter the number of elements :");
	scanf("%d", &no);
	for (i = 1; i <= no; i++)
	{
		sum += i;
		count++;
	}
	avg = sum / count;
	printf("\nSum of First %d numbers = %.2f \nAverage = %.2f", no, sum, avg);
	getch();
}