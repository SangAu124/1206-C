#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point {
	int x, y;
};


int main() {

#if 1
	struct Point p;
	p.x = 1;
	p.y = 2;
	printf("x��ǥ : %d, y��ǥ : %d\n", p.x, p.y);
	//3, 4 ��ǥ�� ���� �ϳ� �� �����ÿ�.
	struct Point p1;
	p1.x = 3;
	p1.y = 4;
	printf("x��ǥ : %d, y��ǥ : %d\n", p1.x, p1.y);
	//�� ���� �Ÿ��� ���
	double a, b, c;
	a = p1.x - p.x;
	b = p1.y - p.y;
	c = sqrt(a * a + b * b);
	printf("%.2f\n", c);

#endif // 1


	return 0;
}