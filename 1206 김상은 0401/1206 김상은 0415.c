#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 0
	int n, sum = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", sum);
			sum++;
		}
		printf("\n");
	}
#endif



#if 0

	int a;
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:printf("1st");
		break;
	case 2:printf("2st");
		break;
	case 3:printf("3st");
	default:
		printf("%dth", a);
		break;
	}

#endif // 1



#if 0

	int score, pass;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);
	printf("�հ����� �Է��ϼ��� : ");
	scanf_s("%d", &pass);
	score >= pass ? printf("�հ�\n") : printf("���հ�\n");

#endif // 1


	return 0;
}