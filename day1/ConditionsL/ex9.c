#include <stdio.h>
#include <stdlib.h>
int main()
{
    char car ;
    printf("entrez un caractere : ");
    scanf("%c",&car);
    if(car >= 'a' && car <= 'z'){
        printf("le caractere %c est alphabets minuscule ",car);
    }
    else if (car >= 'A' && car <= 'Z'){
        printf("le caractere %c est alphabets majuscule ",car);
    }
    else
        printf("%c est non alphabets",car);

    }
