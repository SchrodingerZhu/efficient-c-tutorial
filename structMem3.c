/* Task: 
    Please compare structMem with structMem2 and structMem3
*/

/* Goal:
    1. Understand little endian.
    2. Learn to optimize our codes to save memory.
*/

#include <stdio.h>
#include <stdint.h>

typedef struct {
    int a, b;
    char c;
    char e[3];
    int d;
} Struct1;

void f1() {
    Struct1 s1;
    s1.a = 10;
    s1.b = 20;
    s1.c = 'a';
    s1.d = 30;
    s1.e[0] = 'b';
    s1.e[1] = 'c';
    s1.e[2] = 0;
    printf("size: %d\n", sizeof(s1));
    printf("%s\n", &s1.c);

    uint8_t* ptr = &s1.c;
    printf("%x %x %x %x\n", ptr[0], ptr[1], ptr[2], ptr[3]);
    printf("%x %x %x %x\n", ptr[4], ptr[5], ptr[6], ptr[7]);
}

int main(int argc, char const *argv[])
{
    f1();
    return 0;
}
