#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N ,S,i;
    printf("veuillez saisire le number n : ");
    scanf("%d",&N);
    S = 0;
    for(i = 1 ; i<= N;i++){
        S = S +i;
    }
    printf("la samme de %d est : %d",N,S);
    return 0;
}
