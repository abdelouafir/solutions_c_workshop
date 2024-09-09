#include <stdio.h>
#include <stdlib.h>
int main()
{
    float KH,MS;
    printf("veuillez saisir la  vitesse en kilomètres par hors : ");
    scanf("%f",&KH);
    MS = KH * 0.27778;
    printf("MS = %.2f",MS);
    return 0;
}
