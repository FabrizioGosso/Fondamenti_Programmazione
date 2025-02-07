#include <stdio.h>
#include "operations.h"

int main() {
    int choice, num1, num2;
    int numbers[] = {2, 4, 6, 8, 10}; 
    int size = sizeof(numbers) / sizeof(numbers[0]);

    do {
        // Mostra il menu
        printf("\n--- MENU ---\n");
        printf("1. Addizione (+)\n");
        printf("2. Sottrazione (-)\n");
        printf("3. Moltiplicazione (*)\n");
        printf("4. Divisione (/)\n");
        printf("5. Modulo (%%)\n");
        printf("6. Potenza (^)\n");
        printf("7. Test di tutte le funzioni\n");
        printf("8. Esci\n");
        printf("9. Test con dati personalizzati\n");
        printf("Scegli un'operazione (1-9): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 6) {
            // Chiedi i numeri all'utente
            printf("Inserisci il primo numero: ");
            scanf("%d", &num1);
            printf("Inserisci il secondo numero: ");
            scanf("%d", &num2);
        }

        // Esegui l'operazione scelta
        switch (choice) {
            case 1:
                printf("Risultato: %d\n", add(num1, num2));
                break;
            case 2:
                printf("Risultato: %d\n", sub(num1, num2));
                break;
            case 3:
                printf("Risultato: %d\n", mul(num1, num2));
                break;
            case 4:
                printf("Risultato: %.2f\n", divi(num1, num2));
                break;
            case 5:
                printf("Risultato: %d\n", mod(num1, num2));
                break;
            case 6:
                printf("Risultato: %d\n", power(num1, num2));
                break;
            case 7:
                test_all_operations(numbers, size);
                break;
            case 8:
                printf("Uscita dal programma...\n");
                break;
            case 9:
                test_custom_data();
                break;
            default:
                printf("Scelta non valida! Riprova.\n");
        }
    } while (choice != 8);

    printf("\n");

    return 0;
}
