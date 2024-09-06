#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char titre [50];
    char auteur[50];
    int annee ;
}LIVRE;
//fontin calcule l'aire
void libre (char titre[20], char auteur[20] ,int annee){
   printf(" nome de livre : %s \n auteur : %s \n annee : %d",titre,auteur,annee);
}

int main(){
    LIVRE liv ;
    printf("entrez titre de livre : ");
    scanf("%s",liv.titre);
    printf("entrez auteur de livre : ");
    scanf("%s",liv.auteur);
    printf("entrez date crite annee de livre : ");
    scanf("%d",&liv.annee);
    libre(liv.titre,liv.auteur,liv.annee);

    return 0;
}
