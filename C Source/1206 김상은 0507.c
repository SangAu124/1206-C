#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 1

	//1��
	int a[4];
	int avg1 = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &a[i]);
		avg1 += a[i];
	}
	avg1 = avg1 / 4;

	//2��
	int b[4];
	int avg2 = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &b[i]);
		avg2 += b[i];
	}
	avg2 = avg2 / 4;

	//3��
	int c[4];
	int avg3 = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &c[i]);
		avg3 += c[i];
	}
	avg3 = avg3 / 4;

	//1��
	if (avg1 >= 80) {
		printf("pass\n");
	}
	else {
		printf("fail\n");
	}
	//2��
	if (avg2 >= 80) {
		printf("pass\n");
	}
	else {
		printf("fail\n");
	}
	//3��
	if (avg3 >= 80) {
		printf("pass\n");
	}
	else {
		printf("fail\n");
	}
	

#endif // 1



#if 0

	int input;
	scanf_s("%d", &input);
	if (input == 1) {
		printf("*");
	}
	else if (input == 2) {
		printf("* *\n");
		printf("* *\n");
	}
	else if (input == 3) {
		printf("* * *\n");
		printf("*   *\n");
		printf("* * *\n");
	}
	else if (input == 4) {
		printf("* * * *\n");
		printf("*     *\n");
		printf("*     *\n");
		printf("* * * *\n");
	}
	else if (input == 5) {
		printf("* * * * *\n");
		printf("*       *\n");
		printf("*       *\n");
		printf("*       *\n");
		printf("* * * * *\n");
	}
	else if (input == 6) {
		printf("* * * * * *\n");
		printf("*         *\n");
		printf("*         *\n");
		printf("*         *\n");
		printf("*         *\n");
		printf("* * * * * *\n");
	}
	else if (input == 7) {
		printf("* * * * * * *\n");
		printf("*           *\n");
		printf("*           *\n");
		printf("*           *\n");
		printf("*           *\n");
		printf("*           *\n");
		printf("* * * * * * *\n");
	}
	else if (input == 8) {
		printf("* * * * * * * *\n");
		printf("*             *\n");
		printf("*             *\n");
		printf("*             *\n");
		printf("*             *\n");
		printf("*             *\n");
		printf("*             *\n");
		printf("* * * * * * * *\n");
	}
	else if (input == 9) {
		printf("* * * * * * * * *\n");
		printf("*               *\n");
		printf("*               *\n");
		printf("*               *\n");
		printf("*               *\n");
		printf("*               *\n");
		printf("*               *\n");
		printf("*               *\n");
		printf("* * * * * * * * *\n");
	}
	else {
		printf("1 ~ 9 ������ ���� �Է��ϼ���.");
	}

#endif // 1



#if 0

	int a[4][4] = { 0, };
	int sum[4] = { 0 };
	int hap[4] = { 0 };
	for (int i = 0; i < 3; i++) {
		printf("%d���� ���� : ", i + 1);
		for (int j = 0; i < 3; j++) {
			scanf_s("%d", &a[i][j]);
			sum[i] += a[i][j];
		}
	}
	printf("     ����   ��C   ����   ����\n");
	for (int i = 0; i < 3; i++) {
		printf("%d��  ", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("%4d ", a[j][i]);
			hap[i] += a[j][i];
		}
		printf("   %d\n", sum[i]);
	}
	printf("�հ� ");
	for (int i = 0; i < 4; i++) {
		printf("%4d ", hap[i]);
		hap[3] += hap[i];
	}

#endif // 1


	return 0;
}