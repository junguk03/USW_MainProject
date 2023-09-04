#include<stdio.h>

int add(int input){
    int i, sum = 0;
    
    for(i=0;i<=input;i++){
        sum += i;
    }

    return sum;
}

int main(void){
    int input, sum1;
    scanf("%d",&input);
    sum1 = add(input);
    printf("%d",sum1);
}