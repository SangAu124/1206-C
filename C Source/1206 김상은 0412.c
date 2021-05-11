#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//<math.h>함수
/*
int abs(int n); = 절댓값
double cos(double x); = 코사인
double tan(double x); = 탄젠트
double sin(double x); = 사인
double ceil(double x); = 올림
double floor(double x); = 올림
*/

int minNum(int a, int b, int c) {
	int min = 2147483647;
	if (min > a) {
		min = a;
	}
	if(min > b){
		min = b;
	}
	if (min > c) {
		min = c;
	}
}
int maxNum(int a, int b, int c) {
	int max = -214748367;
	if (max < a) {
		max = a;
	}
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
}



int maxnum(int a, int b, int c) {
	return (a > b) ? ((a > c) ? a : c) : (b > c) ? b : c;
}
int minnum(int a, int b, int c) {
	return (a < b) ? ((a < c) ? a : c) : (b < c) ? b : c;
}



int fibo(int n) {
	// 1 1 2 3 5 8 13 21 34...
	int f1 = 1, f2 = 1, f3;
	if (n == 1) {
		printf("%d ", f1);
	}
	else {
		printf("%d %d ", f1, f2);
	}
	for (int i = 0; i < n - 2; i++) {
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

int num = 3;
void func() {
	num++;
}

int main() { 

#if 1
	
	if (num == 1) {
		int num = 7;
		num += 10;
		printf("if문 내 지역변수 num : %d \n", num);
	}
	func();
	printf("main 함수 내 지역변수 num : %d \n", num);
	return 0;

#endif




#if 0

	fibo(150);

	return 0;

#endif




#if 0
	int a, b, c, re1, re2;
	scanf_s("%d %d %d", &a, &b, &c);
	re1 = maxnum(a, b, c);
	re2 = minnum(a, b, c);
	printf("max = %d  min = %d", re1, re2);
	return 0;

#endif




#if 0

	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);

	printf("min = %d  max = %d", minNum(a, b, c), maxNum(a, b, c) );


#endif 




#if 0
	int a;
	scanf("%d", &a);
	printf(" %d 의 절댓값은 %d 입니다.", a, abs(a));
#endif 

	return 0;
}
