#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROWS 5
#define COLS 3

int main(void){
    int array_score[ROWS][COLS] = {0, };
    int i, j;
    int min = 101, max = 0;

    srand((unsigned)time(NULL));

    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            array_score[i][j] = rand() % 99 + 1;
            printf("%d ",array_score[i][j]);
        }
        printf("\n");
    }
    printf("============================\n");
    
    for(i=0;i<5;i++){
        if(array_score[i][0]>max){
            max = array_score[i][0];
        }
        if(array_score[i][0]<min){
            min = array_score[i][0];
        }
    }
    printf("시험 #0의 최대점수 = %d\n",max);
    printf("시험 #0의 최저점수 = %d\n",min);
    printf("============================\n");
    
    min = 101, max = 0;
    for(i=0;i<5;i++){
        if(array_score[i][1]>max){
            max = array_score[i][1];
        }
        if(array_score[i][1]<min){
            min = array_score[i][1];
        }
    }
    printf("시험 #0의 최대점수 = %d\n",max);
    printf("시험 #0의 최저점수 = %d\n",min);
    printf("============================\n");

    min = 101, max = 0;
    for(i=0;i<5;i++){
        if(array_score[i][2]>max){
            max = array_score[i][2];
        }
        if(array_score[i][2]<min){
            min = array_score[i][2];
        }
    }
    printf("시험 #0의 최대점수 = %d\n",max);
    printf("시험 #0의 최저점수 = %d\n",min);

    return 0;
}