#include<stdio.h>
#include<string.h>

typedef struct student {
   char name[20];
   float score1, score2, score3, total, avg;
}PERSON;

int main(void) {

   PERSON student[10] = {
      {"홍길동", 90, 80, 70, 0, 0},
      {"김유신", 95, 68, 87, 0, 0}
    };

   FILE* fp;
   FILE* fp1;
   char name[20];
   float avg = 0.0, score1 = 0, score2 = 0, score3 = 0 ,total = 0.0;
   int i, count=0;

   if ((fp = fopen("grade.txt", "w")) == NULL){
      printf("파일을 열 수 없습니다.\n");
      return 1;
   }

   fprintf(fp,"이름\t국어\t수학\t영어\n");
   for(i=0;i<2;i++){
      fprintf(fp,"%s\t%.2lf\t%.2lf\t%.2lf\n", student[i].name, student[i].score1, student[i].score2, student[i].score3);
   }
   fclose(fp);
   
   if ((fp = fopen("grade.txt", "r")) == NULL){
      printf("파일을 열 수 없습니다.\n");
      return 1;
   }
   for (i = 0;i < 2;i++){
      fscanf(fp, "%f %f %f", &student[i].score1, &student[i].score2, &student[i].score3);
   }
   fclose(fp);
   
   for (i = 0;i < 2;i++){
      student[i].total = student[i].score1 + student[i].score2 + student[i].score3;
      student[i].avg = student[i].total / 3;
   }
   if ((fp1 = fopen("avg.txt", "w")) == NULL){
      printf("파일을 열 수 없습니다.\n");
      return 1;
   }
   
   fprintf(fp1, "이름\t평균\n");
   for (i =0 ;i < 2;i++){
      fprintf(fp1,"%s\t%.2lf\n", student[i].name, student[i].avg);
   }
   fclose(fp1);

   return 0;
}
