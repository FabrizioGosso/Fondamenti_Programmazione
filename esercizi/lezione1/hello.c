#include <stdio.h> //input output library
#include <stdbool.h> // boolean library

// Macros --> precompilazione
#define NEW_LINE printf("\n")  // Ogni volta che scriverò NEW_LINE lui eseguirà un '\n'
#define PI_GRECO 3.14159265358
#define DEBUG_PRINT(x) printf("[DEBUG] - "); printf("%s", x); printf("\n")

//main function - the entry point
//il main restituisce un intero
int main()  
{
    printf("HELLO WORLD!\nCIAO MONDO!\n\n\n"); // \n nuova righa a capo   \t tab

    char name[32]; // dichiaro una variabile da 32 caratteri

    printf("Inserisci il tuo nome:  ");
    scanf("%s", name); //legge l'input dell'utente

    printf("Il tuo nome è: %s\n\n", name);


    int i = 10;
    printf("Il valore intero è: %d\n", i);

    NEW_LINE;

    float f= 10.1;
    printf("Inserisci un numero reale:  ");
    scanf("%f", &f); // La '&' accede all'indirizzo fisico della variabile, funziona per variabili semplici cone int, float
    NEW_LINE;

    printf("Il numero reale vale: %f\n", f);
    NEW_LINE;

    printf("== AREA DEL CERCHIO ==");
    NEW_LINE;

    printf("Inserisci il raggio: ");
    scanf("%f", &f);
    NEW_LINE;

    float area = f * f * PI_GRECO;

    printf("L'area del cerchio è: %f", area );
    NEW_LINE;


    return 0; // program is terminated successfully
    NEW_LINE;
    NEW_LINE;
}
