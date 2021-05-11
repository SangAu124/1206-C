#include <stdio.h>

int main()
{

#if 0

    int bro, me, n = 1;
    scanf("%d %d", &bro, &me);

    if(bro<me){
        for(int i = bro; i<=me; i++){
            n *= i;
        }
    }
    else if(me<bro) {
        for(int j = me; j<=bro; j++){
            n *= j;
        }
    }
    printf("%d", n);

#endif




#if 0

    int dan = 2;
    for(dan = 2; dan<=9; dan++){
            for(int i = 1; i<=9; i++){
                printf("%d x %d = %2d\n", dan, i, dan*i);
            }

            printf("===========\n");
    }

#endif



#if 0

    int dan;
    scanf("%d", &dan);
    printf("%d\n", dan);
    for(int i = 1; i<=9; i++){
        printf("%d * %d = %d\n", dan, i, dan*i);
    }

#endif



#if 0

    int a, sum = 0;
    for(;;){
        printf("0입력시 종료 : ");
        scanf("%d", &a);
        if(a == 0){
            break;
        }
        sum += a;
    }
    printf("총합 : %d", sum);

#endif



#if 0
    int a = 1;
    do{
        printf("%d * %d = %d\n", 3, a, 3*a);
        a++;
    }
    while(a<10);
#endif



#if 0
    int n = 1;
    while(n < 10){
        printf("3 * %d = %d\n", n, n*3);
        n++;
    }
#endif


    return 0;
}


//적다이
