#include <stdio.h>
#include <stdlib.h>
int main()
{
    int salaire_de_base,Nombre_d_heures_supplementaires,type_de_poste,salaire_heure,salair_supplementaires ;
    float salaire_final;
    printf("entrez Salaire de base (en euros) : ");
    scanf("%d",&salaire_de_base);
    printf("entrez Nombre d heures supplémentaires : ");
    scanf("%d",&Nombre_d_heures_supplementaires);
    printf("Type de poste \n");
    printf("1 pour junior \n");
    printf("2 pour senior \n");
    scanf("%d",&type_de_poste);
    salaire_heure = salaire_de_base / 160 ;

    salair_supplementaires = Nombre_d_heures_supplementaires * 1.5 * salaire_de_base ;
    int prim ;
    if(type_de_poste == 1)
        prim = salaire_de_base * 0.10;
    else if(type_de_poste == 1)
        prim = salaire_de_base *0.20;
    else
        printf("post no valid !!");
    salaire_final = prim +salaire_heure +salaire_de_base ;
    printf("toutal = %f",salaire_final);





    return 0;
}
