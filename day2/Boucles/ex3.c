#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ,i,C = 0;
    printf("entrez un nember enter : ");
    scanf("%d",&N);
    for(i = 2 ; i< N ; i++){
        if(N % i == 0)
           C++;
    }
    if(C != 0)
        printf("%d le nomber no premer ",N);
    else
        printf("%d est un  nember premer ",N);
    return 0;
}
