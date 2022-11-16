
#ifndef PART2_H
#define PART2_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h> // pow, log

double revenue(int years);

// first year in which revenue(year) >= target_revenue
int predict(double target_revenue);

#endif
