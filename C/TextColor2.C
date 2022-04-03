#include <stdio.h>
#include <stdlib.h>

/*int main(void)
{
    printf("\x1b]2;This is window title\x07");
    printf("\x1b[\x1a");
}*/

#define ESC "\x1b"
#define CSI "\x1b["

#define RED ESC "[31m"
#define WHITE ESC "[37m"
#define BYELLOW ESC "[33m"
#define EXT ESC "[38;5m"

void PrintAt(int row, int col, const char *str)
{
    printf("%s[%d;%dH%s", ESC, row, col, str);
}

int main(void)
{
    system("cls");
    PrintAt(1, 2, RED "Hello World" WHITE);
    PrintAt(1, 20, BYELLOW "Hello World" WHITE);
    PrintAt(1, 40, EXT "Hello World" WHITE);

    //   get_key();
    // printf("%c", 0x6a);
}
