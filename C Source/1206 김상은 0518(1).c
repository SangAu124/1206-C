#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>			/* printf, fgets */
#include <stdlib.h>			/* atoi */
//#include <string.h>
int main() {

#if 0

	int i;
	char arr[50];//1���� �迭
	printf("Enter a number : ");
	scanf_s("%d", &i);
	//itoa = ���� ��ȯ;
	_itoa(i, arr, 10);
	printf("decimal : %s\n", arr);
	_itoa(i, arr, 16);
	printf("hexadecimal : %s\n", arr);
	_itoa(i, arr, 2);
	printf("binary : %s\n", arr);

#endif // 1



#if 0

	int i;
	char buffer[256];//1���� �迭
	printf("Enter a number : ");
	//fgets(buffer, 256, stdin);
	gets(buffer, 256);// = scanf_s("%d", buffer);
		//gets = ���⵵ �� �޴´�. 
		//scanf_s = ���� �ϸ� �� �޴´�.
	i = /*_*/atoi(buffer);//atoi = ���ڸ� ������ �ٲ۴�.
	printf("�Էµ� ���� �� : %d, 2���� �� : %d.\n", i, i * 2);

#endif // 1

	return 0;
}