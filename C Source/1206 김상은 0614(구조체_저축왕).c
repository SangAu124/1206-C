#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct _m {
	int num;//계좌번호
	int money;//입금된 돈
}Money;

Money maxMoney(Money m[], int n) {
	Money king = m[0];
	for (int i = 1; i < n; i++) {
		if (king.money < m[i].money)//최댓값 찾는 코드
			king = m[i];
	}
	return king;
}

int main() {

	Money m[5], king;//저축왕
	int i;
	for (i = 0; i < 5; i++) {
		printf("계좌번호와 금액\n");
		m[i].num = i;//계좌번호는 자동 입력
		scanf("%d", &m[i].money);
	}
	king = maxMoney(m, 5);//5명의 계좌정보를 넘김
	printf("저축왕 %4d번 %d원\n", king.num + 1, king.money);

	return 0;
}