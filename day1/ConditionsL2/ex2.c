#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age , voitur ,accidents ;
    float Prime_Assurance,Prime_de_base = 100;
    printf("entrez age : ");
    scanf("%d",&age);
    printf("entrez type de voiture : \n");
    printf("1 pour sportive \n");
    printf("2 pour utilitaire,\n");
    printf("3 pour familiale \n");
    scanf("%d",&voitur);
    printf("entrez nember d accidents : ");
    scanf("%d",&accidents);

    if(age  < 25)
       Prime_Assurance = Prime_de_base *1.5 ;
    else if(age >= 25 && age <= 65)
        Prime_Assurance = Prime_de_base * 1.5 ;
    else if (age > 65)
        Prime_Assurance = Prime_de_base * 1.2;
    else if (voitur == 1)
        Prime_Assurance = Prime_de_base*2;
    else if(voitur == 2)
        Prime_Assurance = Prime_de_base*1.2;
    else if (voitur == 3 )
        Prime_Assurance = Prime_de_base*1.1 ;

    printf("Prime_Assurance = %.2f ",Prime_Assurance);
    return 0;
}
