#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {//효율적인 소수 구하기
	for (int i = 2; i * i <= n; i++) {
	//for (int i = 2;i < n; i++) {
		if (n % i == 0)// ! 이거 !
			return 0;//// ! 나옴 !    -> 소수가 아니다.

	}
	return 1;// 소수이다.
}

int main() {

	while (1) {
		int n;
		printf("숫자 : ");
		scanf("%d", &n);

		if (n < 2) return 0;// return 0; //
		if (n >= 1000) {
			printf("\n");
			continue;
		}

	return 0;
}