#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    float longueur ;
    float largeur ;

}trio ;
//fontin calcule l'aire
void laire (float longueur ,float largeur){
   printf("la laire detr de rectangle : %.2f * %.2f = %.2f ",longueur,largeur,longueur*largeur);
}
int main(){
    trio tri ;
    printf("entrez longueur : ");
    scanf("%f",&tri.longueur);
    printf("entrez largeur : ");
    scanf("%f",&tri.largeur);
    laire(tri.longueur,tri.largeur);
    return 0;
}
