#include <stdio.h>
#include <string.h>
struct myStruct
{
    char name[10];
    int arr[5];
};

int isEqual(struct myStruct s1, struct myStruct s2)
{
    int i, count = 0;
    if (!strcmp(s1.name, s2.name))
    {
        for (i = 0; i < 5; i++)
            if (s1.arr[i] == s2.arr[i])
                count++;
        if (count == 5)
            return 1;
    }
    return 0;
}

int main(void)
{
    struct myStruct s1 = {"Harsh", {1, 4, 7, 9, 8}}, s3 = {"Harsh", {1, 4, 7, 9, 8}};
    if (isEqual(s1, s3))
        printf("\nStructure Members are Equal.");
    else
        printf("\nStructure Members are not Equal.");
}