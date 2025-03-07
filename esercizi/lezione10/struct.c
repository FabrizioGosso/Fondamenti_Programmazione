#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYER 5
#define PLAYERS_FILE_NAME "giocatori.txt"

struct player{

    char name[50];
    char surname[50];
    int number;
    float pointspergame;
    float reboundspergame;
    float assistspergame;

};

void print_player(struct player* ptr) {
    printf("Hello %s %s: numero di maglia, %d punti %f\n", ptr->name, ptr->surname, ptr->number, ptr->pointspergame);
};

int read_players(struct player tm[], int size) {
    int result = 0;
    FILE* file = fopen(PLAYERS_FILE_NAME, "r");
    if (file = NULL) {

        printf("Errore!\n");
    }
    else{

        for(int i = 0; i < size; i ++){

            fscanf(file, "%s %s %d %f %f %f", 
                tm[i].name,
                tm[i].surname,
                tm[i].number,
                tm[i].pointspergame,
                tm[i].reboundspergame,
                tm[i].assistspergame
            );

        }

        fclose(file);
        result = size;
    }

    return result;
};

int main(){

   /* struct player p1;
    struct player p2 = {"James", "LeBron", 23, 35.0, 23.23, 12.12};
    struct player* ptr;

    strcpy(p1.name, "Luka");
    strcpy(p1.surname, "Doncic");
    p1.number = 10;
    p1.pointspergame = 10.5;
    p1.reboundspergame = 5.5;
    p1.assistspergame = 6.5;


    printf("=== Elemento\n");
    printf("Hello %s %s: numero di maglia, %d punti %f\n", p1.name, p1.surname, p1.number, p1.pointspergame);
    printf("=== Puntatore\n");
    ptr = &p1;
    print_player(ptr);
    ptr = &p2;
    print_player(ptr); */

    struct player team[MAX_PLAYER];
    int numPlayers = read_players(team, MAX_PLAYER);
    
    if (numPlayers == 0){

        printf("Non ci sono giuocatori da leggere nel file.\n");

    }

    printf("\n\n");


    return 0;

}