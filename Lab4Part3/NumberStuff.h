#ifndef NUMBER_STUFF_H
#define NUMBER_STUFF_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double min(double a, double b);

double max(double a, double b);

double read_number(FILE* infile);

double average(double num_1, double num_2, double num_3, double num_4, double num_5);

double high_value(double num1, double num2, double num3, double num4, double num5);

double low_value(double num1, double num2, double num3, double num4, double num5);

int instructions();

void perform_computation(int mode, double num1, double num2, double num3, double num4, double num5);

void number_stuff(double num1, double num2, double num3, double num4, double num5);

#endif