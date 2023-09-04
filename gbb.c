#include <stdio.h>

int main() {

	//ƒƒ«ª≈Õ∞°≥ª¥¬ ºˆ
	int computer = rand() % 3 +1;
	int user;
	
	// ªÁøÎ¿⁄∞° ≥ª¥¬ ºˆ
	printf("º±≈√«œΩ√ø¿(1: ∞°¿ß 2:πŸ¿ß  3:∫∏)");
	scanf_s("%d", &user);

	//∞·∞˙ ∫Ò±≥
	if (user == 1 && computer == 2)
		printf("ƒƒ«ª≈Õ∞° ¿Ã∞Â¿Ω\n");
	else if (user == 1 && computer == 3)
		printf("ªÁøÎ¿⁄∞° ¿Ã∞Â¿Ω\n");
	else if (user == 2 && computer == 1)
		printf("ªÁøÎ¿⁄∞° ¿Ã∞Â¿Ω\n");
	else if (user == 2 && computer == 3)
		printf("ƒƒ«ª≈Õ∞° ¿Ã∞Â¿Ω\n");
	else if (user == 3 && computer == 1)
		printf("ƒƒ«ª≈Õ∞° ¿Ã∞Â¿Ω\n");
	else if (user == 3 && computer == 2)
		printf("ªÁøÎ¿⁄∞° ¿Ã∞Â¿Ω\n");
	else 	printf("∫Ò∞Â¿Ω\n");



	//∞·∞˙ √‚∑¬



	return 0;
}
