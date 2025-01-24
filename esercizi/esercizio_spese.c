#include <stdio.h>
#include <stdlib.h>

// Macro per la penale del 10%
#define PENALITA 0.10

// Soglia per verificare se la spesa totale supera un certo limite
#define SOGLIA 200.0

// Configurazioni per abilitare/disabilitare il calcolo della penale
//#define CALCOLA_PENALITA

// Definizioni per abilitare/disabilitare il debug
//#define DEBUG

void suggerimenti_risparmio(float totale) {
    switch((int)(totale / 50)) {
        case 0:
            printf("Risparmio suggerito: Considera di ridurre il consumo energetico o spegnere apparecchi inutilizzati.\n");
            break;
        case 1:
            printf("Risparmio suggerito: Riduci l'uso di acqua calda o ottimizza l'uso del riscaldamento.\n");
            break;
        case 2:
            printf("Risparmio suggerito: Verifica la tua tariffa Internet, potrebbero esserci piani più economici.\n");
            break;
        default:
            printf("Risparmio suggerito: Ottimizza tutte le utenze e cerca pacchetti combinati.\n");
    }
}

int main() {
    float elettricita, acqua, gas, internet;
    float totale = 0.0;

    // Input delle spese mensili
    printf("Inserisci la spesa per l'elettricità: ");
    scanf("%f", &elettricita);
    printf("Inserisci la spesa per l'acqua: ");
    scanf("%f", &acqua);
    printf("Inserisci la spesa per il gas: ");
    scanf("%f", &gas);
    printf("Inserisci la spesa per Internet: ");
    scanf("%f", &internet);

    // Calcolo del totale
    totale = elettricita + acqua + gas + internet;

    // Debug: stampa delle spese individuali
    #ifdef DEBUG
    printf("Spesa elettricità: %.2f\n", elettricita);
    printf("Spesa acqua: %.2f\n", acqua);
    printf("Spesa gas: %.2f\n", gas);
    printf("Spesa internet: %.2f\n", internet);
    #endif

    // Calcolo della penale se configurato
    #ifdef CALCOLA_PENALITA
    totale += totale * PENALITA;
    printf("Penale applicata! Il totale con penale è: %.2f\n", totale);
    #else
    printf("Nessuna penale applicata.\n");
    #endif

    // Verifica della soglia
    if (totale > SOGLIA) {
        printf("Attenzione! La spesa totale ha superato la soglia di %.2f, il totale è: %.2f\n", SOGLIA, totale);
    } else {
        printf("La spesa totale è sotto la soglia, il totale è: %.2f\n", totale);
    }

    // Suggerimenti di risparmio
    suggerimenti_risparmio(totale);

    // Riepilogo finale
    printf("\nRiepilogo spese mensili:\n");
    printf("Elettricità: %.2f\n", elettricita);
    printf("Acqua: %.2f\n", acqua);
    printf("Gas: %.2f\n", gas);
    printf("Internet: %.2f\n", internet);
    printf("Totale: %.2f\n", totale);

    return 0;
}