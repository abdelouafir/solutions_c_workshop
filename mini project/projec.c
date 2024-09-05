#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char livre [200][50];
char Auteur  [200][50];
int prix [200];
int Quantite [200];
int NL ; //nember des livre
NL = 0 ;
// ajoutee les ele ment de tableux
void ajoutee (){
    int i ;
    int choix ;
    do{
         printf("entrer le titre de livre : ");
         scanf("%s",livre[NL]);
         printf("entrer le auteur de livre : ");
         scanf(" %s",Auteur[NL]);
         printf("entrer la prix de cette livre : ");
         scanf("%d",&prix[NL]);
         printf("entrer la quantite de cette livre : ");
         scanf("%d",&Quantite[NL]);
         NL++;
         printf("tu peux choisir un autre livre : \n");
         printf("1 . oui \n");
         printf("2 . non \n");
         scanf("%d",&choix);

    }while(choix != 2);

}
//affcher  tout les livres
void afficher(){
    int i ;
    for( i = 0 ; i< NL ; i++){
        printf("********* %s ************* \n",livre[i]);
        printf(" livre : %s \n auter : %s \n prix : %d \n quantite : %d \n",livre[i],Auteur[i],prix[i],Quantite[i]);
        printf("\n");
    }
}
//modifier la quantite
void modifier (){
    char liv[50] ;
    int NQ;//la nuvelle quantite
    printf("entrer le titre de livre que tu modifier : ");
    scanf("%s",liv);

    int i,C ;
    for(i = 0 ; i < NL ;i++){
        if(strcasecmp(livre[i],liv) == 0 ){
            printf("entrer la nevelle quantite : ");
            scanf("%d",&NQ);
            Quantite[i] = NQ ;
            printf("la nevelle quantete de livre %s est %d \n",livre[i],Quantite[i]);
        }
        else {
            printf("Le livre n existe pas \n");
            break;
        }
    }
}
//fonction de supprimer
void suppremer (){
    char suprim[50];
    int i ,C;
    printf("entrer le titre de livre que tu suprumer : ");
    scanf("%s",suprim);
    for(i = 0 ; i <= NL ;i++){
        if(strcasecmp(livre[i],suprim) == 0 ){
            C = i ;
        }
    }
    for(i = C ; i <= NL ; i++){
        strcpy(livre[i],livre[i+1]);
    }
    printf("livre %s et suprimer  \n",livre[C]);
    NL--;
}
void stock (){
    printf(" ================ le stock ========================== \n");
    for(int i = 0 ; i <= NL ; i++ ){
         printf("========= liv %d ============= \n",i+1);
         printf("titre de livre : %s \n la quantete : %d \n ",livre[i],Quantite[i]);
    }
}
int main()
{
    int choix ;
    do {
        printf("--------------- menu Principal ----------- \n");
        printf("1. ajoute livre \n");
        printf("2. affcher tout les livre \n");
        printf("3. Mettre a joure la Quantité d un Livre \n");
        printf("4. Supprimer un Livre du Stock \n");
        printf("5. Afficher le Nombre Total de Livres en Stock \n");
        printf("6. quantite \n");
        printf("entrer number de ton choix : ");
        scanf("%d",&choix);
        switch(choix){
            case 1 : ajoutee();
                    break;
            case 2 : afficher();
                    break ;
            case 3 : modifier();
                    break;
            case 4 : suppremer();
                    break;
            case 5 : stock();
        }
    }while(choix != 6);





    return 0;
}
