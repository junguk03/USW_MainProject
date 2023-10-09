#include <stdio.h>

int main(void) {

    char *pc; 
    int *pi; 
    double *pd;
    pc = (char *)10000; 
    pi = (int *)10000;
    pd = (double *)10000;
    printf(" pc=%x, pc+1=%x, pc+2= %x\n", (unsigned int) pc, (unsigned int)(pc+1), (unsigned int)(pc+2));
    printf(" pi=%x, pi+1=%x, pi+2= %x\n", (unsigned int) pi, (unsigned int)(pi+1), (unsigned int)(pi+2));    
    printf(" pd=%x, pd+1=%x, pd+2= %x\n", (unsigned int) pd, (unsigned int)(pd+1), (unsigned int)(pd+2));
    return 0; 
}