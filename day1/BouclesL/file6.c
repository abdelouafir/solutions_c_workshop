#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N ,S,i;
    printf("veuillez saisire le number n : ");
    scanf("%d",&N);
    for(i = 1 ; i < N;i++){
        if(i%2 == 0)
            printf("%d ",i);
    }
    return 0;
}
