#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N ;
    printf("entrez N : ");
    scanf("%d",&N);
    int T , R ,C ;

    do{
        T = N % 10 ;
        N = N / 10 ;
        C++;
    }while(N != 0);
    printf("%d",C);
    return 0;
}
