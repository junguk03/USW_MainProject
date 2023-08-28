#include<stdio.h>

int main(void){
    int num, sum = 0, i;
    scanf("%d",&num);
    printf("1부터 %d사이의 모든 3의 배수의 합은 ",num);
    for(i=1;i<=num;i++){
        if(i%3 == 0){
            sum += i;
        }
    }
    printf("%d입니다.",sum);
}