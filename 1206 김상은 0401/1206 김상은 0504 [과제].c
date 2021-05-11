#include <stdio.h>
#define NUM 20

int main() {

	int a[20] = { 95, 64, 78, 94, 65, 88, 77, 69, 45,
		78, 46, 1, 0, 100, 98, 69, 67, 88, 87, 92 };
	int i, range, histo[11];
	for (i = 0; i <= 10; i++) {
		histo[i] = 0;
	}
	for (i = 0; i < NUM; i++) {
		histo[a[i] / 10]++;
	}
	for (i = 0; i <= 10; i++) {
		printf("%3d :", i * 10);
		for (int j = 0; j < histo[i]; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}