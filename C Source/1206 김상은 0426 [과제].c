#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a[5] = { 1, 2, 3, 4, 5 };
	int* p = a;
	printf("a �� �ּ� = %p\n", a);
	printf("a �� �ּ� = %p\n", p);

	printf("a[0] �� �ּ� = %p\n", a);
	printf("a[0] �� �ּ� = %p\n\n", &a[0]);

	int b = 100;
	p = &b;
	printf("b�� �� == 100\n");

	*p = 60; //b �� ���� 60 ���� ����
	printf("b �� �� %d\n", b);
	printf("b �� �� %d\n", *p);


	return 0;
}