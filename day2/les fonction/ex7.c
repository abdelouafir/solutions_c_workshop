#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inv (char carac[20]){
    int i ,counter = 0 ;
    for(i = 0 ; i <= carac[i] != '\0' ; i++){
        counter++ ;
    }
    for(i = counter ; i >= 0 ; i--){
        printf("%c",carac[i]);
    }
}
int main()
{
    char chain[20];
    printf("entrez un chaine : ");
    scanf("%s",&chain);
    inv(chain);

    return 0;
}
