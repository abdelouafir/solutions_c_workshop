#include <stdio.h>
#include <stdlib.h>
#include<math.h>

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
        for(int j = 0 ; j<taille -i -1; j++){
              if (T[j] < T[j+1]){
                tmp = T[j];
                T[j] = T[j+1];
                T[j+1] = tmp ;
              }
            }
        }
    for( i = 0 ; i<taille;i++)
        printf("%d ",T[i]);
  return 0;
}
