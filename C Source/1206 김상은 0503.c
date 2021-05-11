#include <stdio.h>

int main() {

#if 0

	char str[3][10] = { "kim", "hong", "chu" };
	char* pStr[3] = { str[0], str[1], str[2] };
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%c\n", str[0][0]);//k
	printf("%c\n", str[0][1]);//i
	printf("%c\n", str[0][2]);//m

	printf("%s\n", *pStr);
	printf("%s\n", *(pStr + 1));
	printf("%s\n", *(pStr + 2));

#endif // 



#if 1

	char str1[10] = "abcd";
	char* str2 = "ABCD";
	printf("%s %s\n", str1, str2);
	str1[1] = 'x';
	//str2[1] = 'x';//나 문제 있음.
	printf("%s %s\n", str1, str2);

#endif // 1



#if 0

	int arr[5] = { 1, 2, 3, 4, 5 };
	int* pArr = arr;
	printf("%d \n", *pArr);
	printf("%d \n", *(++pArr));
	printf("%d \n", *(++pArr));
	printf("%d \n", *(pArr + 1));
	printf("%d \n", *(pArr + 2));

#endif // 1



//포인터 배열
#if 0

	//포인터란? -> 주소를 저장하는것
	int a = 1000;
	int* ptr1 = &a;
	printf("%d\n", ptr1);//1000
	ptr1++;//1증가란 int형 4바이트 증가를 의미
	printf("%d\n", ptr1);//1004


#endif // 1


	return 0;
}