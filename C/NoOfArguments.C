#include <stdio.h>
#include <conio.h>
#include <stdarg.h>
int findmax(int, ...);
int main(void)
{
	int max;
	max = findmax(5, 23, 1, 19, 92, 50);
	printf("maximum= %d", max);

	max = findmax(3, 100, 300, 29);
	printf("\nmaximum= %d", max);

	max = findmax(4, 100, 59, 30, 29);
	printf("\nmaximum= %d", max);

	getch();
}
int findmax(int tot, ...)
{
	int max, count, no;
	va_list ptr;
	va_start(ptr, tot);
	max = va_arg(ptr, int);
	for (count = 1; count < tot; count++)
	{
		no = va_arg(ptr, int);
		if (no > max)
			max = no;
	}
	return (max);
}
