#include <stdio.h> 

int main()  
{
    char nome[32]; 
    char cognome[32];

    printf("Inserisci il tuo nome:  ");
    scanf("%s", nome);

    printf("Inserisci il tuo cognome:  ");
    scanf("%s", cognome);
 

    printf("Benvenuto, %s %s!\n", nome, cognome);
    printf("Grazie per aver usato in nostro programma.\nTi auguriamo Buone Feste\n");
    printf("    *\n");
    printf("   ***\n");
    printf("  *****\n");
    printf(" *******\n");
    printf("   ***\n\n");

    return 0; 
}
