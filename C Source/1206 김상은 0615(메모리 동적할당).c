//���� �޸� �Ҵ� : malloc
//���� �޸��� �Ҵ� : �迭
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>//malloc : memory allocation

int main() {

	int arr[4] = { 1, 2, 3, 4 };
	int* pArr;
	int n = 13;
	pArr = (int*)malloc(sizeof(int) * n);//calloc, realloc

	if (pArr == NULL) {
		printf("�޸� �Ҵ� ����");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		pArr[i] = i * i;
		printf("pArr[i] = %d\n", pArr[i]);
	}
	free(pArr);

	return 0;
}