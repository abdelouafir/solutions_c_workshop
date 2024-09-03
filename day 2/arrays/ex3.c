#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , taille,S;
    S= 0;
    printf("veillez entrer le nombre element de tableau : ");
    scanf("%d",&taille);

    int T[taille];
    for(i = 0 ;i<taille;i++){
        printf("entrer le %d ellemment : ",i+1);
        scanf("%d",&T[i]);
        S=S + T[i];
    }
    printf("la somme : %d",S);


    return 0;
}
