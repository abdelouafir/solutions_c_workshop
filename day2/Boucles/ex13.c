#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a ,i ,S;
    printf("entrez un npmber ; ");
    scanf("%d",&a);
    for(i = 0 ; i< 10 ;i++){
        printf("%d X %d = %d \n",a,i,a*i);
        S = S + a*i ;
    }
    printf("somme : %d",S);
    return 0;
}
