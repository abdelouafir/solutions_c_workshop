#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("entrez un nembeur : ");
    scanf("%d",&a);
    if(a < 0 )
        printf("le nember %d et negatiffe : ",a);
    else if(a >0)
        printf("le nember %d et possitfe : ",a);
    else
        printf("nulle");

    return 0;
}
