#include <stdio.h>
#include <time.h>//time()
#include <stdlib.h>//srand(), rand()

int main() {

#if 1
	//주사위게임 만들기

	/*srand((unsigned int)time(NULL));
	int n1;
	n1 = rand() % 6 + 1;

	printf("%d\n", n1);*/
	char n;
	srand((unsigned int)time(NULL));
	while (1) {
		int d1, d2;
		int Go = 0;
		printf("주사위 게임을 하시겠습니가? ( Y / N ) : ");
		scanf_s("%c", &n);
		getchar();//참고코드 인용
		if (n == 'n') break;
		else if (n == 'y') {
			d1 = rand() % 6 + 1;
			d2 = rand() % 6 + 1;
			Go += d1 + d2;
			printf("주사위 : %d %d \n", d1, d2);
			if (d1 == d2) {
				printf("더블입니다.\n");
				d1 = rand() % 6 + 1;
				d2 = rand() % 6 + 1;
				Go += d1 + d2;
				printf("주사위 : %d %d \n", d1, d2);
			}
			printf("%d칸 전진하세요.\n\n", Go);
		}
		else break;
	}

#endif // 1


	return 0;
}