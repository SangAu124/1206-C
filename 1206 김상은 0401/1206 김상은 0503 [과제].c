#include <stdio.h> 

int main() {
	
	char str1[3][3] = { "hi", "im", "se" };
	char* pStr[3] = { str1[0], str1[1], str1[2] };

	printf("%s\n", str1[0]);
	printf("%s\n", str1[1]);
	printf("%s\n", str1[2]);

	printf("%s\n", *pStr);
	printf("%s\n", *(pStr + 1));
	printf("%s\n", *(pStr + 2));

	return 0;
}