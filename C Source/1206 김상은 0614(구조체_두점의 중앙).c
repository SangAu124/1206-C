#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct p {
	double x, y;
}point;

int main() {

	point p1, p2;
	double cenx, ceny;

	printf("p1 ���� ��ǥ�� �Է��ϼ��� : ");
	scanf("%lf %lf", &p1.x, &p1.y);
	printf("p2 ���� ��ǥ�� �Է��ϼ��� : ");
	scanf("%lf %lf", &p2.x, &p2.y);

	cenx = (p1.x + p2.x) / 2;
	ceny = (p1.y + p2.y) / 2;

	printf("�� ���� �߾��� (%.1lf, %.1lf) �Դϴ�.", cenx, ceny);

	return 0;
}