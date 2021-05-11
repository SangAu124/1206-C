#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


#if 0
	//1에서 100까지 3의 배수를 출력
	int n, cnt = 0;
	for (n = 1; n <= 100; n++) {
		if (n % 3 == 0) {
			printf("%4d", n);
			cnt++;
		}
		if (cnt == 5) {
			printf("\n");
			cnt = 0;
		}
	}
#endif





#if 0
	int opt;
	double num1, num2, result;
	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 \n");
	printf("선택? ");
	scanf_s("%d", &opt);

	printf("두개의 실수 입력 : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;

	else if (opt == 2)
		result = num1 - num2;

	else if (opt == 3)
		result = num1 * num2;

	else if (opt == 4)
		result = num1 / num2;

	else
		printf("잘못된 입력입니다.");

	printf("결과 : %f", result);
#endif





#if 0
	int n;
	printf("숫자 입력 : ");
	scanf_s("%d", &n);

	/*if (n < 0) printf("0보다 작다");
	if (n == 0) printf("0과 같다");
	if (n > 0) printf("0보다 크다");*/

	if (n < 0)
		printf("0보다 작다");
	else if (n > 0)
		printf("0보다 크다");
	else
		printf("0과 같다");
#endif






#if 0
	int i, j, k = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4 - i; j++)
			printf(" ");
		for (j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
#endif





#if 0
	int i, j, k = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4 - i; j++)
			printf(" ");
		for (j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
#endif





#if 0
	int i, j, k = 1;
	for (i = 5; i > 0; i--)
	{
		for (j = 0; j < i - 1; j++) 
			printf(" ");
		for (j = 0; j < k; j++) 
			printf("*");
		k += 2;
		printf("\n");
	}
#endif





#if 0
	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j >=  i; j--) {
			printf("*");
		}
		printf("\n");
	}
#endif

	return 0;
}