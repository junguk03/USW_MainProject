#include <stdio.h>
#include <stdbool.h>

/*
(1+2+3+... + n)∞° 10000¿ª ≥—¡ˆ æ ¿∏∏Èº≠ ∞°¿Â ≈´ ∞™∞˙ ±◊ ∂ß¿« n¿« ∞™¿ª ±∏«œ∂Û.

∞·∞˙
1∫Œ≈Õ 140±Ó¡ˆ¿« «’¿Ã 9870¿‘¥œ¥Ÿ.
*/

int main() {

	int i, sum;
	i = 0;
	sum = 0;

	/*
	while (sum <= 10000) {
		i++;
		sum += i;
	}
	*/

	while (true)
	{
		i++;
		sum += i;
		if (sum >= 10000)
			break;

	}


	printf("%d%d\n", (i - 1), sum - i);

	return 0;
}
