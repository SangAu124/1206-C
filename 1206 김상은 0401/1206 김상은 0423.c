#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 1

	char a[30];
	int index;
	char c;
	printf("ÃÊ±â°ª ÀÔ·Â : ")
	for (int i = 0; i < 30; i++) {
		scanf_s("%c", &a[i]);
		printf("¼öÁ¤ Èñ¸Á ÀÎµ¦½º : ");
		scanf_s("%d", &index);
		printf("¼öÁ¤ °ª : ");
		scanf_s("%c", &c);
		a[index] = c;
		printf("%c", a[i]);
	}

#endif // 1





#if 0

	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("Åä³¢ :%d, ´ß : %d", a / 4, b / 2);

#endif // 1






#if 0

	int b;
	char a;
	scanf_s("%d", &b);
	while (1)
	{
		scanf_s("%c", &a);
		if (a == 10) {
			printf("Hello");
		}
		else {
			break;
		}
	}
	

#endif // 1





#if 0

	int a[3], i, sum = 0, b;
	for (i = 0; i < 3; i++) {
		scanf_s("%d", &a[i]);

		sum += a[i];
	}
	b = sum / 3;
	if (b >= 80) {
		printf("ÇÕ°Ý! %d", b);
	}
	else {
		printf("ºÒÇÕ°Ý! %d", 80 - b);
	}

#endif // 1





#if 0

	int a[50], MAX = -2147483647, i, MIN = 2147483647;
	for (i = 0; i < 50; i++) {
		scanf_s("%d", &a[i]);
		if (a[i] == 999) {
			break;
		}
		if (a[i] > MAX) {
			MAX = a[i];
		}
		if (a[i] < MIN) {
			MIN = a[i];
		}
	}
	printf("max : %d\n", MAX);
	printf("min : %d", MIN);



#endif // 1


	return 0;
}