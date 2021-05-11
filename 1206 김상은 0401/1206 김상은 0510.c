#include <stdio.h>
#define SIDE 100

void BubbleSort(int* arr, int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < 5 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int arr[SIDE][SIDE];//arr[100][100]

void makeArr(int n) {
	int cnt = 1;//1, 2, 3, 4, 5...
	int row = 0, col = -1;
	int inc = 1;
	while (n > 0) {
		for (int i = 0; i < n; i++) {
			col += inc;//0, 1, 2, 3, 4
			arr[row][col] = cnt++;
		}
		n--;
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			row += inc;
			arr[row][col] = cnt++;
		}
		inc *= -1;
	}
}

void printArr(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}
	
int main() {

#if 1

	int n = 0;
	printf("달팽이 배열의 길이 : ");
	scanf_s("%d", &n);
	makeArr(n);//달팽이 배열 만들기
	printArr(n);

#endif // 1



#if 0

	int arr[5] = { 4, 6, 1, 9, 5 };
	BubbleSort(arr, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

#endif // 1


	return 0;
}