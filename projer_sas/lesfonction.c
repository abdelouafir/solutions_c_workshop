#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char Numero_unique [20];
    char nom [20];
    char prenom [20];
    int j ,m ,a ;
    char Departement [20];
    float Note ;
}etudiants ;

//stocker les nom de etudien dan xhaque departement
   char informatique[50][20];
   int info = 0 ;
   char english [50][20];
   int eng = 0;
   char froncese [50][20];
   int fro = 0;
   char ENCG [50][20];
   int enc = 0 ;


//les variabel globale

etudiants etudiant [50];
int nomber_des_etudiants = 0 ;

//variabel qui gisyion les etudient dane chaque departement

    float somme_general ;
    float somme_informatique  ;
    float somme_english ;
    float somm_froncesee  ;
    float somme_ENCG ;


//fonction ajoutee
void Ajouter (){
    int choix ,choix2;
do{
    printf("entrez Numero_unique : ");
    scanf("%s",&etudiant[nomber_des_etudiants].Numero_unique);
    printf("entrez le nom de etudiants : ");
    scanf("%s",etudiant[nomber_des_etudiants].nom);
    printf("entrez prenom : ");
    scanf("%s",etudiant[nomber_des_etudiants].prenom);
    printf("entrez date dancance ./../...: ");
    scanf("%d/%d/%d",&etudiant[nomber_des_etudiants].j,&etudiant[nomber_des_etudiants].m,&etudiant[nomber_des_etudiants].a);
    printf("entrez Departement : \n") ;
    printf("1. informatique \n");
    printf("2. english \n");
    printf("3. froncese \n");
    printf("4. ENCG \n");
    scanf("%d",&choix2);
    if(choix2 == 1 ){
        strcpy( etudiant[nomber_des_etudiants].Departement,"informatique");
        strcpy(informatique[info],etudiant[nomber_des_etudiants].nom);
        info++;
    }
    else if(choix2 == 2){
        strcpy(etudiant[nomber_des_etudiants].Departement,"english");
        strcpy(english[eng],etudiant[nomber_des_etudiants].nom);
        eng++;
    }
    else if (choix2 == 3){
        strcpy(etudiant[nomber_des_etudiants].Departement,"froncese");
        strcpy(froncese[fro],etudiant[nomber_des_etudiants].nom);
        fro++;
    }
    else if (choix2 == 4){
        strcpy(etudiant[nomber_des_etudiants].Departement,"ENCG");
        strcpy(ENCG[enc],etudiant[nomber_des_etudiants].nom);
        enc++;

    }
    else
         printf("deparetzmznt no corict !!!");


    printf("entrez Note genérale : ");
    scanf("%f",&etudiant[nomber_des_etudiants].Note);
    nomber_des_etudiants++;
    printf("vous volz ajoute un nouveelle etudiant : \n");
    printf("1 . oui \n");
    printf("2 . non \n");
    scanf("%d",&choix);
    }while(choix != 2);
}


//fonctiont supremer
void supremer (){
    char recherch [20];
    printf("entrez numero unique que tu suppremze : ");
    scanf("%s",recherch);
    for(int i = 0 ; i < nomber_des_etudiants ;i++){
      if(strcmp(recherch,etudiant[i].Numero_unique) == 0){
        for(int j = i ; j < nomber_des_etudiants ;j++){
            strcpy(etudiant[j].Numero_unique,etudiant[j+1].Numero_unique) ;
            strcpy(etudiant[j].nom,etudiant[j+1].nom );
            strcpy(etudiant[j].prenom,etudiant[j+1].prenom) ;
            etudiant[j].j = etudiant[j+1].j ;
            etudiant[j].m = etudiant[j+1].m ;
            etudiant[j].a = etudiant[j+1].a ;
            strcpy(etudiant[j].Departement , etudiant[i+j].Departement) ;
            etudiant[j].Note = etudiant[j+1].Note ;
        }
        nomber_des_etudiants--;
        printf("un etudent est supremez !\n");
      }
    }

}
//fonction Modifier
void Modifier (){
    int choix ;
    float nevle ;
    int j,m,a ;//por echenchez le date danicence j = gour ,m = mois , a = annee
    char echange [20];
    char recherch [20];
    printf("entrez le nomero unique de etudion que te modffer : ");
    scanf("%s",recherch);
    for(int i = 0 ; i < nomber_des_etudiants;i++){
        if(strcmp(recherch,etudiant[i].Numero_unique) == 0){
            printf("Dans quelle mesure souhaitez-vous modifier ?\n");
            printf(" 1. Numero_unique \n 2. nom \n 3. prenom \n 4. Date de naissance : \n 5. Departement \n 6. note general \n");
            scanf("%d",&choix);
            if(choix == 1){
                printf("entrez nevel numero unique : ");
                scanf("%s",echange);
                strcpy(etudiant[i].Numero_unique,echange);
                printf("+++++ modffi effectue avec suces ++++++++++ \n");
            }
            else if (choix == 2){
                printf("entrez nevel nom : ");
                scanf("%s",echange);
                strcpy(etudiant[i].nom,echange);
                printf("+++++ modffi effectue avec suces ++++++++++ \n");
            }
            else if (choix == 3){
                printf("entrez nevel nom : ");
                scanf("%s",echange);
                strcpy(etudiant[i].prenom,echange);
                printf("+++++ modffi effectue avec suces ++++++++++ \n");
            }
            else if(choix == 4){
                printf("entrez nevel Date de naissance : ");
                scanf("%d/%d/%d",&j,&m,&a);
                etudiant[i].j = j;
                etudiant[i].m = m;
                etudiant[i].a = a;
                printf("+++++ modffi effectue avec suces ++++++++++ \n");
            }
            else if(choix == 5){
                int choix2;
                printf("entrez nevel Departement : \n");
                printf("1. informatique \n");
                printf("2. english \n");
                printf("3. froncese \n");
                printf("4. ENCG \n");
                scanf("%d",&choix2);
                if(choix2 == 1 )
                    strcpy( etudiant[i].Departement,"informatique");
                else if(choix2 == 2)
                    strcpy( etudiant[i].Departement,"english");
                else if(choix2 == 3)
                    strcpy( etudiant[i].Departement,"froncese");
                else if(choix2 == 4)
                    strcpy( etudiant[i].Departement,"ENCG");
                printf("+++++ modffi effectue avec suces ++++++++++ \n");
            }
            else if(choix == 6){
                printf("entrez nevel note general : ");
                scanf("%f",&nevle);
                etudiant[i].Note = nevle;
                printf("+++++ modffi effectue avec suces ++++++++++ \n");
            }
            else
                printf("entrez un choix > 0 et < 6 !!!");
        }
    }
}

void Modifier_ou_supprimer (){
    int choix ;
    printf("Modifier ou supprimer les informations d un étudiant : \n");
    printf("1. modifier \n");
    printf("2. supremer \n");
    scanf("%d",&choix);
    if (choix == 1)
        Modifier();
    else if (choix == 2)
        supremer();

}

//fonction de Afficher les détails d'un étudiant
void affcher (){
    for( int i = 0 ; i<nomber_des_etudiants ;i++){
        printf("*********************%s ******************* \n",etudiant[i].nom);
        printf(" Numero_unique : %s \n le nom : %s \n la prenom : %s \n date ancince : %d/%d/%d \n Departement : %s \n la note giniral : %.2f \n",etudiant[i].Numero_unique,etudiant[i].nom,etudiant[i].prenom,etudiant[i].j,etudiant[i].m,etudiant[i].a,etudiant[i].Departement,etudiant[i].Note);
        printf("\n");
    }
}
//fonction calcul moyenne  département
void moyenne_departemebt (){
    somme_general = 0;
     somme_general ;
     somme_informatique = 0 ;
     somme_english = 0 ;
     somm_froncesee = 0 ;
     somme_ENCG = 0;

    int choix ,choix2;
    for(int i = 0 ; i<nomber_des_etudiants;i++){
        if(strcmp(etudiant[i].Departement,"informatique") == 0){
           somme_informatique = somme_informatique + etudiant[i].Note;
        }
    }
    for(int i = 0 ; i<nomber_des_etudiants;i++){
        if(strcmp(etudiant[i].Departement,"english") == 0){
           somme_english = somme_english + etudiant[i].Note;
        }
    }
    for(int i = 0 ; i<nomber_des_etudiants;i++){
        if(strcmp(etudiant[i].Departement,"froncese")== 0){
           somm_froncesee = somm_froncesee + etudiant[i].Note;
        }
    }
    for(int i = 0 ; i<nomber_des_etudiants;i++){
        if(strcmp(etudiant[i].Departement,"ENCG")== 0){
           somme_ENCG = somme_ENCG + etudiant[i].Note;
        }
    }
    somme_general = somme_english +somme_ENCG + somme_informatique +somm_froncesee ;

    printf("qui lamoyeene qui tu calcule : \n");
    printf("1. la moyenne générale de chaque département \n");
    printf("2. la moyenne générale de l universite \n");
    scanf("%d",&choix);
    if(choix == 1){
        printf("entrez Departement tu que calcul la moyenne fineral : \n") ;
        printf("1. informatique \n");
        printf("2. english \n");
        printf("3. froncese \n");
        printf("4. ENCG \n");
        scanf("%d",&choix2);
        switch (choix2) {
            case 1 : printf("la moyenne general de departement informatique est %.2f \n",somme_informatique /info);
                    break;
            case 2 : printf("la moyenne general de departement english est %.2f \n",somme_english/eng);
                    break;
            case 3 : printf("la moyenne general de departement froncese est %.2f \n",somm_froncesee/fro);
                    break;
            case 4 : printf("la moyenne general de departement ENCG est %.2f \n",somme_ENCG/enc);
                    break;
            default : printf("entrez un choix trouver dane menu !!");
        }
    }
    else if (choix == 2){
        printf("la moyenne générale de l université est : %.2f \n",somme_general/nomber_des_etudiants);
    }
}
//fonction Statistiques
void  Statistiques (){
    int choix ;

    somme_general = somme_english +somme_ENCG + somme_informatique +somm_froncesee ;
    printf("choisaire un choix dane las choix suivent :  \n");
    printf("1. Afficher le nombre total d'étudiants inscrits \n");
    printf("2. Afficher le nombre d'étudiants dans chaque département \n");
    printf("3. Afficher les étudiants ayant une moyenne générale supérieure à un certain seuil \n");
    printf("4. Afficher les 3 étudiants ayant les meilleures notes \n");
    printf("5. Afficher le nombre d'étudiants ayant réussi dans chaque département (ceux ayant une note supérieure ou égale à 10/20) \n");
    scanf("%d",&choix);
    if (choix == 1)
        printf("le nombre total d'étudiants inscrits est %d \n",nomber_des_etudiants);
    else if(choix == 2){
        printf("les  nombre d'étudiants dans chaque département est \n");
        printf("etudiiants de informtaque : %d \n",info);
        printf("etudiiants de english : %d \n",eng);
        printf("etudiiants de froncese  : %d \n",fro);
        printf("etudiiants de ENCG : %d \n",enc);
    }
    else if(choix == 3){
        float moyenne ;
        moyenne = somme_general / nomber_des_etudiants ;
        for( int i = 0 ; i < nomber_des_etudiants ;i++){
            if(etudiant[i].Note > moyenne)
                printf("%s la note general : %.2f \n",etudiant[i].nom,etudiant[i].Note);
        }
    }
    else if(choix == 4){
       etudiants etudianttmp [20] ;
       for(int i = 0 ; i< nomber_des_etudiants;i++){
         for(int j = i+1 ; j<nomber_des_etudiants;j++){
            if(etudiant[i].Note < etudiant[j].Note){
                etudianttmp [i] = etudiant[i];
                etudiant[i] = etudiant[j] ;
                etudiant[j] = etudianttmp[i];
            }
        }
     }
     printf(" les 3 étudiants ayant les meilleures notes : \n");
            for(int i = 0 ; i< 3 ; i++){
            printf("*********************%s ******************* \n",etudiant[i].nom);
            printf(" Numero_unique : %s \n le nom : %s \n la prenom : %s \n date ancince : %d/%d/%d \n Departement : %s \n la note giniral : %.2f \n",etudiant[i].Numero_unique,etudiant[i].nom,etudiant[i].prenom,etudiant[i].j,etudiant[i].m,etudiant[i].a,etudiant[i].Departement,etudiant[i].Note);
            printf("\n");
           }

        }
    else if(choix == 5){
          etudiants resusite [20];
          etudiants echec [20];
          int conteur1 = 0;
          int conteur2 = 0;
          for(int i = 0 ; i<nomber_des_etudiants;i++){
             if(etudiant[i].Note >= 10){
               resusite[conteur1] = etudiant[i];
               conteur1++;
             }
          }
        printf("les etudents resussite eux ayant une moyenne supérieure ou égale à 10/20  \n");
        for(int i = 0 ; i < conteur1 ; i++){
           printf("************ %s ******************* \n",etudiant[i].nom);
           printf(" Numero_unique : %s \n le nom : %s \n la prenom : %s \n date ancince : %d/%d/%d \n Departement : %s \n la note giniral : %.2f \n",resusite[i].Numero_unique,resusite[i].nom,resusite[i].prenom,resusite[i].j,resusite[i].m,resusite[i].a,resusite[i].Departement,resusite[i].Note);
           printf("\n");
        }
   }
}
//fonction note supérieure a 10
void superieur (){
    int choix2;
    int conteur ;
    printf("entrez Departement tu que  : \n") ;
    printf("1. informatique \n");
    printf("2. english \n");
    printf("3. froncese \n");
    printf("4. ENCG \n");
    scanf("%d",&choix2);
    if(choix2 == 1){
        conteur = 0 ;
        for(int i = 0 ; i<nomber_des_etudiants;i++){
            if(strcasecmp(etudiant[i].Departement,"informatique") == 0 && etudiant[i].Note >= 10){
                    conteur++;
            }
            else continue ;
        }
        printf("nomber de etududent supereur a 10/20 dane Departement informatique est : %d \n" ,conteur);
    }
    else if(choix2 == 2){
         conteur = 0 ;
         for(int i = 0 ; i<nomber_des_etudiants;i++){
            if(strcasecmp(etudiant[i].Departement,"english") == 0 && etudiant[i].Note >= 10){
                    conteur++;
            }
            else continue ;
        }
        printf("nomber de etududent supereur a 10/20 dane Departement english est : %d \n" ,conteur);
    }
    else if (choix2 == 3){
        conteur = 0 ;
         for(int i = 0 ; i<nomber_des_etudiants;i++){
            if(strcasecmp(etudiant[i].Departement,"froncese") == 0 && etudiant[i].Note >= 10){
                    conteur++;
            }
            else continue ;
        }
        printf("nomber de etududent supereur a 10/20 dane Departement froncese est : %d \n" ,conteur);
    }
    else if (choix2 == 4){
        conteur = 0 ;
         for(int i = 0 ; i<nomber_des_etudiants;i++){
            if(strcasecmp(etudiant[i].Departement,"ENCG") == 0 && etudiant[i].Note >= 10){
                    conteur++;
            }
            else continue ;
        }
        printf("nomber de etududent supereur a 10/20 dane Departement ENCG est : %d \n" ,conteur);
    }
}
//Rechercher un étudiant par nome :
void rechrcher (){

    char rechrch [20];
    printf("entrez le nome de etudien tu que rechrechez : ");
    scanf("%s",rechrch);
    for(int i = 0 ; i<nomber_des_etudiants ;i++){
        if(strcasecmp(rechrch,etudiant[i].nom) == 0){
            printf("************ %s ******************* \n",etudiant[i].nom);
            printf(" Numero_unique : %s \n le nom : %s \n la prenom : %s \n date ancince : %d/%d/%d \n Departement : %s \n la note giniral : %.2f \n",etudiant[i].Numero_unique,etudiant[i].nom,etudiant[i].prenom,etudiant[i].j,etudiant[i].m,etudiant[i].a,etudiant[i].Departement,etudiant[i].Note);
            printf("\n");
        }
    }
}

//fonctin 	Afficher la liste des étudiants inscrits dans un département spécifique
void afcherDeparetement (){
    printf("les étudiants dane clase informatique : \n");
    for(int i = 0 ; i <info ; i++){
        printf(" etudiane %d : %s \n",i+1,informatique[i]);
    }
    printf("\n");
    printf("les étudiants dane clase english : \n");
    for(int i = 0 ; i <eng ; i++){
        printf(" etudiane %d : %s \n",i+1,english[i]);
    }
    printf("\n");

    printf("les étudiants dane clase froncese : \n");
    for(int i = 0 ; i <fro ; i++){
        printf(" etudiane %d : %s \n",i+1,froncese[i]);
    }
    printf("\n");
    printf("les étudiants dane clase ENCG : \n");
    for(int i = 0 ; i <enc; i++){
        printf(" etudiane %d : %s \n",i+1,ENCG[i]);
    }
    printf("\n");
}
//o	Tri alphabétique des étudiants en fonction de leur nom (de A à Z )
void  tri_alphabitique(){
     etudiants etudianttmp [20] ;
    for(int i = 0 ; i< nomber_des_etudiants;i++){
        for(int j = i+1 ; j<nomber_des_etudiants;j++){
            if(strcasecmp(etudiant[i].nom,etudiant[j].nom) > 0 ){
                etudianttmp [i] = etudiant[i];
                etudiant[i] = etudiant[j] ;
                etudiant[j] = etudianttmp[i];
            }
        }
     }
    printf("===================== tre par alphatique Z a  A : ==========================\n");
    for( int i = 0 ; i<nomber_des_etudiants ;i++){
        printf("************ %s ******************* \n",etudiant[i].nom);
        printf(" Numero_unique : %s \n le nom : %s \n la prenom : %s \n date ancince : %d/%d/%d \n Departement : %s \n la note giniral : %.2f \n",etudiant[i].Numero_unique,etudiant[i].nom,etudiant[i].prenom,etudiant[i].j,etudiant[i].m,etudiant[i].a,etudiant[i].Departement,etudiant[i].Note);
        printf("\n");
}
}

//o	Tri alphabétique des étudiants en fonction de leur nom (de Z à A )
void  tri_alphabitique2(){

     etudiants etudianttmp [20] ;
    for(int i = 0 ; i< nomber_des_etudiants;i++){
        for(int j = i+1 ; j<nomber_des_etudiants;j++){
            if(strcasecmp(etudiant[i].nom,etudiant[j].nom) < 0 ){
                etudianttmp [i] = etudiant[i];
                etudiant[i] = etudiant[j] ;
                etudiant[j] = etudianttmp[i];
            }
        }
     }
    printf("===================== tre par alphatique Z a  A : ==========================\n");
    for( int i = 0 ; i<nomber_des_etudiants ;i++){
        printf("************ %s ******************* \n",etudiant[i].nom);
        printf(" Numero_unique : %s \n le nom : %s \n la prenom : %s \n date ancince : %d/%d/%d \n Departement : %s \n la note giniral : %.2f \n",etudiant[i].Numero_unique,etudiant[i].nom,etudiant[i].prenom,etudiant[i].j,etudiant[i].m,etudiant[i].a,etudiant[i].Departement,etudiant[i].Note);
        printf("\n");
   }
}
//o	Tri des étudiants par moyenne générale, du plus élevé au plus faible ou inversement.
void triParMoyenne (){
    etudiants etudianttmp [20] ;
    for(int i = 0 ; i<nomber_des_etudiants ;i++){
        for(int j = i+1 ; j< nomber_des_etudiants ;j++){
            if(etudiant[i].Note < etudiant[j].Note){
                etudianttmp [i] = etudiant[i];
                etudiant[i] = etudiant[j] ;
                etudiant[j] = etudianttmp[i];
            }
        }
    }
    printf("===================== tre par la moyeen : =======================\n");
    for( int i = 0 ; i<nomber_des_etudiants ;i++){
        printf("************ %s ******************* \n",etudiant[i].nom);
        printf(" Numero_unique : %s \n le nom : %s \n la prenom : %s \n date ancince : %d/%d/%d \n Departement : %s \n la note giniral : %.2f \n",etudiant[i].Numero_unique,etudiant[i].nom,etudiant[i].prenom,etudiant[i].j,etudiant[i].m,etudiant[i].a,etudiant[i].Departement,etudiant[i].Note);
        printf("\n");
    }

}
//o	Tri des étudiants selon leur statut de réussite (ceux ayant une moyenne supérieure ou égale à 10/20)
void treresssite (){

    etudiants resusite [20];
    etudiants echec [20];
    int conteur1 = 0;
    int conteur2 = 0;
    for(int i = 0 ; i<nomber_des_etudiants;i++){
        if(etudiant[i].Note >= 10){
            resusite[conteur1] = etudiant[i];
            conteur1++;
        }
        else {
            echec[conteur2] = etudiant[i];
            conteur2++;
        }
    }
    printf("les etudents resussite eux ayant une moyenne supérieure ou égale à 10/20  \n");
    for(int i = 0 ; i < conteur1 ; i++){
        printf("************ %s ******************* \n",etudiant[i].nom);
        printf(" Numero_unique : %s \n le nom : %s \n la prenom : %s \n date ancince : %d/%d/%d \n Departement : %s \n la note giniral : %.2f \n",resusite[i].Numero_unique,resusite[i].nom,resusite[i].prenom,resusite[i].j,resusite[i].m,resusite[i].a,resusite[i].Departement,resusite[i].Note);
        printf("\n");
    }
    printf("\n");
    printf("les etudents echec eux ayant une moyenne < 10/20  \n");
    for(int i = 0 ; i < conteur2 ; i++){
        printf("************ %s ******************* \n",etudiant[i].nom);
        printf(" Numero_unique : %s \n le nom : %s \n la prenom : %s \n date ancince : %d/%d/%d \n Departement : %s \n la note giniral : %.2f \n",echec[i].Numero_unique,echec[i].nom,echec[i].prenom,echec[i].j,echec[i].m,resusite[i].a,echec[i].Departement,echec[i].Note);
        printf("\n");
    }
}
void TriAlphabitiqueGenral (){
    int choix ;
    printf("choisaire un tre : \n");
    printf("1. Tri alphabétique des etudiants en fonction de leur nom (de A a Z  \n");
    printf("2. Tri alphabétique des etudiants en fonction de leur nom de Z b A \n");
    printf("3. tri des étudiants par moyenne generale, du plus éleve au plus faible ou inversement \n");
    printf("4. Tri des étudiants selon leur statut de réussite (ceux ayant une moyenne supérieure ou égale à 10/20 \n");
    printf("entrez un choix : ");
    scanf("%d",&choix);
    switch (choix){
        case 1 : tri_alphabitique() ;
               break;
        case 2 : tri_alphabitique2();
               break;
        case 3 : triParMoyenne ();
               break;
        case 4 : treresssite ();
                break ;
        default : printf("le choix no trouve dane menu : !!!! \n");
    }

}
//fonction maine :
int main()
{
    int choix;
    do {
        printf("========== [MENU PRANCIPAL] ================ \n");
        printf("1. Ajouter un etudiant \n");
        printf("2. Modifier ou supprimer un etudiant \n");
        printf("3. Afficher les details d un etudiant \n");
        printf("4. Calculer la moyenne generale \n");
        printf("5. Statistiques \n");
        printf("6. Rechercher un etudiant par\n");
        printf("7. Trier un étudiant par\n");
        printf("8. quitee \n");
        printf("=============================================\n");
        printf("entrez un choix : ");
        scanf("%d",&choix);

    switch (choix){
        case 1 : Ajouter();
                break ;
        case 2 : Modifier_ou_supprimer ();
               break;
        case 3 :affcher();
               break ;
        case 4 : moyenne_departemebt ();
               break;
        case 5 : Statistiques ();
               break;
        case 6 : rechrcher();
               break;
        case 7 : TriAlphabitiqueGenral();
              break ;
        default : printf("entrez un choix trouver done le menu !!!!!");
    }
    }while(choix != 8);




    return 0;
}


