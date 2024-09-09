#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T [100];
    int i ,S , M,C=0;
    int taille ;
    printf("entrez taille de tableux : ");
    scanf("%d",&taille);
    for(i = 0 ; i<taille; i++ ){
        printf("entrez element %d : ",i+1);
        scanf("%d",&T[i]);
    }
    for ( i = 0 ; i< taille;i++){
        S = S + T[i];
    }
    M  = S / taille;
    printf("%d",M);

    return 0;
}
