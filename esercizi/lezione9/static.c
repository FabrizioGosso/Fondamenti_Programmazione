// void fun(){
// static int counter = 0;
// counter ++;
// }

// quando la funzione 'fun' viene richiamata il counter viene ricordato e non viene inizializzato di nuovo a zero qundo la esegue la seconda volta

#include <stdio.h>

void analyze_word(char w[]){

    static int total_words = 0;
    static int total_vowels = 0;
    static int total_consonants = 0;
    static int total_lenght = 0;

    total_words ++;

    int consonants = 0;
    int vowels = 0;
    int len = strlen(w);
    for (int i = 0; i < len; i++){

        char ch = tolower(w[i]);
        if (ch >= 'a' || ch <= 'z'){

        
            if (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'){

                vowels ++;
            }
            else{

                consonants ++;

            }

        }

    }

    total_lenght += len;
    total_vowels += vowels; 
    total_consonants += consonants; 
    printf("Parola: %s\n", w);
    printf("Numero parole analizzate: %d\n", total_words);
    printf("Totale lunghezza parole analizzate: %d\n", total_lenght);
    printf("Totale vocali parole analizzate: %d\n", total_vowels);
    printf("Totale consonanti parole analizzate: %d\n", total_consonants);
    printf("Media lunghezza parole analizzate: %.2f\n\n", (float) total_lenght / total_words);



    return;
}

int main(){

    char word[256];

    while (1){
        printf("Inserisci una parola (stop per terminare): \n");
        scanf("%s", word);

        if(strcasecmp(word, "stop") == 0){
            printf("Fine dell'analisi.\n\n");
            break;
        }

        analyze_word(word);

    }

    return 0;
}