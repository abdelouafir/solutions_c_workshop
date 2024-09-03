#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , taille,fm; // fm = facteur de multiplication
    printf("veillez entrer le nombre element de tableau : ");
    scanf("%d",&taille);
    int T[taille];
    for(i = 0 ;i<taille;i++){
        printf("entrer le %d ellemment : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("enter facteur de multiplication : ");
    scanf("%d",&fm);
    for(i = 0 ; i<taille;i++){
        printf("%d x %d = %d \n",fm,T[i],fm*T[i]);
    }


    return 0;
}
