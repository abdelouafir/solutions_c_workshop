#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
#include "function.h"
int main()
{
    int choix ;
    do {
        printf("--------------- menu Principal ----------- \n");
        printf("1. Ajouter un Contact \n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact \n");
        printf("4. Afficher Tous les Contacts \n");
        printf("5. Rechercher un Contact \n");
        printf("6. quantite \n");
        printf("entrer number de ton choix : ");
        scanf("%d",&choix);
        switch(choix){
            case 1 : ajoute();
                     break;
            case 2 : modffier();
                    break;
            case 3 : Supprimer();
                    break ;
            case 4 : Afficher();
                    break;
            case 5 : Rechercher();
                    break;
        }
    }while(choix != 6);

    return 0;
}
