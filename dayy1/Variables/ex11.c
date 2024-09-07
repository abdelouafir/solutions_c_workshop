#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float Surface ,longueur , largeur ;
    printf("entrez longueur de rectangle : ");
    scanf("%f",&longueur);
    printf("entrez largeur de rectangle : ");
    scanf("%f",&largeur);
    Surface = longueur * largeur ;
    printf("la surface de rectangel est : %.2f ",Surface);
    return 0;
}
