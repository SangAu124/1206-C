#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {



	//5번 문제

#if 0
	int dan, i = 1;
	printf("단을 입력하세요 : ");
	scanf_s("%d", &dan);
	while (i <= 9) {
		printf("%d x %d = %2d\n", dan, i, dan * i);
		i++;
	}
#endif



	//4번 문제

#if 1
	int sc = 0, i = 0;
	printf("수를 입력하세요 : ");
	scanf_s("%d", &sc);
	do {
		printf("%d\n", i);
		i++;
	} while (i < sc);
#endif



	//3번 문제

#if 0
	int sc = 0, num = 0, i = 0;
	scanf_s("%d", &sc);

	if (sc > 100) {
		printf("100이하의 수를 입력하세요");
	}
	else if(sc <= 100 && sc >= 1) {
		while (num <= sc) {
			i += num;
			num++;
		}
	}
	printf("%d", i);

#endif


	//2번 문제

#if 0
	int num = 0, i = 0;
	while (num <= 10) {
		i += num;
		num++;

	}
	printf("1 부터 10까지의 합 = %d\n", i);
	printf("while문이 끝난후의 num 값 = %d", num);
#endif



	//1번 문제

#if 0
	int a = 65, i = 1;
	while (i <= 26) {
		printf("%c", a);
		a++;
		i++;
	}
#endif

	return 0;
}