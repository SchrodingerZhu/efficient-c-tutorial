/* Task: 
    1. Explain the second line of output.
    2. Try to complete setIInstruction and setJInstruction 
*/

/* Goal:
    1. Understand Bit Fields in C: https://www.geeksforgeeks.org/bit-fields-c/.
    2. A very useful trick in systems' programming to save memory and accelerate the access time.
    3. Understand "Little endian" and "Big endian" (by default Little endian).
    PS: Not required to follow this for your project.
*/

#include <stdio.h>
#include <stdint.h>

typedef char EmptyInstruction[4];
typedef struct {
    unsigned opcode: 6;
    unsigned rd: 5;
    unsigned rs: 5;
    unsigned rt: 5;
    unsigned shamt: 5;
    unsigned funct: 6;
} RInstruction;

typedef struct {
    unsigned opcode:6;
    unsigned rd: 5;
    unsigned rs: 5;
    unsigned imm: 16;
} IInstruction;

typedef struct {
    unsigned opcode: 6;
    unsigned target: 26;
} JInstruction;

void printInstruction(EmptyInstruction* ins) {
    uint32_t *value = (uint32_t*)ins;
    for (size_t i=0; i<32; i++) {
        printf("%d ", *value & 1);
        *value = *value >> 1;
    }
    printf("\n");
}

void setRInstruction(RInstruction* ins, unsigned opcode, unsigned rd, unsigned rs, unsigned rt, unsigned shamt, unsigned funct) {
    ins->opcode = opcode;
    ins->rd = rd;
    ins->rs = rs;
    ins->rt = rt;
    ins->shamt = shamt;
    ins->funct = funct;
}

void f1() {
    EmptyInstruction e;
    setRInstruction((RInstruction*) &e, 1, 2, 3, 4, 5, 6);
    printInstruction(&e);
}

int main(int argc, char const *argv[])
{
    EmptyInstruction e;
    RInstruction r;
    IInstruction i;
    JInstruction j;
    printf("sizeof E: %d   sizeof R: %d   sizeof I: %d   sizeof J: %d\n", sizeof(e), sizeof(r), sizeof(i), sizeof(j));
     
    f1();
    return 0;
}


