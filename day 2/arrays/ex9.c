#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , taille,j,help;
    printf("veillez entrer le nombre element de tableau : ");
    scanf("%d",&taille);
    int T[taille];
    for(i = 0 ;i<taille;i++){
        printf("entrer le %d ellemment : ",i+1);
        scanf("%d",&T[i]);
    }
    for(i = 0 ; i<taille/2;i++){
        help=T[i];
        T[i]=T[taille-1-i];
        T[taille-1-i]=help;
    }

    printf("apres l'inverse:\n");
    for(i = 0 ;i<taille;i++){
        printf("%d  ",T[i]);
    }

    return 0;
}
