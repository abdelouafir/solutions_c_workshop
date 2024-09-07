#include <stdio.h>
#include <stdlib.h>
int main()
{
    char lettre;
    printf("enter un lettre");
    scanf("%c",&lettre);
    switch(lettre){
        case 'a' : printf("ce un lettre voylle ");
                  break;
        case 'e' : printf("ce un lettre voylle ");
                  break;
        case 'o' : printf("ce un lettre voylle ");
                  break;
        case 'é' : printf("ce un lettre voylle ");
                  break;
        default  : printf("le nomber no voylle");
    }
    return 0;
}
