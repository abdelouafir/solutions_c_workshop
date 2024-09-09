#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float R ,Volume ;
    const float PI = 3.14 ;
    printf("entrez la royon : ");
    scanf("%f",&R);

    Volume = ((4/3) * PI * pow (R,3));    //(4/3) * π * r³
    printf("vlolume = %.2f",Volume);
    return 0;
}
