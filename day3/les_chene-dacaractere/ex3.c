#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char chain [50] ;
    char chain2 [50] ;
    char afficher [50][2] ;
    int C ; //conteur
    printf("entrer un 1 mos : ");
    scanf("%s",chain);
    printf("entrer un 2 mos : ");
    scanf("%s",chain2);
    strcpy(afficher[0],chain);
    strcpy(afficher[1],chain2);
    for(int i = 0 ; i< 2 ;i++){
        printf("%s ",afficher[i]);
    }

    return 0;
}
