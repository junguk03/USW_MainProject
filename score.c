#include <stdio.h>

int main(void) {

	int score;

	printf("시험 성적: ");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("A\n");
	else if (score >= 80)
		printf("B\n");
	else if (score >= 70)
		printf("C\n");
	else if (score >= 60)
		printf("D\n");
	else
		printf("재수강하세요\n");


	return 0;
}
