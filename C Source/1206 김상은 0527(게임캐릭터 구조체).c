#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//strcpy 문자열 복사 함수

//typedef란 무엇인가?
//typedef struct Game myGame;

typedef struct Game{
	char name[20];//캐릭터 이름
	char weapon[10];//캐릭터의 무기 이름
	int power;//캐릭터 능력치
}myGame;

int main() {

#if 1

	myGame user;// == struct Game user;

	struct Game user;
	//캐릭터 유저의 이름돠 무기명, 능력치를 입력받아 보시오.
	/*scanf("%s", user.name);
	scanf("%s", user.weapon);
	scanf("%d", &user.power);

	printf("%s\n", user.name);
	printf("%s\n", user.weapon);
	printf("%d\n", user.power);*/

	printf("캐릭터명 입력 : ");
	scanf("%s", user.name);
	printf("무기명 입력 : ");
	scanf("%s", user.weapon);
	printf("능력치 입력 : ");
	scanf("%d", &user.power);

	printf("========나의 캐릭터 정보 출력========\n");

	printf("캐릭터명 : %s\n", user.name);
	printf("무기명 : %s\n", user.weapon);
	printf("능력치 : %d\n", user.power);

#endif // 1


	return 0;
}