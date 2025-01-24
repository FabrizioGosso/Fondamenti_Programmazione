#include <stdio.h>
#include <string.h>

#define IVA(totale) ((totale) * 0.22)

int main(){

    char giorno[10];
    float spesa, iva, totale_iva;

    int giorno_valido = 0;
    while (!giorno_valido) { 
    printf("Inserisci il giorno della settimana: \n");
    scanf("%s", giorno);

    if (strcasecmp(giorno, "Lunedì") == 0 || strcasecmp(giorno, "Martedì") == 0 ||
        strcasecmp(giorno, "Mercoledì") == 0 || strcasecmp(giorno, "Giovedì") == 0 ||
        strcasecmp(giorno, "Venerdì") == 0 || strcasecmp(giorno, "Sabato") == 0 || 
        strcasecmp(giorno, "Domenica") == 0) {
        giorno_valido = 1;  // Esci dal ciclo
    } else {
        printf("Giorno non valido! Riprova.\n\n");
        }
}
    printf("Inserisci la spesa giornaliera: \n");
    scanf("%f", &spesa);

    iva = IVA(spesa);
    totale_iva = spesa + iva;

    if (strcasecmp(giorno, "sabato") == 0 || strcasecmp(giorno, "domenica") == 0) {
        printf("\n%s è un giorno festivo.\n", giorno);
    }
    else {
        printf("\n%s è un giorno feriale.\n", giorno);
    };

    printf("La spesa giornaliera senza IVA è: %.2f\n", spesa);
    printf("La spesa giornaliera con IVA è: %.2f\n\n", totale_iva);

    return 0;

}
