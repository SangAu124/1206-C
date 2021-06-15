//메모리 복사 memcpy
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>      //memcpy 함수가 선언된 헤더파일

typedef struct _p {
	char name[20];
	int x, y;
}Point;

int main() {

	Point p1, p2;
	strcpy(p1.name, "구조체 복사");
	p1.x = 10;
	p1.y = 20;

	//p2에 p1의 값을 복사하는 코드를 작성하시오.
		strcpy(p2.name, p1.name);
		p2.x = p1.x;
		p2.y = p1.y;
	//memcpy(&p2, &p1, sizeof(Point));

	printf("%s\n", p2.name);
	printf("%d %d\n", p2.x, p2.y);

	return 0;
}