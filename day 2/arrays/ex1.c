#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T [5];
    int i;
    for(i = 0 ; i<5 ;i++){
        printf("enter le %d element : ",i+1);
        scanf("%d",&T[i]);
    }
    for(i = 0 ; i<5;i++){
        printf("%d ",T[i]);
    }
    return 0;
}
