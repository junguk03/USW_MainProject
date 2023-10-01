#include<stdio.h>
#include<string.h>
#define SIZE 10
void array_print(int* A, int* B, int size);
void array_copy(int* A, int* B, int size);

int main(void){
    int length = 0;
    int A[SIZE] = {1,2,3,0,0,0,0,0,0,0};
    int B[SIZE];
    array_copy(A,B,SIZE);
    array_print(A,B,SIZE);
}

void array_copy(int* A, int* B, int size) {

    int i;

    for (i = 0; i < size; i++) {
        B[i] = A[i];
    }
}

void array_print(int* A, int* B, int size){
    int i;
    printf("A[] =");

    for(i=0;i<size;i++){
        printf(" %d",A[i]);
    }

    printf("\n");
    printf("B[] =");

    for(i=0;i<size;i++){
        printf(" %d",B[i]);
    }
}
