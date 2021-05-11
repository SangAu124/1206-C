#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 0
	// 동적인 배열
	// int arr = malloc(sizeof(int) * n);
	int a, sum = 0, n[100];
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &n[i]);
		sum += n[i];
	}
	printf("평균 : %.2lf", (double)sum / a);

#endif // 1



#if 0

	int a[5], MAX = 0;
	printf("입력 : ");
	for (int i = 1; i <= 5; i++) {
		scanf("%d", &a[i]);
		printf("%d ", i);
		if (a[i] >= MAX) {
			MAX = a[i];
		}
	}
	printf("\n");
	printf("최대값 : %d", MAX);

#endif // 1



#if 0

	int a[5], i, MAX = 0;
	for (i = 1; i <= 5; i++) {
		printf("%d번 학생의 프C 성적 : ", i);
		scanf("%d", &a[i]);

		if (a[i] >= MAX) {
			MAX = a[i];
		}
	}
	printf("최고점수 : %d", MAX);

#endif // 1


	return 0;
}