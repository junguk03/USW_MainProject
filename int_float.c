#include <stdio.h>
void get_frac(double f, int pi, double pd) {
    pi = (int)f;
    pd = f - pi;
}
int main(void) {
    double num = 0.0; // 입력값
    int num1 = 0; // 정수부
    double num2 = 0.0; // 실수부
    printf("실수를 입력하시오: ");
    scanf("%lf", &num);
    get_frac(num, num1, num2);
    printf("정수부는 %d입니다.\n", num1);
    printf("소수부는 %.2lf입니다.\n", num2);
    return 0;
}