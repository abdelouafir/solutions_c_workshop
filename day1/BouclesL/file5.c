#include <stdio.h>
#include <stdlib.h>
int main()
{
    int NB,NE,T;
    printf("entrez un nomber da base : ");
    scanf("%d",&NB);
    printf("entrez un nomber da exposant : ");
    scanf("%d",&NE);
    T = 1;

    for(int i = 1 ; i <= NE; i++){
        T = T * NB;
    }
    printf("%d",T);
    return 0;
}
