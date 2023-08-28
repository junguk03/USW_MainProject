#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int num;
    printf("(1:가위 2:바위 3:보)중에서 하나를 선택하시오: ");
    scanf("%d",&num);
    int computer = 1+rand() % 3;
    if(computer == 1){
        switch (num)
        {
            case 1:
                printf("사용자가 비겼습니다");
                break;
            case 2:
                printf("사용자가 이겼습니다");
                break;
            case 3:
                printf("사용자가 졌습니다");
                break;
            default:
                break;
        }
    }

    if(computer == 2){
        switch (num)
        {
            case 1:
                printf("사용자가 졌습니다");
                break;
            case 2:
                printf("사용자가 비겼습니다");
                break;
            case 3:
                printf("사용자가 이겼습니다");
                break;
            default:
                break;
        }
    }

    if(computer == 3){
        switch (num)
        {
            case 1:
                printf("사용자가 이겼습니다");
                break;
            case 2:
                printf("사용자가 졌습니다");
                break;
            case 3:
                printf("사용자가 비겼습니다");
                break;
            default:
                break;
        }
    }

    return 0;
}