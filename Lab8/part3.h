#ifndef PART3_H
#define PART3_H

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_WORDS 20
#define MAX_CHAR 10

int read_words(FILE* infile, int words[MAX_WORDS][MAX_CHAR], int word_lengths[]);

// word & word_length are output params
// need to seed rand at start of program
void get_random_word(int** words, int* word_lengths, int words_count, char* word, int* word_length);

// returns character that was gotten
char get_guess();

// sets the corresp
void apply_guess(char* word, int* known_word, int word_length, char guessed_char);

int did_win(int* known, int word_length);

void print_known_word(char* word, int* known_word, int word_length);

void guessed_letters(char guesses[], int size);

#endif