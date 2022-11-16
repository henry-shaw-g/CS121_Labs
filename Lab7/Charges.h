#ifndef CHARGES_H
#define CHARGES_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// Charge constants
#define FIXED_RATE 7.99
#define FIXED_RATE_MAX_HOURS 10
#define EXTRA_RATE 1.99

// rounds a real number (floating-point) two two decimals
double round_money(double money);

// determines (based on hours used) the total charge and average charge per hour for a user
void get_user_charge(double hours, double *charge, double *avg_cost);

void read_file(FILE *infile, int* customer_num, double* hours);

void write_file(FILE* outfile, int customer_num, double charge, double avg_hourly_charge);

#endif