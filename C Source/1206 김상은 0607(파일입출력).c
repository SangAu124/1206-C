#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 1

	//�����ϸ� ����� ȭ�鿡���� �ƹ��͵� ������ ����
	//�ϵ��ũ�� ���� ��ο�  myData.txt�� ������.
	//�߰�����
	//Ű����� �̸��� ���̸� 3�� �Է¹޾�
	//myData.txt�� ����ϴ� ���α׷��� ����ÿ�.
	FILE* fp = fopen("myData.txt", "w");
	char name[20];
	int age;
	for (int i = 0; i < 3; i++) {
		scanf("%s %d", name, &age);
		fprintf(fp, "%s %d\n", name, age);
	}
	fclose(fp);

#endif // 1



#if 0

	FILE* fp = fopen("myData.txt", "w");
	fprintf(fp, "%s %d\n", "ȫ�浿", 34);
	fclose(fp);

#endif // 1



#if 0

	FILE* fp;
	fp = fopen("myfile.txt", "r");
	char name[80] = "";
	int myAge;
	while (!feof(fp)) { //������ ������ üũ
		fscanf(fp, "%s %d", name, &myAge);
		printf("%s %d\n", name, myAge);
	}
	fclose(fp);

#endif

	return 0;
}