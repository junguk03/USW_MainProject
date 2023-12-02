#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct telephone_directory {
    char name[50];
    char phone_number[50];
    char company[50];
} Telephone_Directory;

int main(void) {
    char answer1, answer2;
    int num1, num2;
    FILE* fp;
    Telephone_Directory s1, s2;

    printf("전화번호부를 여시겠습니까? (Y/N) : ");
    scanf(" %c", &answer1);

    fp = fopen("telephone_directory.txt", "r");
    if (fp == NULL) {
        fp = fopen("telephone_directory.txt", "w");
        if (fp == NULL) {
            printf("파일을 열 수 없습니다.\n");
            exit(1);
        }
        fprintf(fp, "이름   전화번호      직장\n");
        fclose(fp);
    }
    else {
        fclose(fp);
    }


    while (answer1 == 'Y' || answer1 == 'y') {

        printf("\n ↓ <기능을 선택하시오.> ↓\n");
        printf("┌────────────────────────┐\n");
        printf("│1. 전화번호 검색        │\n");
        printf("│2. 새연락처 등록        │\n");
        printf("│3. 연락처 수정          │\n");
        printf("│4. 연락처 삭제          │\n");
        printf("└────────────────────────┘\n");
        printf("번호를 입력하세요 : ");
        scanf("%d", &num1);

        switch (num1) {
        case 1: 
            fp = fopen("telephone_directory.txt", "r");
            if (fp == NULL) {
                printf("파일을 열 수 없습니다.\n");
                exit(1);
            }

            printf("\n전화번호 검색을 선택하였습니다.\n");
            printf(" ↓ <무엇으로 검색하시겠습니까?> ↓\n");
            printf("┌────────────────────────────────┐\n");
            printf("│1. 전화번호로 검색              │\n");
            printf("│2. 이름으로 검색                │\n");
            printf("└────────────────────────────────┘\n");
            printf("번호를 입력하세요 : ");
            scanf("%d", &num2);

            switch (num2) {
            case 1:
                printf("\n전화번호로 검색을 선택하였습니다.\n");
                printf("검색할 전화번호를 입력하세요 : ");
                scanf("%s", s2.phone_number);


                fscanf(fp, "%*s %*s %*s");
                while (fscanf(fp, "%s %s %s", s1.name, s1.phone_number, s1.company) != 3) {
                    if (strcmp(s1.phone_number, s2.phone_number) == 0) {
                        printf("\n<검색 결과>\n");
                        printf("┌                                 ┐\n");
                        printf("  이름 : %s        \n", s1.name);
                        printf("  전화번호 : %s    \n", s1.phone_number);
                        printf("  직장 : %s        \n", s1.company);
                        printf("└                                 ┘\n");
                        break;
                    }
                }
                break;

            case 2:
                printf("\n이름으로 검색을 선택하였습니다.\n");
                printf("검색할 이름을 입력하세요 : ");
                scanf("%s", s2.name);

                rewind(fp);
                while (fscanf(fp, "%s %s %s", s1.name, s1.phone_number, s1.company) != EOF) {
                    if (strcmp(s1.name, s2.name) == 0) {
                        printf("\n<검색 결과>\n");
                        printf("┌                                 ┐\n");
                        printf("  이름 : %s        \n", s1.name);
                        printf("  전화번호 : %s    \n", s1.phone_number);
                        printf("  직장 : %s        \n", s1.company);
                        printf("└                                 ┘\n");
                        break;
                    }
                }
                break;

            default:
                printf("잘못된 선택입니다.\n");
                break;
            }
            fclose(fp);
            break;

        case 2:
            fp = fopen("telephone_directory.txt", "a");
            if (fp == NULL) {
                printf("파일을 열 수 없습니다.\n");
                exit(1);
            }
            printf("\n새연락처 등록을 선택하였습니다.\n");
            printf("┌                                        ┐\n");
            printf("  전화번호를 입력하세요 : ");
            scanf("%s", s1.phone_number);
            printf("  이름을 입력하세요 : ");
            scanf("%s", s1.name);
            printf("  직장을 입력하세요 : ");
            scanf("%s", s1.company);
            printf("└                                        ┘\n");
            printf("새연락처 등록이 완료되었습니다.\n");
            fprintf(fp, "%s %s %s\n", s1.name, s1.phone_number, s1.company);
            fclose(fp);
            break;

        case 3: /* 여기 부분은 손 좀 봐야됌 ㅠ 잘 모르겄어.
            printf("\n연락처 수정을 선택하였습니다.\n");
            printf("\n수정을 원하는 정보는 어떤 것인지 선택하시오.\n");
            printf("1. 이름\n 2. 전화번호\n 3.직장\n : ");
            scanf("%d", &num2);

            switch (num2){
            case 1:
                printf("\n이름을 선택하였습니다.\n");
                printf("수정할 이름 입력하세요 : ");
                scanf("%s", s2.name);
                if(fscanf(fp, "%s"))



            default:
                printf("잘못된 선택입니다.\n");
                break;
            }
            break;
            */

        case 4://삭제하는 부분
            printf(" ");
            break;

        default:
            printf("잘못된 선택입니다.\n");
            break;

        }

        printf("\n전화번호부를 계속하시겠습니까? (Y/N) : ");
        scanf(" %c", &answer1);
    }

    return 0;
}