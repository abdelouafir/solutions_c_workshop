#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Annees_de_cotisation ,Montant_total,age ;
    printf("entrez age : ");
    scanf("%d",&age);
    printf("entrez Années de cotisation : ");
    scanf("%d",&Annees_de_cotisation);
    printf("entrez montane eureu ");
    scanf("%d",&Montant_total);
    if(age >= 65 && Annees_de_cotisation >= 30 && Montant_total >= 100000)
       printf("Plan complet avec pension elevee");
    else if (age >= 65 && Annees_de_cotisation >= 20 && Montant_total >= 100000)
        printf("Plan partiel avec pension moyenne");
    else
        printf("Plan épargne non encore disponible");

    return 0;
}
