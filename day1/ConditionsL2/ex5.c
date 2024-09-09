#include <stdio.h>
#include <stdlib.h>
int main()
{
    int budejet , Destination, NP ; //NP = Nombre de personne
    printf("entrez budget en euros : ");
    scanf("%d",&budejet);
    printf("entrez Destination : \n");
    printf("1 pour plage \n");
    printf("2 pour montagne \n");
    printf("3 pour ville : ");
    scanf("%d",&Destination);
    printf("entrez Nombre de personne : ");
    scanf("%d",&NP);
    if (budejet > 1000 )
        printf("Voyage haut de gamme ");
    else if (budejet >= 500 && budejet <= 1000)
        printf("Voyage moyen");
    else if (budejet < 500 )
        printf("Voyage économique");
    else
        printf("budejet est fille : ");


    printf("\n les destinations recommandées sont : ");
    if(budejet >= 1000 && NP < 2 )
        printf("Plage ");
    else if (budejet >= 500 && NP <=2 )
        printf("Montagne");
    else
        printf("Ville");


    return 0;
}
