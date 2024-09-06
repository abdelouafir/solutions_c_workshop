#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char nom [20];
    char prenom [20];
    int age ;
    int note [10];
}champs ;
int main()
{
    int i ;
    champs champ ;
    i = 0 ;
    printf("entrez le nom : ");
    scanf("%s",champ.nom);
    printf("entrez le prenom : ");
    scanf("%s",champ.prenom);
    printf("entrez le age : ");
    scanf("%d",&champ.age);
    printf("entrez les nots de : \n");
    for(int j = 0 ; j< 5 ; j++){
        printf("note %d : ",j+1);
        scanf("%d",&champ.note[j]);
    }

           printf(" nom : %s \n prenom : %s \n age : %d ane \n",champ.nom,champ.prenom,champ.age);
           printf(" les note de etudien est : ");
           for(int j = 0 ; j < 5 ; j++)
              printf("%d ",champ.note[j]);


    return 0;
}
