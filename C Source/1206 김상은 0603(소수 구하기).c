#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//소수(prime) : 1과 자기자신만 약수

int isPrime(int n) {//소수 여부 알려주는 함수
	for (int i = 2; i * i <= n; i++)
		if (!(n % i))//if((n%i)==0)
			return 0;//소수가 아니다.
	return 1;//소수임을 리턴
}

int main() {

#if 1

	int n;
	while (1) {
		scanf("%d", &n);
		if (n < 2) return 0;
		if (n > 1000) continue;
		int i, prime = 1;
		for (i = 2; i <= n; i++) {
			if (isPrime(i) == 1)
				printf("  %d", i);
		}
		printf("\n");
	}

#endif // 1




#if 0

	int n;
	while (1) {
		scanf("%d", &n);
		if (n < 2) return 0;
		if (n > 1000) continue;
		int i, j, prime = 1;
		for (i = 2; i <= n; i++) {
			prime = 1;//1이면 소수임을 표시
			for (j = 2; j * j <= i; j++) {
				if (i % j == 0)
					prime = 0;
			}
			if (prime == 1)
				printf("%3d", i);
		}
		printf("\n");
	}

#endif
	return 0;
}