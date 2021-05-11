#include <stdio.h>

int main() {

#if 1

	int a, b, c;
	int d, e, f;
	int g, h, i;

	//1번 점수 입력
	printf("%d번 점수 : ", 1);
	scanf_s("%d %d %d", &a, &b, &c);

	//2번 점수 입력
	printf("%d번 점수 : ", 2);
	scanf_s("%d %d %d", &d, &e, &f);

	//3번 점수 입력
	printf("%d번 점수 : ", 3);
	scanf_s("%d %d %d", &g, &h, &i);

	int hap1 = a + b + c;
	int hap2 = d + e + f;
	int hap3 = g + h + i;

	printf("┏=====================================┓\n");
	printf("∥       컴일     프C    수학    총점 ∥ \n");
	printf("∥ 1번%6d%8d%8d%8d  "                 "∥\n", a, b, c, hap1);
	printf("∥ 2번%6d%8d%8d%8d  "                 "∥\n", d, e, f, hap2);
	printf("∥ 3번%6d%8d%8d%8d  "                 "∥\n", g, h, i, hap3);
	printf("∥합계%6d%8d%8d%8d  "                 "∥\n", a + d + g, b + e + h, c + f + i, hap1 + hap2 + hap3);
	printf("┗=====================================┛\n");

#endif // 1



#if 0

	int a;
	int i = 0;
	int cnt[11] = { 0, };

	for(;;){
		scanf_s("%d", &a);
		if (a > 0 && a <= 10) {
			cnt[a]++;
		}
		else {
			break;
		}
	}
	for (i = 0; i <= 10; i++) {
		if (cnt[i] != 0) {
			printf("%2d : %2d개\n",  i, cnt[i]);
		}
	}

#endif // 1

	return 0;
}