#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
/*typedef struct{
    char nom [20];
    char nomiro_detelphone [20];
    char Adresse_emeile [20];
}formasion ;
//variabel globale
formasion form [50];
int NDC = 0; //nomber de Contact*/

void ajoute (){
    printf("entrez le nome de prsonne : ");
    scanf("%s",form[NDC].nom);
    printf("entrez le nomiro de telephone : ");
    scanf("%s",form[NDC].nomiro_detelphone);
    printf("entrez adresse emelle : ");
    scanf("%s",form[NDC].Adresse_emeile);
    NDC++;
}
void modffier (){
    char recherch [20];
    int choix;
    char nevel[20];
    printf("entrez contactact to modfer : ");
    scanf("%s",recherch);
    int i;
    for(i = 0 ; i<=NDC ;i++){
        if(strcasecmp(recherch,form[i].nom) == 0){
            printf("qui tu medffer :\n");
            printf("1. email adresse\n");
            printf("2. nomro de telphone \n");
            scanf("%d",&choix);
            if(choix == 1){

              printf("entrez new emeil : ");
              scanf("%s",nevel);
              for(int j= i ; j < NDC ; j++){
                  strcpy(form[j].Adresse_emeile,nevel);
                  printf(" nom : %s \n nomiro_detelphone : %s \n Adresse_emeile : %s \n",form[j].nom,form[j].nomiro_detelphone,form[j].Adresse_emeile);
              }
           }
            else if (choix == 2){
                printf("entrez new nomiro de telphon : ");
                scanf("%s",nevel);
                for(int j= i ; j < NDC ; j++){
                    strcpy(form[i].nomiro_detelphone,nevel);
                    printf(" nom : %s \n nomiro_detelphone : %s \n Adresse_emeile : %s \n",form[i].nom,form[i].nomiro_detelphone,form[i].Adresse_emeile);

                }
       }
        }
    }
}
void Supprimer (){
    char recherch [20];
    printf("entrez contactact to recherch : ");
    scanf("%s",recherch);
    int i,compteur ;
    for(i = 0 ; i<=NDC ;i++){
        if(strcasecmp(recherch,form[i].nom) == 0)
            compteur = i ;
    }
    for( i = compteur ;i <= NDC ;i++){
        strcpy(form[i].nom,form[i+1].nom);
        strcpy(form[i].nomiro_detelphone,form[i+1].nomiro_detelphone);
        strcpy(form[i].Adresse_emeile,form[i+1].Adresse_emeile);
        NDC-- ;
        printf("---- un element est supremer ---------- \n");
    }
}
void Afficher (){
    for(int i = 0 ; i < NDC; i++){
        printf("************ %s *****************\n",form[i].nom);
        printf(" nom : %s \n nomiro_detelphone : %s \n Adresse_emeile : %s \n",form[i].nom,form[i].nomiro_detelphone,form[i].Adresse_emeile);
        printf("\n");
    }
}
void Rechercher (){
    char recherch [20];
    int R ;
    printf("entrez contactact to recherch : ");
    scanf("%s",recherch);
    int i,compteur;
    for(i = 0 ; i<=NDC ;i++){
        if(strcasecmp(recherch,form[i].nom) == 0){
            printf("************ %s *****************\n",form[i].nom);
            printf(" nom : %s \n nomiro_detelphone : %s \n Adresse_emeile : %s \n",form[i].nom,form[i].nomiro_detelphone,form[i].Adresse_emeile);
        }
   }
}

/*int main()
{
int N ;
    do{

       printf("entrez N ");
       scanf("%d",&N);
       switch (N) {
        case 1 : ajoute();
                break ;
        case 2 : Supprimer();
                break ;
        case 3 : Afficher ();
                break;
        case 4 : Rechercher();
                break ;
        case 5 : modffier ();
        }
    }while(N != 0);


*/



