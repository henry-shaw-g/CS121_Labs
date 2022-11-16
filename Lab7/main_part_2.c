/*
	Driver program for part 2 of lab 7
	Authors: we 
*/

#include "Part2.h"

int main(void) {

	FILE * outfile = fopen("revenues_of_broadway.txt", "w");

	int year = 0;
	int predicted_year = 0;
	double earnings = 0.0;

	predicted_year = predict(1e6);

	// for every year until predicted year including and after 1984
	for (year = 0; year <= predicted_year; year++) //for (earnings <= 1e6) 
	{
		earnings = revenue(year);
		fprintf(outfile, "Year: %d  ", year + 1984);
		fprintf(outfile, "Revenue: %.3lf million\n\n", earnings);

	}

	return 0;
}