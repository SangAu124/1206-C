#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>			/* printf, fgets */
#include <stdlib.h>			/* atoi */
//#include <string.h>
int main() {

#if 0

	int i;
	char arr[50];//1차원 배열
	printf("Enter a number : ");
	scanf_s("%d", &i);
	//itoa = 진수 변환;
	_itoa(i, arr, 10);
	printf("decimal : %s\n", arr);
	_itoa(i, arr, 16);
	printf("hexadecimal : %s\n", arr);
	_itoa(i, arr, 2);
	printf("binary : %s\n", arr);

#endif // 1



#if 0

	int i;
	char buffer[256];//1차원 배열
	printf("Enter a number : ");
	//fgets(buffer, 256, stdin);
	gets(buffer, 256);// = scanf_s("%d", buffer);
		//gets = 띄어쓰기도 다 받는다. 
		//scanf_s = 띄어쓰기 하면 안 받는다.
	i = /*_*/atoi(buffer);//atoi = 글자를 정수로 바꾼다.
	printf("입력된 정수 값 : %d, 2배의 값 : %d.\n", i, i * 2);

#endif // 1

	return 0;
}