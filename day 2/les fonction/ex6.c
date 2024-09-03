#include <stdio.h>
#include <stdlib.h>
int Factorielle (int x ){
    int S = 1  ,i ;
    for(i = 2 ; i <= x ; i++){
        S = S * i;
    }
        return S;

}

int main()
{
    int a;
    printf("veuillez entrer  le premier nombre : ");
    scanf("%d",&a);
    printf("la Factorielle de nember %d est %d",a,Factorielle(a));

    return 0;
}
