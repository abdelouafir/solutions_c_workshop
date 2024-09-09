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
    for ( i = 0 ; i< taille;i++){
        if(T[i] % 2 == 0)
          printf("%d ",T[i]);
    }

    return 0;
}
