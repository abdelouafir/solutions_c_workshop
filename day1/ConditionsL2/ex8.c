#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Historique_medical ,age ;
    printf("entrez age : ");
    scanf("%d",&age);
    printf("qulle Historique m�dical\n ");
    printf("1 pour aucun probl�me \n");
    printf("2 pour probl�me mineur \n");
    printf("3 pour probl�me majeur\n");
    scanf("%d",&Historique_medical);

    if(age >= 30 && Historique_medical == 1)
       printf("Plan de base");
    else if (age >= 30 && Historique_medical >= 1)
        printf("Plan etendu ");
    else
        printf("no Plan ");

    return 0;
}
