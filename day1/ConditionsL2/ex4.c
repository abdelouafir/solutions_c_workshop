#include <stdio.h>
#include <stdlib.h>
int main()
{
    int SP ,Anciennete,Recompenses ;//Score de performance
    printf("Score de performance : ");
    scanf("%d",&SP);
    printf("entrez ann�es Anciennete");
    scanf("%d",&Anciennete);
    printf("entrez R�compenses re�ues : ");
    scanf("%d",&Recompenses);
    if(SP >= 90 && Anciennete >= 5)
        printf("Excellente");
    else if(SP >= 75 && Anciennete >= 3)
        printf("Bonne");
    else if (SP >= 50 && Anciennete >= 3)
        printf("Satisfaisante");
    else if (SP < 50 )
        printf("Insuffisante");
    return 0;
}
