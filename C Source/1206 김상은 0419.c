#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 1

	//���� ���带 �Է¹޾� �� ���̸� �˷��ִ� ���α׷�;
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
	//�Էµ� 5���� �������� ����ū ��(max)�� �� ��ġ(maxi)�� ����Ͻÿ�.
	for (int i = 0; i < 5; i++) {
		if (ar[i] > max) {
			max = ar[i];
			maxi = i;
		}
	}
	printf("�Է¹��� �� �� ���� ū ���� : %d\n", max);
	printf("���� ū���� ��ġ�� : %d", maxi);

#endif // 1





#if 0

	//�Էµ� ���ڿ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
	printf("%d �� �����Դϴ�.", i);
	

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
	//Hello World �� �Է¹޾� ����Ͻÿ�.

	char str[20];
	scanf("%[^\n]", str);
	printf("%s", str);

#endif // 1


	return 0;
}