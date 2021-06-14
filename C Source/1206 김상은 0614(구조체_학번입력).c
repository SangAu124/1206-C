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

	printf("이름 입력 : ");
	scanf("%s", me.name);
	printf("나이 입력 : ");
	scanf("%d", &me.age);
	printf("학번 입력 : ");
	scanf("%d", &me.snum);

	//나이와 이름을 출력하는 코드를 만드시오
	printf("\n");
	printf("제 이름은 %s입니다\n제 나이는 %d세 입니다.\n제 학번은 %d 입니다.\n", me.name, me.age, me.snum);


	return 0;
}