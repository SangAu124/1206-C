#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//strcpy ���ڿ� ���� �Լ�

//typedef�� �����ΰ�?
//typedef struct Game myGame;

typedef struct Game{
	char name[20];//ĳ���� �̸�
	char weapon[10];//ĳ������ ���� �̸�
	int power;//ĳ���� �ɷ�ġ
}myGame;

int main() {

#if 1

	myGame user;// == struct Game user;

	struct Game user;
	//ĳ���� ������ �̸��� �����, �ɷ�ġ�� �Է¹޾� ���ÿ�.
	/*scanf("%s", user.name);
	scanf("%s", user.weapon);
	scanf("%d", &user.power);

	printf("%s\n", user.name);
	printf("%s\n", user.weapon);
	printf("%d\n", user.power);*/

	printf("ĳ���͸� �Է� : ");
	scanf("%s", user.name);
	printf("����� �Է� : ");
	scanf("%s", user.weapon);
	printf("�ɷ�ġ �Է� : ");
	scanf("%d", &user.power);

	printf("========���� ĳ���� ���� ���========\n");

	printf("ĳ���͸� : %s\n", user.name);
	printf("����� : %s\n", user.weapon);
	printf("�ɷ�ġ : %d\n", user.power);

#endif // 1


	return 0;
}