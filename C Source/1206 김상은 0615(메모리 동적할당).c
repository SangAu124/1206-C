//동적 메모리 할당 : malloc
//정적 메모지 할당 : 배열
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>//malloc : memory allocation

int main() {

	int arr[4] = { 1, 2, 3, 4 };
	int* pArr;
	int n = 13;
	pArr = (int*)malloc(sizeof(int) * n);//calloc, realloc

	if (pArr == NULL) {
		printf("메모리 할당 실패");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		pArr[i] = i * i;
		printf("pArr[i] = %d\n", pArr[i]);
	}
	free(pArr);

	return 0;
}