#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char chain [50] ;
    int C ; //conteur
    char lettre ;
    printf("entrer premier mot : ");
    scanf("%s",chain);
    for(int i = 0 ; chain[i] != '\0' ;i++){
        chain[i] = toupper(chain[i]);
    }
    printf("%s",chain);

    return 0;
}
