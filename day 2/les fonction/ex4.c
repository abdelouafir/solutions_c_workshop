#include <stdio.h>
#include <stdlib.h>
int MIN (int x , int y){
    int min ;
    if (x > y)
        min = y;
    else
        min = x;
    return min;
}
int main()
{
    int a,b;
    printf("veuillez entrer  le premier nombre : ");
    scanf("%d",&a);
    printf("veuillez entrer le deux eme nombre : ");
    scanf("%d",&b);
    printf("le minement : %d",MIN(a,b));

    return 0;
}
