#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 0
	int a, b, c;

	printf("������ �Է��ϼ��� : ");
	scanf("%d %d %d", &a, &b, &c);

	int max = a;

	if (b > max)
		max = b;
	if (c > max)
		max = c;
	printf("�Է¹��� ������ ���� ū ���� %d �Դϴ�.", max);
#endif




#if 0
	int age;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("adult");
	}
	else if (age < 20) {
		printf("%d years latter", 20 - age);
	}

#endif




#if 0
	int fir, sec, a;
	printf("�μ��� �Է��ϼ��� : ");
	scanf("%d %d", &fir, &sec);
	a = fir - sec;
	if (a < 0) {
		a = -a;
	}
	printf("%d", a);
#endif




#if 0
	int sco;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &sco);
	if (sco >= 80) {
		printf("�հ��Դϴ�.");
	}
	else if (sco < 80) {
		printf("���հ��Դϴ�.");
	}
#endif




#if 0
	int sco;
	printf("���� : ");
	scanf_s("%d", &sco);

	if (sco > 90 && sco <= 100) {
		printf("A");
	}
	if (sco > 80 && sco <= 90) {
		printf("B");
	}
	if (sco > 70 && sco <= 80) {
		printf("C");
	}
	if (sco > 60 && sco <= 70) {
		printf("D");
	}
	if(sco < 70) {
		printf("F");
	}
#endif

	return 0;
}