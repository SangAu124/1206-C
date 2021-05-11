#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 0
	for (int ver = 1; ver <= 5; ver++) {
		//ver : 1 2 3 4 5
		for (int hor = 1; hor <= 5; hor++) {
			//hor : 1 2 3 4 5
			printf("%d ", ver);
		}
		printf("\n");
	}
	printf("\n");
	for (int ver = 1; ver <= 5; ver++) {
		//ver : 1 2 3 4 5
		for (int hor = 1; hor <= 5; hor++) {
			//hor : 1 2 3 4 5
			printf("%d ", hor);
		}
		printf("\n");
	}
#endif





#if 0
	int a, b, n;
	printf("N 입력 : ");
	scanf_s("%d", &n);
	for (a = 0; a < n; a += 1) {
		for (b = 0; b < n; b += 1) {
			printf("*");
		}
		printf("\n");
	}
#endif





#if 0
	int i = 1, dan;
	printf("단을 입력하세요 : ");
	scanf_s("%d", &dan);
	for (i = 1; i <= 9; i++) {
		printf("%d x %d = %2d\n", dan, i, dan * i);
	}
#endif





#if 0
	int i, n;
	printf("수를 입력하세요 : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d\n", i);
	}
#endif





#if 0
	for (int i = 1; i <= 20; i += 2) {
		printf("%d ", i);
	}
#endif


	return 0;
}