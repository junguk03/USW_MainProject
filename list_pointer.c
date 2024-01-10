#include<stdio.h>

int main(){
    int list[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int* p;
    p = list;
    printf("%d\n",list);

    printf("%d\n",list+1);
    //① 출력값과 이유:
    printf("%d\n", *(list+1));
    // ② 출력값과 이유:
    printf("%d\n", *p + 3);
    // ③ 출력값과 이유:
    printf("%d\n", *(p + 3));
}