#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct jumsu {
	char name[20];
	int kor, eng, math;
}Stu;

int main() {
	Stu s1, s2, sum;

	printf("이름을 입력하세요 : ");
	scanf("%s", s1.name);
	printf("국어 점수를 입력하세요 : ");
	scanf("%d", &s1.kor);
	printf("영어 점수를 입력하세요 : ");
	scanf("%d", &s1.eng);
	printf("수학 점수를 입력하세요 : ");
	scanf("%d", &s1.math);

	printf("이름을 입력하세요 : ");
	scanf("%s", s2.name);
	printf("국어 점수를 입력하세요 : ");
	scanf("%d", &s2.kor);
	printf("영어 점수를 입력하세요 : ");
	scanf("%d", &s2.eng);
	printf("수학 점수를 입력하세요 : ");
	scanf("%d", &s2.math);

	strcpy(sum.name, "총합");
	sum.kor = s1.kor + s2.kor;//국어점수 총합
	sum.eng = s1.eng + s2.eng;//영어점수 총합
	sum.math = s1.math + s2.math;//수학점수 총합

	printf("국어점수 총합 : %d\n영어점수 총합 : %d\n수학점수 총합 : %d\n", sum.kor, sum.eng, sum.math);

	//char str1[100];
	//strcpy(str1, "김철수");//string.h

	return 0;
}