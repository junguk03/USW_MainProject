#include<stdio.h>
#define SIZE 10

int main(void){
    int num[SIZE] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
    int i, j, temp, least;
    for(i=0;i<SIZE-1;i++){
        least = i;
        for(j = i + 1;i<SIZE;j++){
            if(num[j]<num[least]){
                least = j;
            }
        }
        temp = num[least];
        num[least] = num[i];
        num[i] = temp;
    }
    for(i=0;i<SIZE;i++){
        printf("%d",num[i]);
    }
}