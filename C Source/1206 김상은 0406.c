#include <stdio.h>
#include <stdlib.h>

int main()
{
#if 1

    for(int i = 5; i>= 0; i--)
    {
        printf("\n");
        for(int j = 0 ; j < 5 - i; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < i * 2 - 1;k++)
        {
            printf("*");
        }
    }
    for(int i = 4; i>=1; i--)
        {
        for(int j = 1; j <= 3; j++)
        {
            printf(" ");
        }
        for(k = 3; k <= 9; k++)
        {
            printf("*");
        }
        printf("\n");
    }

#endif



#if 0

    int j = 0, i = 0, k = 0;
    for(i = 5; i>= 0; i--)
    {
        for(j = 0 ; j < 5 - i; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < i * 2 - 1;k++)
        {
            printf("*");
        }
        printf("\n");

    }

#endif



#if 0

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

#endif





#if 0

    for(int i = 1; i<= 5; i++){
        for(int j = 1; j <= 5; j++){
            printf("*");
        }
        printf("\n");
    }


#endif



#if 0

    int a, fa = 1;
    scanf("%d", &a);

    if(a < 10){
        for(int i = 1; i <= a; i++){
            fa *= i;
        }
    printf("%d\n", fa);
    }
    else{
            printf("10미만의 수를 입력하시오.\n");
    }

#endif


    return 0;
}


/*
    for(int i = 5; i>= 0; i--)
    {
        for(int j = 0 ; j < 5 - i; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < i * 2 - 1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i<= 5; i++)
    {
        for(int j = 5 ; j > 0 + i; j--)
        {
            printf(" ");
        }
        for(int k = i * 2 - 1; k > 0;k--)
        {
            printf("*");
        }
        printf("\n");
    }*/
