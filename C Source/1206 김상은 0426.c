#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 0

	int a[5] = { 0, 1, 2, 3, 4 };
	printf("%d %d\n", a[0], a[1]);
	printf("%d %d\n", &a[0], &a[1]);
	printf("a �ּ� = %d a[0]�ּ� = %d\n", &a, &a[0]);
	int* p = a;
	printf("a �ּ� = %p\n", p);
	printf("a �ּ� = %p\n", a);
	printf("a �ּ� = %p\n", &a[0]);
	printf("a[1] �ּ� = %p\n", &a[1]);
	printf("a[1] �ּ� = %p\n", a + 1);// a 1000, a+1 1004;

#endif // 1




#if 0

	int a = 2005;
	int* pA = &a;
	printf("PA : %p\n", pA);
	printf("&a : %p\n", &a);
	(*pA)++;// a++�� ���� �ǹ̸� ���Ѵ�.
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

	int* p;// ������ �����ϴ¹� * 
	int a = 100;
	printf("%d\n", a);
	p = &a;
	printf("%p %p\n", p, &a);
	// *p == p �� ����Ű�� ���� ��
	printf("%d\n", *p);


#endif // 1




#if 0

	// �����ʹ� �ּҸ� �����ϴ� �����̴�.
	// �迭�� �̸��� �ּ��̰� ����̴�.

	int arr[3] = { 0, 1, 2 };
	int* p;// �����ʹ� �ּҸ� �����϶�� �ִ�.
	p = arr;// �迭�� �̸� arr�� �ּҴ�.
	printf("arr�� �ּ� : %p\n", arr);
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("%d %d %d\n", p[0], p[1], p[2]);
	printf("%d %d %d\n", *p, *(p + 1), *(p + 2));

#endif // 1


	return 0;
}