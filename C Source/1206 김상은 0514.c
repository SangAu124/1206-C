#include <stdio.h>

int main() {

#if 1

        int arr[100][100];
        int n, m, num = 1;
        int cnt = 0;
        int max = 0;
        scanf_s("%d %d", &n, &m);
        if (n > m)max = n;
        else max = m;
        if (n == 0 || m == 0){
            if (n == 0){
                for (int i = 0; i < m; i++){
                    cnt++;
                    printf("%3d\n", cnt);
                }
            }
            else if (m == 0){
                for (int i = 0; i < n; i++)
                {
                    cnt++;
                    printf("%3d", cnt);
    }
}
   }
        else{
            for (int i = 0; i <= (n * m); i++){
                for (int j = 0; j <= max; j++){
                    int k = i - j;
                    if (k >= 0 && k < n)
                        arr[j][k] = num++;
                    if (k == j && i != j + cnt) arr[j][k] = num;
                    cnt++;
                }
                cnt = 0;
            }
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    if (i == n - 1 && j == m - 1)
                        printf("%3d ", arr[j][i] - 1);
                    else
                        printf("%3d ", arr[j][i]);
                }
                printf("\n");
            }
        }

#endif // 1



#if 0

	// 중앙에 공백이 있는 직각 삼각형
	int n;
	printf("수 입력 : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == i) {
				printf("* ");
			}
			else if (j != 0 || j != i) {
				printf("  ");
			}
		}
		printf("\n");
	}

#endif // 1


	return 0;
}