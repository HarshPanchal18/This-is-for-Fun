//Call a method without calling it....
#include <stdio.h>
#include <stdlib.h>
void Hello();
void hello_world()
{
    puts(__func__);
    goto *&Hello;
}
void Hello()
{
    puts(__func__);
}
int main()
{
    printf("\nFile Name: ");
    puts(__FILE__);
    printf("File containing function: \n");
    goto *&hello_world;
    return 0;
}