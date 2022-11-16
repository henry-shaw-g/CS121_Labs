// Tax Bracket functions

#ifndef TAX_BRACKET_H
#define TAX_BRACKET_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

#define LOW_INCOME 'l'
#define MEDIUM_INCOME 'm'
#define HIGH_INCOME 'h'

double read_quarter_payment(FILE* infile);
char get_tax_bracket(double income);

// takes a sum of quarterly payments and a count and returns the average of them multipled by 4
double get_annual_income(double sum, double num);

void display_tax_bracket(char tax_bracket);

#endif