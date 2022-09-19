#include <stdio.h>

int intervertir(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int grandpetit(int *a,int *b,int *c, int *max, int *min)
{
    *max = *a;*min = *a;
    if (*b > *a && *b > *c)
        *max = *b;
    else if (*c > *b && *c > *a)
                *max = *c;

    if (*b < *a && *b < *c)
        *min = *b;
    else if (*c < *b && *c < *a)
                *min = *c;

}

int main()
{
    int max = 0;
    int min = 0;
    int a;
    printf("Veuillez entrer la valeur de A\n");
    scanf("%d",&a);

    int b;
    printf("\nVeuillez entrer la valeur de B\n");
    scanf("%d",&b);

    int c;
    printf("\nVeuillez entrer la valeur de C\n");
    scanf("%d",&c);

    intervertir(&a,&b);

    printf("Voici la valeur de a : %d",a);
    printf("\nVoici la valeur de l'adresse de a : %d",&a);
    printf("\nVoici la valeur de b : %d",b);
    printf("\nVoici la valeur de l'adresse de b : %d",&b);

    grandpetit(&a,&b,&c,&max,&min);
    printf("\nVoici la valeur minimum des trois valeurs : %d", min);
    printf("\nVoici la valeur maximum des trois valeurs : %d",max);
}
