#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i ,N;
    printf("enter nember N : ");
    scanf("%d",&N);
    for(i = 0 ; i<= 10 ;i++){
        printf("%d X %d = %d \n",i,N,i*N);
    }
    return 0;
}
