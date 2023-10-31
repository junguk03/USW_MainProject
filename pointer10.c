#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    double sensorData[3];
    getsensorData(sensorData);

    printf("왼쪽 센서와 장애물과의 거리: %1f \n", sensorData[0]);
    printf("중간 센서와 장애물과의 거리: %1f \n", sensorData[1]);
    printf("오른쪽 센서와 장애물과의 거리: %1f \n", sensorData[2]);
}

void getsensorData(double* p){
    srand((unsigned)time(NULL));
    int i;
    for(i=0;i<3;i++){
        *(p + i) = rand() % 100;
    }
    return;
}