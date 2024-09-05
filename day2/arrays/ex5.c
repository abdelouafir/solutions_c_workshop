#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , taille,min;
    printf("veillez entrer le nombre element de tableau : ");
    scanf("%d",&taille);
    int T[taille];
    for(i = 0 ;i<taille;i++){
        printf("entrer le %d ellemment : ",i+1);
        scanf("%d",&T[i]);
    }
    min = T[0];
    for(i = 0 ; i<taille;i++){
        if(T[i] < min)
            min = T[i];
    }
    printf("le maximent dane cette tableux et %d ",min);

    return 0;
}
