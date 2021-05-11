#include <stdio.h>

//int value[] == int* value
void printArr(int value[], int n) {
	for (int i = 0; i < n; i++) {
		printf("  %d", value[i]);
	}
}
void slectionSort(int* value, int n) {
	int i, j, min = 0, temp = 0;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (value[min] > value[j]) {
				min = j;
			}
			temp = value[i];
			value[i] = value[min];
			value[min] = temp;
		}
	}
}

void swap1(int, int);//call by value ��
void swap2(int*, int*);//call by reference ����
//�Լ� ȣ�� �Ŀ��� ���� ��ġ�� ����Ǿ��°�?

int main() {

#if 1

	int a = 5, b = 8;
	printf("a = %d, b = %d\n", a, b);
	swap1(a, b);//���� ���� ȣ��
	printf("a = %d, b = %d\n", a, b);
	swap2(&a, &b);//������ ���� ȣ��
	printf("a = %d, b = %d\n", a, b);

#endif // 1



#if 0
	//��������

	int value[] = { 4, 7, 9, 11, 3, 7, 6 };
	int n = sizeof(value) / sizeof(int);
	printArr(value, n);
	printf("\n");
	slectionSort(value, n);
	printArr(value, n);

#endif // 1



#if 0
	//������׷�
	
	int score[] = { 44, 88, 30, 75, 35, 50, 65, 78,
				49, 59, 60, 91, 58, 56, 87, 96,
				69, 78, 77, 75 
			  };
	int histo[11] = { 0, };
	int n = sizeof(score) / sizeof(int); // �迭�� ũ�� �˾Ƴ��¹�
	for (int i = 0; i < n; i++) {
		histo[score[i] / 10]++;
	}
	for (int i = 0; i <= 10; i++) {
		printf("%3d : %3d\n", i * 10, histo[i]);
	}


#endif // 1


	return 0;
}