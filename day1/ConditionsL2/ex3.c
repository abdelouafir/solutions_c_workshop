#include <stdio.h>
#include <stdlib.h>
int main()
{
    int conges, NJR , employe ;//NJR = Nombre de jours de cong�s utilis�s
    printf("Nombre total de jours de cong�s accord�s : ");
    scanf("%d",&conges);
    printf("Nombre de jours de cong�s utilises : ");
    scanf("%d",&NJR);
    printf("Statut de l employe \n");
    printf("1 .pour temps partiel \n");
    printf("2 .pour temps plein \n");
    scanf("%d",&employe);

    if (employe == 1 && conges - NJR > 0)
        printf("Temps plein : %d jour ",conges - NJR);
    else if (employe == 2 && conges - NJR > 0)
        printf("Temps plein : %d jour",conges/2 - NJR);
    else{
       printf("allez a ton travaill : alerte !!");
    }


    return 0;
}
