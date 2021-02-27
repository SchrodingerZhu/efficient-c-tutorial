/* Goal:
    Please compare structMem with structMem2 and structMem3
*/

#include <stdio.h>

typedef struct {
    int a, b;
    char c;
} Struct1;

void f1() {
    Struct1 s1;
    s1.a = 10;
    s1.b = 20;
    s1.c = 'a';
    printf("size: %d\n", sizeof(s1));
}

int main(int argc, char const *argv[])
{
    f1();
    return 0;
}
