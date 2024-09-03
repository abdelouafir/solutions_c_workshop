#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("entrer un number : ");
    scanf("%d",&N);
    if(N < 0)
        printf("le est negatffe");
    else if (N >0)
        printf("le namber est possitiffe");
    else if (N == 0)
        printf("neulle");


    return 0;
}
