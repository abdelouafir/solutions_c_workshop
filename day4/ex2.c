#include <stdio.h>
#include <stdlib.h>


int main()
{
    int T [100] ;
    int taille ,i ;
    printf("entrez taille de tableux : ");
    scanf("%d",&taille);
    for( i = 0 ; i<taille ;i++){
        printf("entrez T %d : ",i+1);
        scanf("%d",&T[i]);
    }
    for( i = 0 ; i<taille;i++)
        printf("%d ",T[i]);
    printf("\n");
    int tmp ;
    for(i = 0 ; i<taille - 1 ; i++){

        }
    for( i = 0 ; i<taille;i++)
        printf("%d ",T[i]);
  return 0;
}
