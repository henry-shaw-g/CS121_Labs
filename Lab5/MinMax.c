#include "MaxMin.h" 

double read_number(FILE* infile){
	double temp = 0;
	fscanf(infile, "%lf", &temp);
	return temp;
}

double get_min(double a, double b){
	if (a < b){
		return a;
	}
	return b;
}

double get_max(double a, double b){
	if (a > b) {
		return a;
	}
	return b;
}