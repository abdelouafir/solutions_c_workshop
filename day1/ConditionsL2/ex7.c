#include <stdio.h>
#include <stdlib.h>
int main()
{
    float revenu ,Statut_fiscal,tranches,impots,T ;
    printf("ebtrez Revenu annuel : ");
    scanf("%f",&revenu);
    printf("entrez status fisical : \n");
    printf("1 pour célibataire \n");
    printf("2 pour marie \n");
    printf("3 pour chef de famille \n");
    scanf("%f",&Statut_fiscal);
    if(Statut_fiscal == 1)
        tranches = 1000 ;
    else if(Statut_fiscal == 2)
        tranches = 2000 ;
    else if (Statut_fiscal == 3)
        tranches = 3000;
    else
       tranches = 0 ;
    T = revenu - tranches ;
    if(T <= 2000)
        impots = T * 0.5;
    else if(T <= 5000){
        impots = 2000 * 0.5 + ( T -2000 ) * 0.10 ;
    }
    else
        (impots = 2000 * 0.5 + 3000*0.10 +(T - 5000) * 0.20);
    printf("les impots a payer : %.2f",impots);

    return 0;
}
