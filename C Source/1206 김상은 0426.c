#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 0

	int a[5] = { 0, 1, 2, 3, 4 };
	printf("%d %d\n", a[0], a[1]);
	printf("%d %d\n", &a[0], &a[1]);
	printf("a 주소 = %d a[0]주소 = %d\n", &a, &a[0]);
	int* p = a;
	printf("a 주소 = %p\n", p);
	printf("a 주소 = %p\n", a);
	printf("a 주소 = %p\n", &a[0]);
	printf("a[1] 주소 = %p\n", &a[1]);
	printf("a[1] 주소 = %p\n", a + 1);// a 1000, a+1 1004;

#endif // 1




#if 0

	int a = 2005;
	int* pA = &a;
	printf("PA : %p\n", pA);
	printf("&a : %p\n", &a);
	(*pA)++;// a++와 같은 의미를 지닌다.
	printf("a   : %d \n", a);
	printf("*pA : %d \n", *pA);

#endif // 1




#if 0

	int num1 = 100, num2 = 100;
	int* pNum;
	pNum = &num1;
	(*pNum) = 50;
	pNum = &num2;
	(*pNum) = -30;
	printf("%d %d\n", num1, num2);
	
#endif // 1




#if 0

	int* p;// 포인터 선언하는법 * 
	int a = 100;
	printf("%d\n", a);
	p = &a;
	printf("%p %p\n", p, &a);
	// *p == p 가 가리키는 곳의 값
	printf("%d\n", *p);


#endif // 1




#if 0

	// 포인터는 주소를 저장하는 변수이다.
	// 배열의 이름은 주소이고 상수이다.

	int arr[3] = { 0, 1, 2 };
	int* p;// 포인터는 주소를 저장하라고 있다.
	p = arr;// 배열의 이름 arr은 주소다.
	printf("arr의 주소 : %p\n", arr);
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("%d %d %d\n", p[0], p[1], p[2]);
	printf("%d %d %d\n", *p, *(p + 1), *(p + 2));

#endif // 1


	return 0;
}