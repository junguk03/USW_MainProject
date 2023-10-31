#include<stdio.h>
void get_frac(double f, int* pi, double* pd);

int main(void){
    double num = 0.0;
    int num1 = 0;
    double num2 = 0.0;
    scanf("%lf",&num);

    get_frac(num, &num1, &num2);
    printf("%d\n%lf",num1,num2);
}

void get_frac(double f, int* pi, double* pd){
    *pi = (int)f;
    *pd = f - *pi;
}