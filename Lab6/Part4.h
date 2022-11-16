#ifndef PART4_H
#define PART4_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h> 
#include <stdlib.h>


// function that gets random number between -100 and 100
int pick_num();

// function that gets user's guess (until they make a valid guess)
int get_guess();

// function that tells user if their guess is correct, above or below
void is_correct_guess(int num,int guess);

void display_win(int guess_count);
#endif