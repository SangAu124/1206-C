#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {//ȿ������ �Ҽ� ���ϱ�
	for (int i = 2; i * i <= n; i++) {
	//for (int i = 2;i < n; i++) {
		if (n % i == 0)// ! �̰� !
			return 0;//// ! ���� !    -> �Ҽ��� �ƴϴ�.

	}
	return 1;// �Ҽ��̴�.
}

int main() {

	while (1) {
		int n;
		printf("���� : ");
		scanf("%d", &n);

		if (n < 2) return 0;// return 0; //
		if (n >= 1000) {
			printf("\n");
			continue;
		}

	return 0;
}