#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdbool.h>

#define MAX_WORD_LENGTH 25
#define MAX_INCORRECT_GUESSES 6

struct word_with_hint {
    char word[MAX_WORD_LENGTH];
    char hint[MAX_WORD_LENGTH];
};

void display_word(const char word[],const bool guesses[]);

void play_game();