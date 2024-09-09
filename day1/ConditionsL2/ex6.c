#include <stdio.h>
#include <stdlib.h>
int main()
{
    float electricite ,utilisateur,contrat , facture;

    printf("entrez la Consommation d electricite (en kWh)");
    scanf("%f",&electricite);
    printf("entrez Type d utilisateur \n");
    printf("1 pour residentiel \n");
    printf("2 pour commercial");
    scanf("%f",&utilisateur);
    printf("entrez Type contrat : \n");
    printf("1. pour standard \n");
    printf("2. pour commercial : \n");
    scanf("%f",&contrat);
    if( utilisateur == 1 && contrat == 1)
        facture = electricite * 0.20 ;
    else if (utilisateur == 1 && contrat == 2)
        facture = electricite * 0.15;
    else if (utilisateur == 2 && contrat == 1)
        facture = electricite * 0.30;
    else if (utilisateur = 1 && contrat == 2)
        facture = electricite * 0.25;
    else
        printf("error ! ");


   if (facture >= 500)
      facture = facture + facture *10/100 ;
    printf("facture = %.2f",facture);


    return 0;
}
