#include <stdio.h>
#include <stdlib.h>
int somme (int x , int y){
    int S ;
    S = x+y;
    return S;
}
int main()
{
    int a,b;
    printf("veuillez entrer  le premier nombre : ");
    scanf("%d",&a);
    printf("veuillez entrer le deux eme nombre : ");
    scanf("%d",&b);
    printf(" %d + %d = %d",a,b,somme(a,b));

    return 0;
}
