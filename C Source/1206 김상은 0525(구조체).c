#include <stdio.h>

struct  Point {//구조체 점
	int x, y;
};

struct Student { //학생이라고 하는 자료형을 만들어보기
	char name[20];
	char stu_num[10];
	int age;
};

int main() {

#if 1

	struct Student class12[20];//20명의 학생 정보 저장 가능

#endif // 1



#if 0

	struct Point p1;
	p1.x = 5;
	p1.y = 3;// == struct Point p1 = {5, 3};
	printf("x = %d, y = %d\n", p1.x, p1.y);

	int x = 5, y = 3;
	printf("x = %d, y = %d\n", x, y);

#endif

	return 0;
}