/*
 ============================================================================
 Name        : database.c
 Author      : Panchal Harsh
 Version     : 1
 Description : Structure Application
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct database
{
    char name[25];
    int empid;
    int age;
    char mobno[10];
    float sal;
};

void create(struct database man[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("EMPLOYEE NO:%d", i + 1);
        printf("\nEnter the name of employee: ");
        scanf("%s", man[i].name);
        printf("\nEnter the employee id: ");
        scanf("%d", &man[i].empid);
        printf("\nEnter the age of the employee: ");
        scanf("%d", &man[i].age);
        printf("\nEnter the mobile number of the employee: ");
        scanf("%s", man[i].mobno);
        printf("\nEnter the salary of the employee: ");
        scanf("%f", &man[i].sal);
    }
}

void display(struct database man[], int n)
{
    printf("--------------------------------------------------------------------------\n");
    printf("\t\t\t   DATABASE\n");
    printf("--------------------------------------------------------------------------\n");
    printf("sr.no\tEmployee id\tname\t\tage   mobile number\tsalary\n");

    for (int i = 0; i < n; i++)
        printf(" %d       %d\t\t%s\t\t%d     %s\t%2f\n", (i + 1), man[i].empid, man[i].name, man[i].age, man[i].mobno, man[i].sal);
}

void search(struct database man[], int n)
{
    int newempid, i, f;
    printf("\nEnter the employee id you want to search: ");
    scanf("%d", &newempid);
    for (i = 0; i < n; i++)
    {
        if (man[i].empid == newempid)
        {
            printf("sr.no\tEmployee id\tname\t\tage   mobile number\tsalary\n");
            printf(" %d       %d\t\t%s\t\t%d     %s\t%2f\n", (i + 1), man[i].empid, man[i].name, man[i].age, man[i].mobno, man[i].sal);

            f = 1;
            break;
        }
        else
            f = 0;
    }
    if (f == 0)
        printf("\nNO RECORD FOUND\n");
}

void modify(struct database man[], int n)
{
    int p, i, f;
    printf("\nEnter the employee id you want to modify: ");
    scanf("%d", &p);
    for (int i = 0; i < n; i++)
    {
        if (p == man[i].empid)
        {
            printf("\nEnter the name of employee: ");
            scanf("%s", man[i].name);
            printf("\nEnter the employee id: ");
            scanf("%d", &man[i].empid);
            printf("\nEnter the age of the employee: ");
            scanf("%d", &man[i].age);
            printf("\nEnter the mobile number of the employee: ");
            scanf("%s", man[i].mobno);
            printf("\nEnter the salary of the employee: ");
            scanf("%f", &man[i].sal);
            f = 1;
            break;
        }
        else
            f = 0;
    }
    if (f == 0)
        printf("\nCAN'T MODIFY THE RECORD\n");
}

void delete (struct database man[], int n)
{
    int newid;
    printf("\nEnter the id of the employee whose database you want to delete: ");
    scanf("%d", &newid);

    for (int i = 0; i < n; i++)
        if (newid == man[i].empid)
            for (int j = i - 1; j < n - 1; j++)
            {
                strcpy(man[i].name, man[i + 1].name);
                man[i].age = man[i + 1].age;
                strcpy(man[i].mobno, man[i + 1].mobno);
                man[i].sal = man[i + 1].sal;
            }
}

int main(void)
{
    struct database man[25];
    int f = 1, n;
    while (f)
    {
        int ch;
        printf("\n***************MENU****************");
        printf("\n1.create database\n2.display database\n3.search database\n4.modify database\n5.delete database\n6.exit");
        printf("\nEnter you're choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter the number of record you want to create: ");
            scanf("%d", &n);
            create(man, n);
            break;

        case 2:
            display(man, n);
            break;

        case 3:
            search(man, n);
            break;

        case 4:
            modify(man, n);
            break;

        case 5:
            delete (man, n);
            display(man, n - 1);
            break;

        case 6:
            f = 0;
            break;
        }
    }
    return 0;
}
