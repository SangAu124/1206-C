#include <stdio.h>

void BubbleSort(int* arr, int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {// 배열 개수의 -1번 돌기
		for (int j = 0; j < len - i - 1; j++) {//한번 돌았을때 마지막꺼 빼고 돌리기
			if (arr[j] > arr[j + 1]) {//앞 숫자가 뒤에 숫자 보다 클때 자리 바꾸는 if문
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {

#if 1

	int arr[5] = { 4, 6, 1, 3, 9 };
	BubbleSort(arr, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

#endif // 1


	return 0;
}