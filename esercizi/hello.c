#include <stdio.h> //input output library

//main function - the entry point
//il main restituisce un intero
int main()  
{
    printf("HELLO WORLD!\nCIAO MONDO!\n\n\n"); // \n nuova righa a capo   \t tab

    char name[32]; // dichiaro una variabile da 32 caratteri

    printf("Inserisci il tuo nome:  ");
    scanf("%s", name); //legge l'input dell'utente

    printf("Il tuo nome è: %s\n\n", name);

    return 0; // program is terminated successfully
}
