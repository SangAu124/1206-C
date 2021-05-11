#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
double div(int a, int b) {
	if (b == 0) exit(0);
	return (double)a / b;
}*/


int main() {

#if 1
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("두 숫자의 합 : %d\n", add(a, b));
	printf("두 숫자의 차 : %d\n", sub(a, b));
	printf("두 숫자의 곱 : %d\n", mul(a, b));
	printf("두 숫자의 제 : %.1lf\n", div(a, b));

#endif




#if 0

	int a, b, c;
	for (a = 0; a <= 9; a++) {
		for (b = 0; b <= 9; b++) {
			for (c = 0; c <= 9; c++) {
				int abc = (100 * a) + (10 * b) + c;
				int cba = (100 * c) + (10 * b) + a;
		
				if (abc + cba == 1232) {
					printf("%d + %d = %d\n", abc, cba, abc + cba);

				}
			}
		}
	}

#endif




#if 0

	char day;
	printf("M : morning, A : afternoon, E : evening\n");
	printf("입력 : ");
	scanf_s("%c", &day);
	switch (day) {

	case 'M':
	case 'm':
		printf("Good Morning");
		break;

	case 'A':
	case 'a':
		printf("Good Afternoon\n");
		break;

	case 'E':
	case 'e':
		printf("Good Evening\n");
		break;

	default :
		printf("스케기모찌");
	}

#endif




#if 0

	int n;
	scanf_s("%d", &n);

	switch (n) {
	case 1:
		printf("작은 주먹\n");
		break;
	case 2:
		printf("큰 주먹\n");
		break;
	case 3:
		printf("작은 발차기\n");
		break;
	case 4:
		printf("큰 발차기\n");
		break;
	default:
		printf("승룡권\n");
		break;
	}

#endif



	
#if 0

	int a, z;
	for (a = 0; a <= 9; a++) {
		// a 0 1 2 3 4..
		for (z = 0; z <= 9; z++) {
			// a 0 1 2 3 4..
			// z 0 1 2 3 4
			if (a != z) {
				int az = a * 10 + z;
				int za = z * 10 + a;

				if(az + za == 99)
					printf("%2d + %2d = 99\n", az, za);

			}
		}
	}

#endif

	return 0;
}