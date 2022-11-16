#include "Charges.h"


double round_money(double money) {
	// shift to the left by 2 decimal places
	money *= 100;
	// truncate to integer and then recast to double and shift back by 2 decimal places
	money = (double)((int)money) / 100;

	return money;
}

void get_user_charge(double hours, double* charge, double* avg_hourly_charge) {
	// apply total rate for < 10 hours
	*charge = FIXED_RATE;

	// apply extra rate to extra hours
	if (hours > FIXED_RATE_MAX_HOURS) {
		hours -= FIXED_RATE_MAX_HOURS;
		*charge += hours * EXTRA_RATE;
	}

	// compute average hourly charge
	*avg_hourly_charge = *charge / hours;

	// round both, 1 or none here?
	*charge = round_money(*charge);
	*avg_hourly_charge = round_money(*avg_hourly_charge);
}

void read_file(FILE* infile ,int* customer_num, double* hours)
{
	
fscanf(infile, "%d", customer_num);
fscanf(infile, "%lf", hours);

}

void write_file(FILE* outfile, int customer_num, double charge, double avg_hourly_charge) {
	fprintf(outfile, "Customer: %d, Total charge: %.3lf, Avg. hourly charge: %.3lf\n\n", 
		customer_num, charge, avg_hourly_charge);
}