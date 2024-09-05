#include <stdio.h>
#include <stdlib.h>
int MAX (int x , int y){
    int max,tmp ;
    if (x < y)
        max = y;
    else
        max = x;
    return max;
}
int main()
{
    int a,b;
    printf("veuillez entrer  le premier nombre : ");
    scanf("%d",&a);
    printf("veuillez entrer le deux eme nombre : ");
    scanf("%d",&b);
    printf("le maximent : %d",MAX(a,b));
    return 0;
}
