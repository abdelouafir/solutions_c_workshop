#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char chain [50] ;
    char chainSortie[50] ;
    int C ; //conteur
    printf("entrer premier mot : ");
    scanf("%s",chain);
    for(int i = 0 ; chain[i] != '\0' ;i++){
        C++ ;
    }
    for(int i = 0 ; i <= C ; i++){
        chainSortie[i] = chain[C-i-1];
    }
    printf("%s",chainSortie);
    return 0;
}
