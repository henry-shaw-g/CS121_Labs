#include"Charges.h" 

int main_part_1(void)
{

	FILE *infile = fopen("internet_data.txt", "r"), *outfile = fopen("internet_data_output.txt", "w");

	int customer_num = 0, month = 0, year = 0;
	double hours = 0.0, charge = 0.0, avg_cost = 0.0 ;

	fscanf(infile, "%d", &month);
	fscanf(infile, "%d", &year);
	
	fprintf(outfile, "%d ", month);
	fprintf(outfile, "%d\n\n", year);

	while (!feof(infile))
	{

		read_file(infile, &customer_num, &hours);

		get_user_charge(hours,&charge,&avg_cost);

		write_file(outfile, customer_num, charge, avg_cost);

	}

	fclose(infile);
	fclose(outfile);

	return 0;
}