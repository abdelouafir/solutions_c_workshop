#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N ;
    printf("entrez un nomber n : ");
    scanf("%d",&N);
    for(int i = 0 ;i <= N ;i++){
        for(int j = 0 ;j <= i;j++){
           printf("* ");
        }
        printf("\n");

    }
    return 0;
}
