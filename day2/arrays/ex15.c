#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T [100];
    int T2 [100];
    int TE[100];
    int i ,NR ,C=0;
    int taille,taille2 ;
    printf("entrez taille de tableux : ");
    scanf("%d",&taille);
    for(i = 0 ; i<taille; i++ ){
        printf("entrez element T1 %d : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("\n");
    printf("entre tille de tableux 2 : ");
    scanf("%d",&taille2);
    for(i = 0 ; i<taille2; i++ ){
        printf("entrez element T2 %d : ",i+1);
        scanf("%d",&T2[i]);
    }
    for ( i = 0 ; i< taille ;i++){
        TE[i] = T [i];
    }

    for( i = taille ; i < taille+taille2 ; i++){
            TE[i] = T2[C];
            C++;
    }

    for(i = 0 ; i<taille+taille2; i++)
        printf("%d ",TE[i]);

    return 0;
}
