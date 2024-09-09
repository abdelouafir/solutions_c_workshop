#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T [100];
    int i ,NR ,C=0;
    int taille ;
    printf("entrez taille de tableux : ");
    scanf("%d",&taille);
    for(i = 0 ; i<taille; i++ ){
        printf("entrez element %d : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("entrez nomber recherch : ");
    scanf("%d",&NR);
    for(i = 0 ; i< 10 ; i++){
        if(T[i] == NR)
            C++;
    }
    if(C != 0)
        printf("%d presen ",NR);
    else
        printf(" %d no prisont",NR);
    return 0;
}
