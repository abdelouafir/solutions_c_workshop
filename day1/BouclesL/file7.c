#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N ;
    printf("entrez N : ");
    scanf("%d",&N);
    int T , R ;

    do{
        T = N % 10 ;
        N = N / 10 ;
        printf("%d",T);
    }while(N != 0);
    return 0;
}
