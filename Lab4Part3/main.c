
#include "NumberStuff.h"

int main(void)
{
	int mode = 0;
	double num_1 = 0, num_2 = 0, num_3 = 0, num_4 = 0, num_5 = 0;

	FILE *infile;

	infile = fopen("input.txt", "r");

	num_1 = read_number(infile);
	num_2 = read_number(infile);
	num_3 = read_number(infile);
	num_4 = read_number(infile);
	num_5 = read_number(infile);

	/*
	mode = instruction();
	preform_computation(mode,num_1,num_2,num_3,num_4,num_5);
	*/

	number_stuff(num_1, num_2, num_3, num_4, num_5);

	
	fclose(infile);

	return 0;
}



