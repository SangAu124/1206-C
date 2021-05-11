#include <stdio.h>

int main() {

#if 1

	int i, j;
	int start = 0;
	int end = 6;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 7; j++) {
			if (start == j) {
				printf("*");
			}
			else if (end == j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		start++;
		end--;
		printf("\n");
	}

#endif // 1




#if 0

	printf("*     *"); printf("\n");
	printf(" *   * "); printf("\n");
	printf("  * *  "); printf("\n");
	printf("   *   "); printf("\n");
	printf("  * *  "); printf("\n");
	printf(" *   * "); printf("\n");
	printf("*     *"); printf("\n");

#endif // 1




#if 0

	int a;
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}

#endif // 1




#if 0

	for (int j = 1; j <= 9; j++) {
		for (int i = 2; i <= 9; i++){
			printf("%d * %d = %2d  ", i, j, i*j);
		}
		printf("\n");
	}

#endif // 1


	return 0;
}