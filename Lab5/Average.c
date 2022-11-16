#include "Average.h"

double read_file(FILE* infile) {
	double num = 0;
	fscanf(infile,"%lf", &num);
	return num;
}

double get_average(double total, int amount) {
	return total / amount;
}