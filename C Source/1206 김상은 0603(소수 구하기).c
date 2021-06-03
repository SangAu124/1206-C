#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�Ҽ�(prime) : 1�� �ڱ��ڽŸ� ���

int isPrime(int n) {//�Ҽ� ���� �˷��ִ� �Լ�
	for (int i = 2; i * i <= n; i++)
		if (!(n % i))//if((n%i)==0)
			return 0;//�Ҽ��� �ƴϴ�.
	return 1;//�Ҽ����� ����
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
			prime = 1;//1�̸� �Ҽ����� ǥ��
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