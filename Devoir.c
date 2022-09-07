#include <stdio.h>

int multiplication(int nombre1,int nombre2)
{
    int resultat;
    resultat = (nombre1*nombre2);
    return(resultat);

}

int main()
{
    int facteur = 5;
    printf("%d",(multiplication(15,20)*5));
    printf("\n");
    printf("%d",(multiplication(20,25)*5));
    return 0;
}
