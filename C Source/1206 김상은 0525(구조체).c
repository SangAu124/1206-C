#include <stdio.h>

struct  Point {//����ü ��
	int x, y;
};

struct Student { //�л��̶�� �ϴ� �ڷ����� ������
	char name[20];
	char stu_num[10];
	int age;
};

int main() {

#if 1

	struct Student class12[20];//20���� �л� ���� ���� ����

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