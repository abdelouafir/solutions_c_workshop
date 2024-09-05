#include <stdio.h>
#include <stdlib.h>
int produit (int x , int y){
    int P ;
    P = x*y;
    return P;
}
int main()
{
    int a,b;
    printf("veuillez entrer  le premier nombre : ");
    scanf("%d",&a);
    printf("veuillez entrer le deux eme nombre : ");
    scanf("%d",&b);
    printf(" %d X %d = %d",a,b,produit(a,b));

    return 0;
}
