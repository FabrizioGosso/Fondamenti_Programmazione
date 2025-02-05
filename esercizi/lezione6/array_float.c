#include <stdio.h>

int main() {
    // Definizione e inizializzazione della matrice 4x3
    float matrice[4][3] = {
        {  1.5,  -6.8,  10.0 },
        { -3.2,   7.1, -11.3 },
        {  4.0,  -8.4,  12.6 },
        {  5.5,   9.9, -13.7 }
    };

    float sommaPositivi = 0, sommaNegativi = 0;
    float max = matrice[0][0], min = matrice[0][0];
    int pari = 0, dispari = 0;
    int tuttiPositivi = 1, tuttiNegativi = 1;
    int multiploDi5 = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            float valore = matrice[i][j];
            int parteIntera = (int)valore;

            // Somma dei numeri positivi e negativi
            if (valore > 0)
                sommaPositivi += valore;
            else if (valore < 0)
                sommaNegativi += valore;

            // Trovare massimo e minimo
            if (valore > max) max = valore;
            if (valore < min) min = valore;

            // Contare numeri pari e dispari (considerando solo la parte intera)
            if (parteIntera % 2 == 0)
                pari++;
            else
                dispari++;

            // Controllo se tutti i numeri sono positivi o negativi
            if (valore <= 0) tuttiPositivi = 0;
            if (valore >= 0) tuttiNegativi = 0;

            // Controllo multipli di 5 (solo parte intera)
            if (parteIntera % 5 == 0)
                multiploDi5 = 1;
        }
    }

    // Stampare i risultati
    printf("Somma dei numeri positivi: %.2f\n", sommaPositivi);
    printf("Somma dei numeri negativi: %.2f\n", sommaNegativi);
    printf("Valore massimo: %.2f\n", max);
    printf("Valore minimo: %.2f\n", min);
    printf("Numeri pari: %d\n", pari);
    printf("Numeri dispari: %d\n", dispari);

    if (tuttiPositivi)
        printf("Tutti i numeri nella matrice sono positivi.\n");
    else if (tuttiNegativi)
        printf("Tutti i numeri nella matrice sono negativi.\n");

    if (multiploDi5)
        printf("Almeno un numero nella matrice è multiplo di 5.\n\n");

    return 0;
}
