#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N ,S,i;
    printf("veuillez saisire le number n : ");
    scanf("%d",&N);
    S=0;
    for(i = 2 ;i = N/2 ;i++){
         if(N%i == 0){
            S = 1 ;
            break;
         }
    }
    if(S == 1)
        printf("le nember %d et premire ");
    else
        printf("no premire");

    return 0;
}
