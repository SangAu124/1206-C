#include <stdio.h>
#define SIDE 100
int n, d[110];

int arr[SIDE][SIDE];
//---------------------------------------------------
//void makeArr(int a, int b) {
//	int cnt = 0;
//	int row = 0, col = 0;
//	int inc = 1;
//
//	for (int i = 0; i < a; i++) {
//		col += inc;
//		arr[row][col] = cnt;
//		cnt += 3;
//	}
//}
//
//void printArr(int a, int b) {
//	for (int i = 0; i < a; i++) {
//		for (int j = 0; j < b; j++) {
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//---------------------------------------------------
int f(int n) {
	int sum = 0;
	for(int i = 0; i <= n; i++) {
		sum += i;
	}
	n = sum;
}

int t() {
	int max = 0;
	int i, v;
	for (i = 0; i < n; i++) {
		if (max < d[i]) {
			max = d[i];
			v = i;
		}
	}

	return v + 1;
}

int main() {

//#if 1
//
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	
//	makeArr(a, b);
//	printArr(a, b);
//
//#endif // 1



#if 0

	int a;
	printf("¼ö ÀÔ·Â : ");
	scanf_s("%d", &a);

	if (a == 1) {
		printf("*\n");
	}
	if (a == 2) {
		printf("*\n");
		printf("* *\n");
	}
	if (a == 3) {
		printf("*\n");
		printf("* *\n");
		printf("* * *\n");
	}
	if (a == 4) {
		printf("*\n");
		printf("* *\n");
		printf("*   *\n");
		printf("* * * *\n");
	}
	if (a == 5) {
		printf("*\n");
		printf("* *\n");
		printf("*   *\n");
		printf("*     *\n");
		printf("* * * * *\n");
	}
	if (a == 6) {
		printf("*\n");
		printf("* *\n");
		printf("*   *\n");
		printf("*     *\n");
		printf("*       *\n");
		printf("* * * * * *\n");
	}
	if (a == 7) {
		printf("*\n");
		printf("* *\n");
		printf("*   *\n");
		printf("*     *\n");
		printf("*       *\n");
		printf("*         *\n");
		printf("* * * * * * *\n");
	}
	if (a == 8) {
		printf("*\n");
		printf("* *\n");
		printf("*   *\n");
		printf("*     *\n");
		printf("*       *\n");
		printf("*         *\n");
		printf("*           *\n");
		printf("* * * * * * * *\n");
	}
	if (a == 9) {
		printf("*\n");
		printf("* *\n");
		printf("*   *\n");
		printf("*     *\n");
		printf("*       *\n");
		printf("*         *\n");
		printf("*           *\n");
		printf("*             *\n");
		printf("* * * * * * * * *\n");
	}

#endif // 1



#if 0

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &d[i]);
	}

	printf("%d", t());

#endif // 1



#if 0
	
	scanf_s("%d", &n);
	printf("%d\n", f(n));

#endif // 1


	return 0;
}