#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int add(int a,int b,int c){
    int i, sum = 0;

    sum = a + b + c;

    return sum;
}

int main(void){
    int array1[3] = { 0 }, array2[3] = { 0 }, i;
    for(i=0;i<3;i++){
        scanf("%d",&array1[i]);
    }
    array2[0] = rand() % 6 +1;
    array2[1] = rand() % 6 +1;
    array2[2] = rand() % 6 +1;
    printf("%d %d %d\n",array2[0],array2[1],array2[2]);

    if(add(array1[0],array1[1],array1[2]) < add(array2[0],array2[1],array2[2])){
        printf("사용자가 졌습니다");
    }
    else if(add(array1[0],array1[1],array1[2]) == add(array2[0],array2[1],array2[2])){
        printf("사용자가 비겼습니다");
    }
    else if(add(array1[0],array1[1],array1[2]) < add(array2[0],array2[1],array2[2])){
        printf("사용자가 이겼습니다");
    }

    return 0;
}
