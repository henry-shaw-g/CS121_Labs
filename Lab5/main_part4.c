#include "MaxMin.h"

int main_part4(void)
{
	FILE* infile = fopen("numbers_to_min_max.txt", "r");

	double min = 0, max = 0, contendor = 0;

	min = read_number(infile);
	max = min;
	while(!feof(infile))
	{
		contendor = read_number(infile);
		min = get_min(min, contendor);
		max = get_max(max, contendor);

	}

	fclose(infile);

	printf("Max: %.4lf\nMin: %.4lf", max, min);
	return 0;

}