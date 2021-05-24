#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main() {

	int cnt;
	int me, computer;
	int  win = 0, draw = 0, lose = 0;
	printf("가위바위보 게임을 몇 번 실행하시겠습니까? : ");
	scanf_s("%d", &cnt);
	
	for (int i = 0; i < cnt; i++) {
		printf("( 1 : 가위  2 : 바위  3 : 보 ) : ");
		scanf_s("%d", &me);

		srand((unsigned int)time(NULL));
		computer = rand() % 3 + 1;
		printf("컴퓨터 : %d\n", computer);

		if(me == computer) {
			printf("비겼습니다!\n");
			draw++;
		}
		else if(me - computer == 1 || me - computer == -2) {
			printf("이겼습니다!\n");
			win++;
		}
		else{
			printf("졌습니다!\n");
			lose++;
		}
		printf("승 : %d 무 : %d 패 : %d\n\n", win, draw, lose);
	}

	return 0;
}