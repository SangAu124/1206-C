#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a[5] = { 1, 2, 3, 4, 5 };
	int* p = a;
	printf("a 의 주소 = %p\n", a);
	printf("a 의 주소 = %p\n", p);

	printf("a[0] 의 주소 = %p\n", a);
	printf("a[0] 의 주소 = %p\n\n", &a[0]);

	int b = 100;
	p = &b;
	printf("b의 값 == 100\n");

	*p = 60; //b 의 값을 60 으로 변경
	printf("b 의 값 %d\n", b);
	printf("b 의 값 %d\n", *p);


	return 0;
}