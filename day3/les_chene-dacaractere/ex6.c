#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char chain [50] ;
    int C ; //conteur
    char lettre ;
    printf("entrer premier mot : ");
    scanf("%s",chain);
    printf("entrer ce que tu rechrche : ");
    scanf(" %c",&lettre);
    for(int i = 0 ; chain[i] != '\0' ;i++){
        if(chain[i] == lettre)
            C++ ;
    }
    printf("la lettre %c ripite a %d foi ",lettre,C);

    return 0;
}
