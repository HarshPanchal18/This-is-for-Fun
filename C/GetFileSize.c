#include <stdio.h>

int main(void)
{
    FILE *fp;

    char Fname[15];
    long length;

    printf("\nEnter the file name: ");
    gets(Fname);

    fp = fopen(Fname, "rb");

    if (fp == NULL)
        printf("Error in operation....!!!");

    else
    {
        fseek(fp, 0L, SEEK_END);
        length = ftell(fp);
        printf("\nThe size of \"%s\" is %d bytes (%.2f KB)", Fname, length, (float)length / 1000);
        fclose(fp);
    }
}