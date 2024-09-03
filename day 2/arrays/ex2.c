#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , taille;
    printf("veillez entrer le nombre d'éléments d'un tableau : ");
    scanf("%d",&taille);

    int T[taille];
    for(i = 0 ;i<taille;i++){
        printf("entrer le %d ellemment : ",i+1);
        scanf("%d",&T[i]);
    }
    for(i = 0 ; i<taille;i++){
        printf("%d ",T[i]);
    }
    return 0;
}
