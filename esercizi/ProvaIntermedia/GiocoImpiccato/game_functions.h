#ifndef GAME_FUNCTIONS_H
#define GAME_FUNCTIONS_H

void select_random_word(char *word);
int check_letter(char letter, const char *word, char *hidden_word);
void print_word(const char *word);

#endif