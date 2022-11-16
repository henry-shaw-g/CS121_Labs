#ifndef SENTENCES_H
#define SENTENCES_H



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h> 

int random_num(int num_words);

void get_word(char* words[], int num_words, char* destination);

void capitalize_first_letter(char input[]);

void build_sentence(char* artical[], char* noun[], char* verb[], char* preposition[]);

#endif