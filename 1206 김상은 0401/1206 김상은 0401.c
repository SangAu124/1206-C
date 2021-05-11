#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {



#if 0
	int dan, n;
	for (dan = 2; dan < 10; dan++) {
		if (dan % 2 == 1)
			continue;
		for (n = 1; n < 10; n++) {
			if (dan < n)
				break;
			printf("%d x %d = %2d\n", dan, n, dan * n);
		}
		printf("===========\n");
	}
#endif




#if 1
	int n, dan;
	for (dan = 2; dan <= 9; dan++) {
		for (int i = 1; i <= 9; i++) {
			if (i <= dan) {
				printf("%d x %d = %2d\n", dan, i, dan * i);
			}
		}
		printf("===========\n");
	}
#endif




#if 0
	int sum = 0, num = 0;
	while (1) {
		sum = sum + num;
		num++;
		if (sum > 10000) {
			printf("총합 : %d\n", sum - num);
			printf("num = %d", --num);
			break;
		}
	}

#endif




#if 0
	int kor, eng, math;
	double aver;
	printf("Korean, English, Math \n");
	scanf_s("%d %d %d", &kor, &eng, &math);
	aver = (kor + eng + math) / 3.0;
	printf("Average : %f\n", aver);
	if (aver >= 90) {
		printf("A");
	}
	else if (aver >= 80) {
		printf("B");
	}
	else if (aver >= 70) {
		printf("C");
	}
	else if (aver >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
#endif




#if 0
	//차이 출력 프로그램
	int a, b, dif, abs;
	scanf_s("%d %d", &a, &b);
	dif = a - b;
	if (dif < 0) {
		abs = -dif;
		printf("%d", abs);
	}
	else {
		abs = dif;
		printf("%d", abs);
	}
#endif




#if 0
	int n, cnt = 1;
	for (n = 1; n <= 100; n++) {
		if (n % 7 == 0 || n % 9 == 0) {
			continue;
		}
		printf("%3d\n", n);
	}
#endif




#if 0
	int n, abs;
	scanf_s("%d", &n);
	if(n < 0){
		abs = -n;
		printf("절대값 : %d", abs);
	}
	else {
		abs = n;
		printf("절대값 : %d", abs);
	}
#endif

	return 0;
}