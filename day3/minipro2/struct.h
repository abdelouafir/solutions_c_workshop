#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
typedef struct{
    char nom [20];
    char nomiro_detelphone [20];
    char Adresse_emeile [20];
}formasion ;
//variabel globale
formasion form [50];
int NDC = 0; //nomber de Contact
void ajoute();
void Modifier ();
void Supprimer ();
void Afficher ();
void Rechercher ();



#endif // STRUCT_H_INCLUDED
