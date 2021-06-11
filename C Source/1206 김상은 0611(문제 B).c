#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 1

	int n;
	int min = 2147483647, max = -2147483647;
	int scrArr[50];
	printf("몇명의 점수를 입력할꺼임? : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &scrArr[i]);
	}
	for (int i = 0; i < n; i++) {
		if (min > scrArr[i])
			min = scrArr[i];
		if (max < scrArr[i])
			max = scrArr[i];
	}
	printf("\n");
	printf("1등 : %d\n", max);
	printf("꼴찌 : %d\n", min);

#endif // 1

	return 0;
}