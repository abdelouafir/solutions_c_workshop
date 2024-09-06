#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char chain [50] ;
    char lettre ;
    printf("entrer premier mot : ");
    gets(chain);
    for(int i = 0 ; chain[i] != '\0' ;i++){
        if(chain[i] == ' '){
            for(int j = i ; chain[i] != '\0' ;i++){
                chain[j] = chain[j+1];
            }
        }
    }
    printf("%s ",chain);

    return 0;
}
