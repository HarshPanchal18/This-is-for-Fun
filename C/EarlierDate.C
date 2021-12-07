#include <stdio.h>
#include <stdlib.h>
int check_date(int date, int mon, int year);

int main(void)
{
    int day1, mon1, year1, day2, mon2, year2;
    int is_leap = 0, is_valid = 1;

    printf("Enter first date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day1, &mon1, &year1); //Saperate date using '/'

    printf("Enter second date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day2, &mon2, &year2);
    printf("\n");

    if (!check_date(day1, mon1, year1))
    {
        printf("First date is invalid.\n");
        exit(0);
    }

    if (!check_date(day2, mon2, year2))
    {
        printf("Second date is invalid.\n");
        exit(0);
    }

    if (year1 > year2)
        printf("%02d/%02d/%d comes earlier than %02d/%02d/%d",
               day2, mon2, year2, day1, mon1, year1);

    else if (year1 < year2)
        printf("%02d/%02d/%d comes earlier than %02d/%02d/%d",
               day1, mon1, year1, day2, mon2, year2);

    // year1 ==  year2
    else
    {
        if (mon1 == mon2)
        {
            if (day1 == day2)
                printf("Both dates are the same.");

            else if (day1 > day2)
                printf("%02d/%02d/%d comes earlier than %02d/%02d/%d",
                       day2, mon2, year2, day1, mon1, year1);

            else
                printf("%02d/%02d/%d comes earlier than %02d/%02d/%d",
                       day1, mon1, year1, day2, mon2, year2);
        }

        else if (mon1 > mon2)
            printf("%02d/%02d/%d comes earlier than %02d/%02d/%d",
                   day2, mon2, year2, day1, mon1, year1);

        else
            printf("%02d/%02d/%d comes earlier than %02d/%02d/%d",
                   day1, mon1, year1, day2, mon2, year2);
    }
    return 0; // return 0 to operating system
}

// function to check whether a date is valid or not

int check_date(int day, int mon, int year)
{
    int is_valid = 1, is_leap = 0;
    if (year >= 1800 && year <= 9999)
    {

        //  check whether year is a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            is_leap = 1;

        // check whether month is between 1 and 12
        if (mon >= 1 && mon <= 12)
        {
            // check for days in feb
            if (mon == 2)
            {
                if (is_leap && day == 29)
                    is_valid = 1;
                else if (day > 28)
                    is_valid = 0;
            }

            // check for days in April, June, September and November
            else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
            {
                if (day > 30)
                    is_valid = 0;
            }

            // check for days in rest of the months
            // i.e Jan, Mar, May, July, Aug, Oct, Dec
            else if (day > 31)
                is_valid = 0;
        }
        else
        {
            is_valid = 0;
        }
    }
    else
        is_valid = 0;

    return is_valid;
}

/**********************************************
 Program to print the earlier of the two dates 
 * 
 * Enter first date (DD/MM/YYYY): 20/10/2020
 * Enter second date (DD/MM/YYYY): 29/02/2001
 * 
 * 29/02/2001 comes earlier than 20/10/2020
 **********************************************/
