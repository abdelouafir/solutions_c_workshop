#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N ,F,i;
    printf("veuillez saisire le number n : ");
    scanf("%d",&N);
    F= 1;
    for(i = 1 ; i<= N;i++){
        F = F *i;
    }
    printf("la facturial de %d est : %d",N,F);
    return 0;
}
