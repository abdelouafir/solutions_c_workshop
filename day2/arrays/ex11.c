#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T [100];
    int i ,C=0;
    int taille,change,rempl ;
    printf("entrez taille de tableux : ");
    scanf("%d",&taille);
    for(i = 0 ; i<taille; i++ ){
        printf("entrez element %d : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("entrez number tu qui chongez ");
    scanf("%d",&change);
    printf("entrez element de remplasez : ");
    scanf("%d",&rempl);
    for(i = 0 ; i< taille;i++){
       if(T[i] == change)
          T[i] = rempl;
    }
    for(i = 0 ;i<taille ;i++){
        printf("%d ",T[i]);
    }

    return 0;
}
