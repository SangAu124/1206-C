#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct p {
	double x, y;
}point;

int main() {

	point p1, p2;
	double cenx, ceny;

	printf("p1 점의 좌표를 입력하세요 : ");
	scanf("%lf %lf", &p1.x, &p1.y);
	printf("p2 점의 좌표를 입력하세요 : ");
	scanf("%lf %lf", &p2.x, &p2.y);

	cenx = (p1.x + p2.x) / 2;
	ceny = (p1.y + p2.y) / 2;

	printf("두 점의 중앙은 (%.1lf, %.1lf) 입니다.", cenx, ceny);

	return 0;
}