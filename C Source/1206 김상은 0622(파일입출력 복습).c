#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	FILE* ifp = fopen("run.txt", "r");
	FILE* ofp = fopen("result.txt", "w");
	char name[10];
	double avg, n1, n2, n3;
	fscanf(ifp, "%s %lf %lf %lf", name, &n1, &n2, &n3);
	avg = (n1 + n2 + n3) / 3.0;
	printf("%s %.1f\n", name, avg);
	fprintf(ofp, "%s %.1f", name, avg);

	return 0;
}