#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct _m {
	int num;//���¹�ȣ
	int money;//�Աݵ� ��
}Money;

Money maxMoney(Money m[], int n) {
	Money king = m[0];
	for (int i = 1; i < n; i++) {
		if (king.money < m[i].money)//�ִ� ã�� �ڵ�
			king = m[i];
	}
	return king;
}

int main() {

	Money m[5], king;//�����
	int i;
	for (i = 0; i < 5; i++) {
		printf("���¹�ȣ�� �ݾ�\n");
		m[i].num = i;//���¹�ȣ�� �ڵ� �Է�
		scanf("%d", &m[i].money);
	}
	king = maxMoney(m, 5);//5���� ���������� �ѱ�
	printf("����� %4d�� %d��\n", king.num + 1, king.money);

	return 0;
}