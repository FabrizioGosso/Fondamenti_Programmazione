#include <stdio.h>
#include "define.h"


int main() {

    int numbers[SIZE];

    for (int i = 0; i < SIZE; i ++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < SIZE; i++){
        printf("%d, numbers[i]");

    }


    printf("\n");
    return 0;
}