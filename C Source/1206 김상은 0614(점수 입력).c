#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct jumsu {
	char name[20];
	int kor, eng, math;
}Stu;

int main() {
	Stu s1, s2, sum;

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", s1.name);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &s1.kor);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &s1.eng);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &s1.math);

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", s2.name);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &s2.kor);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &s2.eng);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &s2.math);

	strcpy(sum.name, "����");
	sum.kor = s1.kor + s2.kor;//�������� ����
	sum.eng = s1.eng + s2.eng;//�������� ����
	sum.math = s1.math + s2.math;//�������� ����

	printf("�������� ���� : %d\n�������� ���� : %d\n�������� ���� : %d\n", sum.kor, sum.eng, sum.math);

	//char str1[100];
	//strcpy(str1, "��ö��");//string.h

	return 0;
}