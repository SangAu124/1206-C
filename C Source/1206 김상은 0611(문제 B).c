#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 1

	int n;
	int min = 2147483647, max = -2147483647;
	int scrArr[50];
	printf("����� ������ �Է��Ҳ���? : ");
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
	printf("1�� : %d\n", max);
	printf("���� : %d\n", min);

#endif // 1

	return 0;
}