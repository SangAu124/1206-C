#include <stdio.h>
#define NUM 20

int main() {

#if 0

	int scores[10] = {
		95, 64, 78, 94, 65, 71, 72, 59, 45, 78
	};
	int rank[102] = { 0, };
	int i, j;
	for (i = 0; i < 10; i++) {
		rank[scores[i]]++;
	}

#endif // 1



#if 0

	//등수 구하기
	int scores[] = {
		95, 64, 78, 94, 65, 71, 72, 59, 45, 78
	};
	int rank[10] = { 0, };
	int i, j;
	for (i = 0; i < 10; i++) {
		rank[i] = 1;
		for (j = 0; j < 10; j++) {
			if (scores[i] < scores[j])
				rank[i]++;
		}
	}
	printf("     학생 등수\n\n");
	for (i = 0; i < 10; i++) {
		printf("학번 :%3d  등수 :%3d\n", i + 1, rank[i]);
	}

#endif // 1



#if 1

	int a[20] = { 95, 64, 78, 94, 65, 88, 77, 69, 45,
		78, 46, 1, 0, 100, 98, 69, 67, 88, 87, 92 };
	int i, range, histo[11];
	for (i = 0; i <= 10; i++) {
		histo[i] = 0;
	}
	for (i = 0; i < NUM; i++) {
		histo[a[i] / 10]++;
	}
	for (i = 0; i <= 10; i++) {
		printf("%3d : %3d\n", i * 10, histo[i]);
	}

#endif // 1


	return 0;
}