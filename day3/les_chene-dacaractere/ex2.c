#include <stdio.h>
#include <stdlib.h>
int main()
{
    char chain [50] ;
    int C ; //conteur
    printf("entrer un mos : ");
    scanf("%s",chain);
    for (int i = 0 ; chain [i] !='\0';i++){
        C++;
    }


    printf("%d",C);

    return 0;
}
