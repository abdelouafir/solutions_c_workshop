#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char nom [20];
    char prenom [20];
    int age ;
}champs ;
int main()
{
    int i ;
    champs champ [20];
    i = 0 ;
    printf("entrez le nom : ");
    scanf("%s",champ[i].nom);
    printf("entrez le prenom : ");
    scanf("%s",champ[i].prenom);
    printf("entrez le age : ");
    scanf("%d",&champ[i].age);
    i++;
    for(i = 0 ; i< 1;i++)
       printf(" nom : %s \n prenom : %s \n age : %d ane\n",champ[i].nom,champ[i].prenom,champ[i].age);

    return 0;
}
