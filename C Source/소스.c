#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

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