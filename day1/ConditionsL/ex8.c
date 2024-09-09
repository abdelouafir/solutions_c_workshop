#include <stdio.h>
#include <stdlib.h>
int main()
{
    float not ;
    printf("entrez la not de etuduent : ");
    scanf("%f",&not);
    if(not < 10)
        printf("etudient est recalé ");
    else if (not >= 10 && not <= 12)
        printf("il obtient la mention passable");
    else if (not > 12 && not <= 14 )
        printf("il obtient la mention assez bien");
    else
        printf("il obtient la mention très bien");
    return 0;
}
