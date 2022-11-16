#include "PayrollProgram.h"

int main(void)
{
	FILE* outfile = fopen("paid.txt", "w"), *infile = fopen("payroll.txt", "r");

	Employee payroll[200];
	int employee_num = 0;
	double total_payment=0, avrage_payment=0, max_payment=0, min_payment = 0;

	employee_num = read_payroll_record(infile, payroll);
	for (int i = 0; i < employee_num; i++) {
		process_payment(&payroll[i]);
	}
	total_payment = compute_sum_of_payments(payroll, employee_num);
	avrage_payment = compute_average_payment(total_payment,employee_num);
	max_payment = compute_maximum_payment(payroll, employee_num);
	min_payment = compute_minimum_payment(payroll, employee_num);
		

	write_output_data(outfile, total_payment, avrage_payment, min_payment, max_payment);
	printf("Walmart payroll processing complete :).\n");

	fclose(infile);
	fclose(outfile);

	return 0;
}