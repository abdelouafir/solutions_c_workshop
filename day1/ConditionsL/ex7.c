#include <stdio.h>
#include <stdlib.h>
int main()
{
    char litre ;
    printf("entrez un litre : ");
    scanf("%c",&litre);
    if(litre >= 'A' && litre <= 'Z')
        printf("litre %c Majuscule ");
    else if(litre >= 'a' && litre <= 'z')
        printf("litre %c minuscule ");
    else
        printf("no litre !");
    return 0;
}
