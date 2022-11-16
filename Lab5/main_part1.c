
#include "TaxBracket.h"

int main_part1(void)
{

	FILE* infile = fopen("quarterly_payments.txt", "r");

	char tax_bracket = '\0';
	int quarterly_reports = 0;
	double total = 0;

	while (!feof(infile)) {
		total += read_quarter_payment(infile);
		quarterly_reports++;
	}
	fclose(infile);
	
	double annual_income = get_annual_income(total, quarterly_reports);
	tax_bracket = get_tax_bracket(annual_income);
	display_tax_bracket(tax_bracket);
	


	return 0;
}