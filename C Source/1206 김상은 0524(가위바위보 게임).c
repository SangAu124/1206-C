#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main() {

	int cnt;
	int me, computer;
	int  win = 0, draw = 0, lose = 0;
	printf("���������� ������ �� �� �����Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &cnt);
	
	for (int i = 0; i < cnt; i++) {
		printf("( 1 : ����  2 : ����  3 : �� ) : ");
		scanf_s("%d", &me);

		srand((unsigned int)time(NULL));
		computer = rand() % 3 + 1;
		printf("��ǻ�� : %d\n", computer);

		if(me == computer) {
			printf("�����ϴ�!\n");
			draw++;
		}
		else if(me - computer == 1 || me - computer == -2) {
			printf("�̰���ϴ�!\n");
			win++;
		}
		else{
			printf("�����ϴ�!\n");
			lose++;
		}
		printf("�� : %d �� : %d �� : %d\n\n", win, draw, lose);
	}

	return 0;
}