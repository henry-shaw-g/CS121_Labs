
#include "Average.h"

int main_part2(void){
	FILE* infile = fopen("numbers_to_average.txt", "r"), *outfile = fopen("average_of_numbers.txt", "w");

	double total = 0, average = 0;
	int number_of_num=0;

	while(!feof(infile))
	{
		total += read_file(infile);

		number_of_num++;
	}

	average = get_average(total,number_of_num);

	fprintf(outfile, "%lf", average);

	fclose(infile);
	fclose(outfile);

	printf("Average of numbers written to average_of_numbers.txt\n");
	return 0;
}