#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N ,S;
    printf("entrez un nember enter : ");
    scanf("%d",&N);
    for( int i = 0 ; i<= N ;i++){
        S = S + i ;
    }
    printf(" somme : %d",S);
    return 0;
}
