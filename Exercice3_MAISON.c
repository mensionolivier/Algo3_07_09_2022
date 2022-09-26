#include <stdio.h>
#define MAX 10
typedef float TAB_NOTES[MAX];
typedef int TAB_COEFF[MAX];

int saisie_notes(TAB_NOTES tabnotes, TAB_COEFF tabcoeff)
{
    int i;
    float moyenne_notes = 0;
    int total_coeff = 0;
    for (i = 0 ; i < MAX ; i++)
    {
        printf("\nVeuillez rentrer la note n°%d : ",(i+1));
        scanf("%f",&tabnotes[i]);
        /*printf("%f",tabnotes[i]);*/
        printf("\nVeuillez rentrer le coeff n°%d : ", (i+1));
        scanf("%d",&tabcoeff[i]);
        /*printf("%d",tabnotes[i]);*/
        moyenne_notes = moyenne_notes + (tabnotes[i]*tabcoeff[i]);
        total_coeff = total_coeff + tabcoeff[i];

    }
    moyenne_notes = moyenne_notes / total_coeff ;
    printf("La moyenne des notes est : %f", moyenne_notes) ;
}

int afficher_notes(TAB_NOTES tabnotes, TAB_COEFF tabcoeff)
{
    int i;
    printf ("\nVoilà le tableau des notes : ");
    for (i = 0;i < MAX; i++)
        printf ("\n%f | %d", tabnotes[i], tabcoeff[i]);
}

int min_max(TAB_NOTES tabnotes)
{
    int i;
    float min = tabnotes[0];
    float max = tabnotes[0];
    for (i = 0;i < MAX; i++)
    {
        if (min > tabnotes[i])
            min = tabnotes[i];
        if (max < tabnotes[i])
            max = tabnotes[i];
    }
    printf("\nLa note maximale est : %f", max);
    printf("\nLa note minimale est : %f", min);
}

int ajouter_point(TAB_NOTES tabnotes)
{
    int i;
    for (i = 0;i < MAX; i++)
        tabnotes[i] = tabnotes[i] + 1;
}

int modifier_note(TAB_NOTES tabnotes)
{
    int modif;
    printf("\nVeuillez rentrer le numéro de la note que vous voulez modifier : ");
    scanf("%d",&modif);
    printf("\nVeuillez rentrer la nouvelle note");
    scanf("%f", &tabnotes[modif-1]);
}

int main()
{
    TAB_NOTES tabnotes[10];
    TAB_COEFF tabcoeff[10];
    saisie_notes(tabnotes, tabcoeff);
    afficher_notes(tabnotes, tabcoeff);
    min_max(tabnotes);
    ajouter_point(tabnotes);
    afficher_notes(tabnotes,tabcoeff);
    modifier_note(tabnotes);
    afficher_notes(tabnotes,tabcoeff);
}

/* On pourrait utiliser une boucle pour gérer les notes de P élèves */
