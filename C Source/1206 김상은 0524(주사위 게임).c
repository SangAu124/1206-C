#include <stdio.h>
#include <time.h>//time()
#include <stdlib.h>//srand(), rand()

int main() {

#if 1
	//�ֻ������� �����

	/*srand((unsigned int)time(NULL));
	int n1;
	n1 = rand() % 6 + 1;

	printf("%d\n", n1);*/
	char n;
	srand((unsigned int)time(NULL));
	while (1) {
		int d1, d2;
		int Go = 0;
		printf("�ֻ��� ������ �Ͻðڽ��ϰ�? ( Y / N ) : ");
		scanf_s("%c", &n);
		getchar();//�����ڵ� �ο�
		if (n == 'n') break;
		else if (n == 'y') {
			d1 = rand() % 6 + 1;
			d2 = rand() % 6 + 1;
			Go += d1 + d2;
			printf("�ֻ��� : %d %d \n", d1, d2);
			if (d1 == d2) {
				printf("�����Դϴ�.\n");
				d1 = rand() % 6 + 1;
				d2 = rand() % 6 + 1;
				Go += d1 + d2;
				printf("�ֻ��� : %d %d \n", d1, d2);
			}
			printf("%dĭ �����ϼ���.\n\n", Go);
		}
		else break;
	}

#endif // 1


	return 0;
}