
#include "TaxBracket.h"


double read_quarter_payment(FILE* infile){
	double temp = 0;
	fscanf(infile, "%lf", &temp);
	return temp;
}

double get_annual_income(double sum, double num) {
	return sum / num * 4.0;
}

char get_tax_bracket(double income) {
	char bracket = LOW_INCOME;

	if (income > 200000) {
		bracket = HIGH_INCOME;
	}
	else if (income > 15000) {
		bracket = MEDIUM_INCOME;
	}
	
	return bracket;
}

void display_tax_bracket(char tax_bracket) {
	printf("Tax bracket: %c\n", tax_bracket);
}