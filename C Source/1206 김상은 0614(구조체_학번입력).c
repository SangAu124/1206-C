#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//typedef struct data Student;
typedef struct data {
	char name[20];
	int age;
	int snum;
}Student;

int main() {
	Student me;

	printf("�̸� �Է� : ");
	scanf("%s", me.name);
	printf("���� �Է� : ");
	scanf("%d", &me.age);
	printf("�й� �Է� : ");
	scanf("%d", &me.snum);

	//���̿� �̸��� ����ϴ� �ڵ带 ����ÿ�
	printf("\n");
	printf("�� �̸��� %s�Դϴ�\n�� ���̴� %d�� �Դϴ�.\n�� �й��� %d �Դϴ�.\n", me.name, me.age, me.snum);


	return 0;
}