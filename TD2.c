#include <stdio.h>
/*
    EXERCICE 1 :

int main()
{
    typedef struct {
        char nom[15];
        char prenom[15];
        int codeFonction;
        float salaire;
    } Employe;
    Employe employe;
    printf("\nVeuillez rentrer un nom pour le nouvel employe\n");
    scanf("%s", &employe.nom);
    printf("\nVeuillez rentrer un prenom pour le nouvel employe\n");
    scanf("%s", &employe.prenom);
    printf("\nVeuillez rentrer un code de fonction pour le nouvel employe\n");
    scanf("%d", &employe.codeFonction);
    printf("\nVeuillez rentrer un salaire pour le nouvel employe\n");
    scanf("%f", &employe.salaire);
    printf("Voici toutes les informations de l'employe :\n");printf("Le nom de l'employe : %s\n", employe.nom);
    printf("Le prenom de l'employe : %s\n", employe.prenom);printf("Le code de fonction de l'employe : %d\n", employe.codeFonction);
    printf("Le salaire de l'employe : %f", employe.salaire);
    return 0;
}
*/

typedef char Chaine[15];
typedef struct{
        Chaine nom;
        Chaine prenom;
        int codeFonction;
        float salaire;
    }Employe;

void saisieEmploye(Employe * ep)
{
    printf("\nVeuillez rentrer un nom pour le nouvel employe\n");
    scanf("%s", (* ep).nom);
    printf("\nVeuillez rentrer un prenom pour le nouvel employe\n");
    scanf("%s", (* ep).prenom);
    printf("\nVeuillez rentrer un code de fonction pour le nouvel employe\n");
    scanf("%d", &(* ep).codeFonction);
    printf("\nVeuillez rentrer un salaire pour le nouvel employe\n");
    scanf("%f", &(* ep).salaire);

}

void afficheEmploye(Employe employe)
{
    printf("Voici toutes les informations de l'employe :\n");printf("Le nom de l'employe : %s\n", employe.nom);
    printf("Le prenom de l'employe : %s\n", employe.prenom);printf("Le code de fonction de l'employe : %d\n", employe.codeFonction);
    printf("Le salaire de l'employe : %f", employe.salaire);
}

void modifEmploye(Employe *ep)
{

}

/*void modifEmploye(Employe employe*)
{

};
*/

int main()
{
    Employe employe;
    saisieEmploye(&employe);
    afficheEmploye(employe);
}

