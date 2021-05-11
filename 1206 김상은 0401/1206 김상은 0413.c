#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;//전역변수는 기본적으로 0
void add(int n);

/*void f(int n) {
	if (n < 0)
		return 0;
	printf("함수안에 함수호출 : %d\n", n);
	f(n - 1);
}
int gimoJJi = 1;
void fac(int n) {
	if (n < 1)
		return 0;
	gimoJJi *= n;
	fac(n - 1);
}*/


int main() {

#if 1//배열 예제

	int arr[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

#endif // 1





#if 0

	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4 };
	int arr3[3] = { 1 };
	int arr4[100000] = { 0, };
	int n;
	printf("%d byte\n", sizeof(n));
	printf("%d byte\n", sizeof(arr1));
	printf("%d byte\n", sizeof(arr2));
	printf("%d byte\n", sizeof(arr3));
	printf("%d byte\n", sizeof(arr4));

#endif // 1





#if 0

	int sum1 = 0, sum2 = 0;

	int a, b, c, d, e;
	a = 1, b = 2, c = 3, d = 4, e = 5;
	sum1 = a + b + c + d + e;

	int array[5] = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++)
		sum2 += array[i];
	printf("%d %d", sum1, sum2);

#endif 




#if 0

	fac(6);
	printf("%d ", gimoJJi);

#endif // 1




#if 0
	
	f(4);

#endif




#if 0
	//int n;//쓰래기 값
	printf("n : %d\n", n);
	add(3);
	printf("n : %d\n", n);
	n++;
	printf("n : %d\n", n);
#endif


	return 0;
}

void add(int x) {
	n += x;
}