#ifndef PART2_H
#define PART2_h

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_num();

// TODO: consider param for max index of frequency table
int compute_frequencies(int list[], int size, int frequency_table[], int frequency_table_size);

void print_table(int arr[]);

#endif