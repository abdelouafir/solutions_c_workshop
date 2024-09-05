#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , taille,j,echenger;
    printf("veillez entrer le nombre element de tableau : ");
    scanf("%d",&taille);
    int T[taille];
    int CT[taille]; //CT = copier tableu
    for(i = 0 ;i<taille;i++){
        printf("entrer le %d ellemment : ",i+1);
        scanf("%d",&T[i]);
    }
    for(i = 0 ; i<taille ;i++){
        CT[i] = T[i];
    }
    for(i = 0 ; i<taille ; i++){
        printf("le tableux original %d ",T[i]);
    }
    printf("\n");
    for(i = 0 ; i<taille ; i++){
        printf(" le tableux coper  : %d ",CT[i]);
    }

    return 0;
}
