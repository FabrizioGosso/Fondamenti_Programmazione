#include <stdio.h>
#include <string.h>

// Macros
#define NOME "Fabrizio"
#define COGNOME "Gosso"
#define R1 0.85
#define R2 0.75
#define R3 0.65
#define R4 0.50
#define R5 0.40


int main(){

// Dichiarazione variabili 
char categoria[3];
double peso, riclabile, scarto;

// Messaggio e input dati
printf("Benvenuto, %s %s!\n", NOME, COGNOME);

printf("Inserisci la categoria RAEE del tuo dispositivo: \n");
scanf("%2s", categoria);

printf("Inserisci il peso in Kg: \n");
scanf("%lf", &peso);

// Calcolo a seconda della categoria inserita ---- strcasecmp confronta le stringhe ignorando maiuscole e minuscole
if (strcasecmp(categoria, "R1") == 0) {
    riclabile = peso * R1;
    } 
else if (strcasecmp(categoria, "R2") == 0) {
    riclabile = peso * R2;
    }
else if (strcasecmp(categoria, "R3") == 0) {
    riclabile = peso * R3;
    }
else if (strcasecmp(categoria, "R4") == 0) {
    riclabile = peso * R4;
    }
else if (strcasecmp(categoria, "R5") == 0) {
    riclabile = peso * R5;
    }
else {
    printf("Categoria non valida!\n");
    return 1;  // Uscita con errore
    }

// Calcolo del materiale irrecuperabile
scarto = peso - riclabile;

// Stampa dei risultati
printf("\nPeso totale: %.2f kg.\n", peso);
printf("Recuperabile: %.2f kg.\n", riclabile);
printf("Irrecuperabile: %.2f kg.\n", scarto);


printf("Grazie per aver usato il nostro programma.\n\n");

return 0;

}
