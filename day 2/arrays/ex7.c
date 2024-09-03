#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , taille,j,echenger;
    printf("veillez entrer le nombre element de tableau : ");
    scanf("%d",&taille);
    int T[taille];
    for(i = 0 ;i<taille;i++){
        printf("entrer le %d ellemment : ",i+1);
        scanf("%d",&T[i]);
    }
    for(i = 0 ;i < taille ;i++){
        for(j = i+1; j < taille;j++){
            if(T[i] > T[j]){
                echenger = T[i];;
                T[i] = T[j];
                T[j] = echenger;
            }
        }
    }
    for(i = 0 ; i<taille;i++)
        printf("%d ",T[i]);


    return 0;
}
