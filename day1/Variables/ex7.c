#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,S;
    int pa,pb,pc;
    float M ;
    printf("entrez n a : ");
    scanf("%d",&a);
    printf("entrez n b : ");
    scanf("%d",&b);
    printf("entrez n c : ");
    scanf("%d",&c);
    pa = 2;
    pb = 3;
    pc = 5 ;
    S = (a*pa)+(pb*b)+(pc*c);
    M = S/10;
    printf("%.2f",M);


    return 0;
}
