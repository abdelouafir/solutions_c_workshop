#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N ,R ,T;
    printf("entrez un nember enter : ");
    scanf("%d",&N);
    do{
        R = N % 10 ;
        N = N /10 ;
        printf("%d",R);
    }while(R != 0);
    return 0;
}
