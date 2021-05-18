#include <stdio.h>

int Prime(int n) {
	for (int i = 1; i <= n; i++) {
		if ((i != 1 && i != n) && n % i == 0) return 0;
	}
	return 1;
}


int main() {

#if 1

	while (1) {
		int n;
		printf("¼ýÀÚ : ");
		scanf_s("%d", &n);

		if (n < 2) return 0;
		if (n >= 1000) {
			printf("\n");
			continue;
		}

		int primeCnt = 1;
		for (int i = 2; i <= n; i++) {
			if (Prime(i)) {
				printf("%d ", i);
				if (primeCnt == 10) {
					printf("\n");
					primeCnt = 1;
				}
				primeCnt++;
			}
		}
		printf("\n\n");
	}


#endif // 1


	return 0;
}