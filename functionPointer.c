/* Task: 
    You may extend the following codes for your project.
*/

/* Goal:
    1. Learn about function pointers.
    2. Learn about a way to achieve polymorphism in C.
*/

#include <stdio.h>
#include <stdint.h>

typedef void RType(uint32_t *rd, uint32_t *rs, uint32_t *rt);

void AddFunc(uint32_t *rd, uint32_t *rs, uint32_t *rt) {
    *rd = *rs + *rt;
}

void SubFunc(uint32_t *rd, uint32_t *rs, uint32_t *rt) {
    *rd = *rs - *rt;
}

enum OPCode {Add, Sub};
RType* Functions[] = {AddFunc, SubFunc};

int main(int argc, char const *argv[])
{
    uint32_t rd, rs, rt;
    enum OPCode opcode;
    scanf("%d %d %d", &opcode, &rs, &rt);
    Functions[opcode](&rd, &rs, &rt);
    printf("%d\n", rd);
    return 0;
}