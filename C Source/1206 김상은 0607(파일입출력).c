#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 1

	//실행하면 모니터 화면에서는 아무것도 나오지 않음
	//하드디스크에 같은 경로에  myData.txt가 생성됨.
	//추가문제
	//키보드로 이름과 나이를 3명 입력받아
	//myData.txt에 기록하는 프로그램을 만드시오.
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
	fprintf(fp, "%s %d\n", "홍길동", 34);
	fclose(fp);

#endif // 1



#if 0

	FILE* fp;
	fp = fopen("myfile.txt", "r");
	char name[80] = "";
	int myAge;
	while (!feof(fp)) { //파일의 끝까지 체크
		fscanf(fp, "%s %d", name, &myAge);
		printf("%s %d\n", name, myAge);
	}
	fclose(fp);

#endif

	return 0;
}