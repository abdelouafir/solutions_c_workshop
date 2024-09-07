#include <stdio.h>
#include <stdlib.h>
int main()
{
    float Yards,Km;
    printf("entrez la distance en  kilomètres  : ");
    scanf("%.2f",&Km);
    Yards = Km * 1093.61;
    printf("%.2f kilemetres zquvaleur %.2f yards\n",Km,Yards);


    return 0;
}
