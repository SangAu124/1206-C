#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	//��� �ҽ��ڵ� ����
	int i, j;
	int ball;
	int temp;
	int com[3];
	int strike;
	int cnt = 1;
	int player[3];
	srand((unsigned)time(NULL));
	for (i = 0; i < 3; i++) {
		temp = (rand() % 9) + 1;
		com[i] = temp;
		for (j = 0; j < i; j++)
			if (temp == com[j] && i != j)
				i--;
	}
	while (1) {
		printf("[%dȸ ���ھ߱�]\n", cnt);
		while (1) {
			printf("1���� 9������ ���ڸ� �Է��ϼ��� : ");
			scanf_s("%d %d %d", &player[0], &player[1], &player[2]);
			if (player[0] < 1 || player[0] > 9 || player[1] < 1 || player[1] > 9 || player[2] < 1 || player[2] > 9) {
				printf("���� ���� ���ڸ� �Է��Ͻø� �ȵ˴ϴ�.\n");
				continue;
			}
			else if (player[0] == player[1] || player[0] == player[2] || player[1] == player[2]) {
				printf("�ߺ��� ���ڸ� �Է��Ͻø� �ȵ˴ϴ�.\n");
				continue;
			}
			break;
		}
		ball = 0;
		strike = 0;
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
				if (com[i] == player[j])
					if (i == j)
						strike++;
					else
						ball++;
		printf("[���]��Ʈ����ũ : %d, �� : %d\n\n", strike, ball);
		if (strike == 3) {
			printf("***** �¸��߽��ϴ�. *****\n\n");
			break;
		}
		else if (cnt == 9) {
			printf("***** �й��߽��ϴ�.. ���� : %d %d %d *****\n\n", com[0], com[1], com[2]);
			break;
		}
		cnt++;
	}


	return 0;
}