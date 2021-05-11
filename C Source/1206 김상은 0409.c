#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

#if 1



#endif 





#if 0

	int n1, n2, n3, hap1, hap2;
	char giho1, giho2;
	scanf("%d %c %d %c %d", &n1, &giho1, &n2, &giho2, &n3);
	
	if (giho2 == '+')
		hap1 = n2 + n3;
	else if (giho2 == '-')
		hap1 = n2 - n3;
	else if (giho2 == '*')
		hap1 = n2 * n3;
	else if (giho2 == '/')
		hap1 = n2 / n3;

	if (giho1 == '+')
		hap2 = hap1 + n1;
	else if (giho1 == '-')
		hap2 = hap1 - n1;

	printf("%d", hap2);

#endif 


	return 0;
}