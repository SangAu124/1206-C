#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct tri {
	double x, y;
}Point;

int main() {

	Point p1, p2, p3;
	double cenx, ceny;

	printf("p1 �ﰢ���� �������� ��ǥ�� �Է��ϼ��� : ");
	scanf("%lf %lf", &p1.x, &p1.y);
	printf("p2 �ﰢ���� �������� ��ǥ�� �Է��ϼ��� : ");
	scanf("%lf %lf", &p2.x, &p2.y);
	printf("p2 �ﰢ���� �������� ��ǥ�� �Է��ϼ��� : ");
	scanf("%lf %lf", &p3.x, &p3.y);

	cenx = (p1.x + p2.x + p3.x) / 3;
	ceny = (p1.y + p2.y + p3.y) / 3;

	printf("�ﰢ���� �����߽��� (%.1lf, %.1lf) �Դϴ�.", cenx, ceny);

	return 0;
}