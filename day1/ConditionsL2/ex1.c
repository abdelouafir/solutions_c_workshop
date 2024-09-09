#include <stdio.h>
#include <stdlib.h>
int main()
{
    float Revenu,credit,Duree ;
    printf("entrez Revenu annuel : ");
    scanf("%f",&Revenu );
    printf("entrez Score de credit : ");
    scanf("%f",&credit );
    printf("entrez Duree du pret : ");
    scanf("%f",&Duree );

    if(Revenu >= 30000 && credit >= 700 && Duree <= 10)
        printf("eligible");
    else if(Revenu >= 30000 && credit >= 650 && Duree <= 10 )
        printf("eligible avec conditions");
    else
        printf("Non eligible");

    return 0;
}
