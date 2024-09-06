#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char chain [50] ;
    char chain2 [50] ;
    char afficher [50][2] ;
    int C ; //conteur
    printf("entrer premier mot : ");
    scanf("%s",chain);
    printf("entrer deuxiem mot : ");
    scanf("%s",chain2);
    if(strcasecmp(chain,chain2) == 0 )
        printf("sont egales");
    else
        printf("diffirent");
    return 0;
}
