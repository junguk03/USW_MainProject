#include<stdio.h>
#define STUDENTS 5
int get_average(int average[], int n);


int main(void){
    int scores[STUDENTS] = {1, 2, 3, 4, 5};
    int avg;

    avg = get_average(scores, STUDENTS);
    printf("학교 성적 평균은 %d입니다",avg);
    return 0;
}

int get_average(int scores[], int n){
    int sum = 0;
    int i;
    for(i=0;i<n;i++){
        sum += scores[i];
    }
    return sum/n;
}