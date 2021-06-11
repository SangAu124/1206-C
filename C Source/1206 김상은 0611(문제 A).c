#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 1

	int x1, y1, n1;
	int x2, y2, n2;
	int x3, y3, n3;
	
	printf("1번 운동장의 가로세로를 입력하세요 : ");
	scanf("%d %d", &x1, &y1);

	printf("2번 운동장의 가로세로를 입력하세요 : ");
	scanf("%d %d", &x2, &y2);

	printf("3번 운동장의 가로세로를 입력하세요 : ");
	scanf("%d %d", &x3, &y3);

	n1 = x1 * y1;
	n2 = x2 * y2;
	n3 = x3 * y3;

	printf("\n");

	if (n1 > n2 && n1 > n3)
		printf("%d", n1);
	if (n2 > n1 && n2 > n3)
		printf("%d", n2);
	if (n3 > n1 && n3 > n2)
		printf("%d", n3);


#endif // 1


	return 0;
}