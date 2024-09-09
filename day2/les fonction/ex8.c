#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int pairImpair (int N ){
    int R ;
    if(N % 2 == 0)
        R = 1;
    else
        R = 0 ;
    return R;
}
int main()
{
    int n ;
    printf("entrez un nolber n : ");
    scanf("%d",&n);
    if(pairImpair(n) == 1)
        printf("%d et pair ",n));
    else
        printf("%d et impair",n);

    return 0 ;

}
