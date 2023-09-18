#include<stdio.h>
#define ROWS 5
#define COLS 3

int main(void){
    int array[ROWS][COLS] = { 
        { 87, 98, 80, 76, 3 }, 
        { 99, 89, 90, 90, 0 },
        { 65, 68, 50, 49, 0 }
    };

    int i;
    for (i = 0; i < ROWS; i++) {
        double final_scores = array[i][0] * 0.3 + array[i][1] * 0.4 +
            array[i][2] * 0.2 + array[i][3] * 0.1 - array[i][4];
        printf("학생 #%i의 최종성적=%10.2f \n", i + 1, final_scores);
    }
    return 0;
}