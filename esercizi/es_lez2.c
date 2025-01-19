#include <stdio.h>;
#include <string.h>

int main(){

char nome[32];
char cognome[32];

// Inserimento credenziali + messaggio introduttivo
printf("Inserisci il tuo nome: \n");
scanf('%s', nome);

printf("Inserisci il tuo cogonome: \n");
scanf('%s', cognome);

printf("Benvenuto, %s %s!\n", nome, cognome);

// Inserimento dati 
char categoria[3];
float peso;

printf("Inserisci la categoria del tuo dispositivo: \n");
scanf('%s', categoria);

printf("Inserisci il peso in Kg: \n");
scanf('%f', &peso);


}