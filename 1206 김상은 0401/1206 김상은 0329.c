#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


#if 0
	//1���� 100���� 3�� ����� ���
	int n, cnt = 0;
	for (n = 1; n <= 100; n++) {
		if (n % 3 == 0) {
			printf("%4d", n);
			cnt++;
		}
		if (cnt == 5) {
			printf("\n");
			cnt = 0;
		}
	}
#endif





#if 0
	int opt;
	double num1, num2, result;
	printf("1. ���� 2. ���� 3. ���� 4. ������ \n");
	printf("����? ");
	scanf_s("%d", &opt);

	printf("�ΰ��� �Ǽ� �Է� : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;

	else if (opt == 2)
		result = num1 - num2;

	else if (opt == 3)
		result = num1 * num2;

	else if (opt == 4)
		result = num1 / num2;

	else
		printf("�߸��� �Է��Դϴ�.");

	printf("��� : %f", result);
#endif





#if 0
	int n;
	printf("���� �Է� : ");
	scanf_s("%d", &n);

	/*if (n < 0) printf("0���� �۴�");
	if (n == 0) printf("0�� ����");
	if (n > 0) printf("0���� ũ��");*/

	if (n < 0)
		printf("0���� �۴�");
	else if (n > 0)
		printf("0���� ũ��");
	else
		printf("0�� ����");
#endif






#if 0
	int i, j, k = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4 - i; j++)
			printf(" ");
		for (j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
#endif





#if 0
	int i, j, k = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4 - i; j++)
			printf(" ");
		for (j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
#endif





#if 0
	int i, j, k = 1;
	for (i = 5; i > 0; i--)
	{
		for (j = 0; j < i - 1; j++) 
			printf(" ");
		for (j = 0; j < k; j++) 
			printf("*");
		k += 2;
		printf("\n");
	}
#endif





#if 0
	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j >=  i; j--) {
			printf("*");
		}
		printf("\n");
	}
#endif

	return 0;
}