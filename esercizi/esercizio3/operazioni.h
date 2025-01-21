#ifndef OPERATIONS_H
#define OPERATIONS_H // Definisce la macro operazioni se non è già stata definita (ifndef)

// Macros
#define NOME "Fabrizio"
#define COGNOME "Gosso"
#define SOMMA(n1, n2) ((n1) + (n2))
#define SOTTRAZIONE(n1, n2) ((n1) - (n2))
#define MOLTIPLICAZIONE(n1, n2) ((n1) * (n2)) 
#define DIVISIONE(n1, n2) ((n2) != 0 ? (double)(n1) / (n2) : 0) // Testa che n2 sia diverso da 0, se true fa la divisione, se false da 0
#define MODULO(n1, n2) ((n2) != 0 ? (n1) % (n2) : 0)

#endif