#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int dif(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // number of days in each month
    int f, s, t, final, temp, i, sum = 0, condition;
    if (y1 < y2) // y1 should always be the smaller year
    {
        f = (11 - m1 + 1) * 30 + (31 - d1); // number of days between the starting date and the last date of the same year
        for (i = m1 - 1; i <= 10; i++)
            sum = sum + a[i] - 30; // calculating number of extra days i.e when number of days > 30 or subtracting when no. of days < 30

        f += sum; // adding extra days
        sum = 0;
        s = y2 - (y1 + 1);                   // calculating no. of years between given years;
        s *= 365;                            // adding 365 days for each year
        condition = (m2 >= 2) ? y2 + 1 : y2; // if the ending year includes the month of feb we check the ending year also if it is a leap year

        for (i = (m1 <= 2) ? y1 : y1 + 1; i < condition; i++) // same for the starting year
        {
            if (i % 400 == 0)
                s++; // if leap year, we add an extra day
            else if (i % 100 != 0)
            {
                if (i % 4 == 0)
                    s++;
            }
        }
        t = (m2 - 1) * 30 + (d2 - 1); // calculating the no. of days fron the first day of the ending year to the given date
        for (i = 0; i <= m2 - 1 - 1; i++)
            sum = sum + a[i] - 30; // no. of extra days

        t += sum;          // adding no. ofextra days
        final = f + s + t; // finally adding all the calculated days
        // printf("%d",final);
    }
    else if (y1 == y2) // if starting and endng year is same
    {
        f = (m2 - m1) * 30 + (d2 - d1);
        for (i = m1 - 1; i <= m2 - 1 - 1; i++)
            sum = sum + a[i] - 30;

        f += sum;
        return f;
    }
    return final;
}

int day(int d, int m, int y)
{
    int diff = 0, d1 = 1, m1 = 1, y1 = 1990;
    diff = dif(d1, m1, y1, d, m, y);
    diff++;
    diff = diff % 7;
    switch (diff)
    {
    case 1:
        printf("%s", "TUESDAY\n");
        break;
    case 2:
        printf("%s", "WEDNESDAY\n");
        break;
    case 3:
        printf("%s", "THURSDAY\n");
        break;
    case 4:
        printf("%s", "FRIDAY\n");
        break;
    case 5:
        printf("%s", "SATURDAY\n");
        break;
    case 6:
        printf("%s", "SUNDAY\n");
        break;
    case 0:
        printf("%s", "MONDAY\n");
    }
    return diff;
}

int main()
{
    int d1, d2, m1, m2, y1, y2, ans;
    printf("Enter date (DD/MM/YYYY): ");
    scanf("%d%d%d", &d1, &m1, &y1);
    day(d1, m1, y1);
}
