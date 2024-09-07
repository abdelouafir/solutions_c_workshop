#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N ;
    printf("entrez N : ");
    scanf("%d",&N);
    if (N < 0)
        printf("le nombere N est Négatif ");
    else if (N > 0 )
        printf("le nombere N est possitif ");
    else
        printf("null");

    return 0;
}
