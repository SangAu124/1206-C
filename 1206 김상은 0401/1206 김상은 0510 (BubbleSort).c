#include <stdio.h>

void BubbleSort(int* arr, int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {// �迭 ������ -1�� ����
		for (int j = 0; j < len - i - 1; j++) {//�ѹ� �������� �������� ���� ������
			if (arr[j] > arr[j + 1]) {//�� ���ڰ� �ڿ� ���� ���� Ŭ�� �ڸ� �ٲٴ� if��
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