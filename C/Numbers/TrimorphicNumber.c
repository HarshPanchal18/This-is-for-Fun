// Cube of the number ends in the number itself
//  4 ^ 3 = 64  Contains 4
#include <stdio.h>

int isTrimorphic(int);
int main(void)
{
    // Check a number

    int num, cube, temp, flag = 1;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    temp = isTrimorphic(num);
    if (temp == 1)
        printf("Trimorphic Number");
    else
        printf("Not a Trimorphic number");

    // from 1 to N
    /*  int i, limit;

      printf("Enter last number: ");
      scanf("%d", &limit);

      for (i = 1; i <= limit; i++)
          if (isTrimorphic(i) == 1)
              printf("%d\n", i);
    */
}

int isTrimorphic(int n)
{
    long cube;
    int flag = 1;
    cube = n * n * n;

    while (n != 0)
    {
        if (n % 10 != cube % 10)
        {
            flag = 0;
            break;
        }
        n /= 10;
        cube /= 10;
    }
    if (flag == 1)
        return 1;
    else
        return 0;
}