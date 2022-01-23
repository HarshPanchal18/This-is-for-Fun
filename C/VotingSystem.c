#include <stdio.h>

int no;

void vote(int choice)
{
    static int a, b, c;
    if (choice == 1)
        a++;
    else if (choice == 2)
        b++;
    else if (choice == 3)
        c++;

    printf("\nVotes for A: %d", a);
    printf("\nVotes for B: %d", b);
    printf("\nVotes for C: %d", c);

    if (choice == 0)
    {
        if (a > b && a > c)
            printf("\nA won with Votes of %d\n", a);
        else if (b > c && b > a)
            printf("\nB won with Votes of %d\n", b);
        else if (c > a && c > b)
            printf("\nC won with Votes of %d\n", c);
        printf("\n");
    }
}

int main(void)
{
    int n, stop = 1;
    while (stop)
    {
        printf("\n1. Vote A");
        printf("\n2. Vote B");
        printf("\n3. Vote C");
        printf("\nEnter vote: ");
        scanf("%d", &n);

        if (n > 0 && n <= 3)
            vote(n);
        else
            printf("\nEnter valid input ");

        printf("\nEnter 1 for continue, 0 for terminate:  ");
        scanf("%d", &stop);
    }
    vote(stop);
}