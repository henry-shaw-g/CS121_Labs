// Header gaurd
#ifndef CALORIE_CALCULATOR_H
#define CALORIE_CALCULATOR_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Activity multiplier constants
#define SEDENTARY_MULTIPLIER 1.2
#define LOW_MULTIPLIER 1.375
#define MODERATE_MULTIPLIER 1.55
#define HIGH_MULTIPLIER 1.725
#define EXTRA_MULTIPLIER 1.9

// Gets a yes or no response from the user.
// Returns 1 (yes) or 0 (no)
int get_yes_or_no();

// Gets activity multiplier (multiplied by BMR) from sequence of questions to user.
double get_activity_multiplier();

double read_height(FILE* infile);

double read_weight(FILE* infile);

char read_gender(FILE* infile);

int read_age(FILE* infile);

double calculate_bmr(char gender,double weight, double height, int age);

double calculate_caloric_intake(double bmr, double activity_multiplier);

// Reads the person's data from the in file, prompts for activity level,
// and writes caloric intake into outfile
//double get_caloric_intake(FILE* infile, FILE* outfile);

#endif