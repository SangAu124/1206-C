#define _CRT_SECURE_WARNINGS
#include <stdio.h>

int main() {

#if 1

	int kg[6], i, odd = 0, even = 0;
	for (i = 0; i < 4; i++) {
		scanf_s("%d", &kg[i]);
	}
	if (i % 2 == 0) {
		odd += kg[i];
	}
	else if (i % 2 != 0){
		even += kg[i];
	}
	printf("odd : %d\n", odd);
	printf("even : %d\n", even);


#endif // 1





#if 0

	double kg[6], b = 0, c = 0;
	for (int i = 0; i <= 5; i++) {
		scanf_s("%lf", &kg[i]);
		b = kg[i] + b;
		c = b / 6;
	}
	printf("%.1lf", c);
	//23.2 39.6 66.4 50.0 45.6 48.0
	//45.5
	

#endif // 1


	return 0;
}