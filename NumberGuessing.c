#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, no, flag = 1, guess, count = 1;
    printf("\nEnter the Number for guessing: ");
    scanf("%d", &guess);
    do
    {
        no = rand() % 10; //it will generate different numbers on every trials
        if (no == guess)
            flag = 0;
        else if (guess < no)
        {
            flag = 1;
            printf("\nGuessed Number is lower than the number...");
            count++;
        }
        else
        {
            flag = 1;
            printf("\nGuessed Number is greater than the number...");
            count++;
        }
        if (flag == 1)
        {
            printf("\nSorry !! Guess it again\nPress -1 for give up\n");
            scanf("%d", &guess);
            if (guess == -1)
            {
                printf("\nThe number was %d", no);
                printf("\nNice Try...\n");
                exit(0);
            }
        }
    } while (flag);

    printf("\nCongrats!! You guessed the number!");
    printf("\nNumber of trials: %d", count);
}
