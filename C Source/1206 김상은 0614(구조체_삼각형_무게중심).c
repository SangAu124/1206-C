#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct tri {
	double x, y;
}Point;

int main() {

	Point p1, p2, p3;
	double cenx, ceny;

	printf("p1 삼각형의 꼭지점의 좌표를 입력하세요 : ");
	scanf("%lf %lf", &p1.x, &p1.y);
	printf("p2 삼각형의 꼭지점의 좌표를 입력하세요 : ");
	scanf("%lf %lf", &p2.x, &p2.y);
	printf("p2 삼각형의 꼭지점의 좌표를 입력하세요 : ");
	scanf("%lf %lf", &p3.x, &p3.y);

	cenx = (p1.x + p2.x + p3.x) / 3;
	ceny = (p1.y + p2.y + p3.y) / 3;

	printf("삼각형의 무게중심은 (%.1lf, %.1lf) 입니다.", cenx, ceny);

	return 0;
}