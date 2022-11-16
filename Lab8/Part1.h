#ifndef PART1_H
#define PART1_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fill_array_from_file(FILE* infile, int arr[], int allocated);

void reverse_array(int arr[], int size);

#endif