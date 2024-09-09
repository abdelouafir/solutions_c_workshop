#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N , i,S=0;
    printf("enrez un nomber : ");
    scanf("%d",&N);
    for(i = 0 ; i<= N ;i++){
        S = S + i ;
    }
    printf("%d",S);
    return 0;
}
