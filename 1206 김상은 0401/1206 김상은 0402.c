#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 0
	int a, b, c;

	printf("세수를 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);

	int max = a;

	if (b > max)
		max = b;
	if (c > max)
		max = c;
	printf("입력받은 세수중 가장 큰 수는 %d 입니다.", max);
#endif




#if 0
	int age;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("adult");
	}
	else if (age < 20) {
		printf("%d years latter", 20 - age);
	}

#endif




#if 0
	int fir, sec, a;
	printf("두수를 입력하세요 : ");
	scanf("%d %d", &fir, &sec);
	a = fir - sec;
	if (a < 0) {
		a = -a;
	}
	printf("%d", a);
#endif




#if 0
	int sco;
	printf("점수를 입력하세요 : ");
	scanf("%d", &sco);
	if (sco >= 80) {
		printf("합격입니다.");
	}
	else if (sco < 80) {
		printf("불합격입니다.");
	}
#endif




#if 0
	int sco;
	printf("점수 : ");
	scanf_s("%d", &sco);

	if (sco > 90 && sco <= 100) {
		printf("A");
	}
	if (sco > 80 && sco <= 90) {
		printf("B");
	}
	if (sco > 70 && sco <= 80) {
		printf("C");
	}
	if (sco > 60 && sco <= 70) {
		printf("D");
	}
	if(sco < 70) {
		printf("F");
	}
#endif

	return 0;
}