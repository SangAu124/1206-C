#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 1

	//영어 문장를 입력받아 그 길이를 알려주는 프로그램;
	char word[50];
	int i = 0;
	int cnt = 0;
	scanf("%s", word);
	while (word[i] != '\0') {
		if (word[i] >= 97 && word[i] <= 122) {
			cnt++;
		}
		i++;
	}
	printf("%d", cnt);
	// Hello : 4
	// I Love you : 6


#endif // 1





#if 0

	int ar[5], max= 0, maxi = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &ar[i]);
	}
	//입력된 5개의 데이터중 가장큰 값(max)과 그 위치(maxi)를 출력하시오.
	for (int i = 0; i < 5; i++) {
		if (ar[i] > max) {
			max = ar[i];
			maxi = i;
		}
	}
	printf("입력받은 수 중 가장 큰 수는 : %d\n", max);
	printf("가장 큰수의 위치는 : %d", maxi);

#endif // 1





#if 0

	//입력된 문자열을 뒤집어 출력하는 프로그램을 작성하시오.
	char str[20];
	int i = 0;
	scanf("%[^\n]", str);
	while (str[i] != '\0')
	{
		i++;
	}
	for (int k = i; k >= 0; k--) {
		printf("%c", str[k]);
	}
	/*for(int k = strlen(str)-1; )*/
	printf("%d 개 글자입니다.", i);
	

#endif // 1





#if 0

	char str[20] = "Hello World";
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}


#endif // 0





#if 0

	char str[20] = "HelloWorld";
	printf("%s\n", str);
	printf("%c\n", str[0]);
	printf("%c\n", str[1]);
	str[3] = '\0';
	printf("%s\n", str);


#endif // 1





#if 0
	//Hello World 를 입력받아 출력하시오.

	char str[20];
	scanf("%[^\n]", str);
	printf("%s", str);

#endif // 1


	return 0;
}