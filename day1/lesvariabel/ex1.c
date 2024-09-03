#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nom[10];
    char prenom[10];
    int age ;
    char email[50];
    printf("veullez saisire le nom : ");
    gets(nom);
    printf("veullez saisire le prenom : ");
    gets(prenom);
    printf("entrer la age : ");
    scanf("%d",&age);
    printf("veullez saisire le adresse email : ");
    scanf("%s",email);
    printf("les informasion de %s \n",nom);
    printf(" le nom : %s \n le prenom : %s \n age : %d \n adresse email : %s \n",nom,prenom,age,email);

    return 0;
}
