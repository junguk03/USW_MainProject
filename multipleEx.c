#include <stdio.h>

int main(void) {

	int sum = 0;

	for (int i = 0; i <= 100; i++) {

		if (i % 3 == 0) {
			sum += i;
		}
	}
	printf("1∫Œ≈Õ 100ªÁ¿Ã¿« ∏µÁ 3¿« πËºˆ¿« «’¿∫ %d¿‘¥œ¥Ÿ.", sum);


	return 0;
}
