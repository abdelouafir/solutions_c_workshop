#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N,i;
    printf("entrez un nomber N positife : ");
    scanf("%d",&N);
    for ( i = 1 ; i<= N ;i++){
        if(N % i == 0){
            printf("%d ",i);
        }
    }
    return 0;
}
