#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i ,N ;
    printf("entrez un nomber N : ");
    scanf("%d",&N);
    for(i = 10 ; i != 0 ;i--){
        printf("%d X %d = %d \n",N,i,N*i);
    }
    return 0;
}
