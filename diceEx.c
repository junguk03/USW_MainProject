#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int add(int a,int b,int c){
    int i, sum = 0;

    sum = a + b + c;

    return sum;
}

int main(void){
    int a, b, c, d, e, f;
    scanf("%d%d%d",&d,&e,&f);
    a = rand() % 6 +1;
    b = rand() % 6 +1;
    c = rand() % 6 +1;
    printf("%d %d %d\n",a,b,c);

    if(add(a,b,c) < add(d,e,f)){
        printf("사용자가 이겼습니다");
    }
    else if(add(a,b,c) == add(d,e,f)){
        printf("사용자가 비겼습니다");
    }
    else if(add(a,b,c) > add(d,e,f)){
        printf("사용자가 졌습니다");
    }

    return 0;
}
