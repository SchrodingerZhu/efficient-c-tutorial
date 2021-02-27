/* Task: Display the memory distribution. */

/* Goal:
    1. Better understand question2.c.
*/

#include <stdio.h>

int f1()
{
    char buffer[20];
    buffer[0] = 'h';
    buffer[1] = 'e';
    buffer[2] = 'l';
    buffer[3] = 'l';
    buffer[4] = 'o';
    buffer[5] = ' ';
    buffer[6] = 'w';
    buffer[7] = 'o';
    buffer[8] = 'r';
    buffer[9] = 'l';
    buffer[10] = 'd';
    buffer[11] = '!';
    buffer[12] = '\0';
    printf("%s\n", buffer);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d\n", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4],
           buffer[5], buffer[6], buffer[7], buffer[8], buffer[9], buffer[10], buffer[11], buffer[12], buffer[13]);
}

int f2()
{
    char _ = 'A';
    char buffer[20];
    buffer[0] = 'H';
    printf("%s\n", buffer);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d\n", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4],
           buffer[5], buffer[6], buffer[7], buffer[8], buffer[9], buffer[10], buffer[11], buffer[12], buffer[13]);
    printf("\n");
}

int main(int argc, char const *argv[])
{
    f1();
    f2();
    return 0;
}
