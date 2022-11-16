/*
	main.c: Driver for the calorie calculate program
	input file format:
	- height: inches
	- weight: pounds
	- gender: m / f
	- age: years
	output file format:
	- caloric intake: calories
*/


#include "CalorieCalculator.h"

int main(void){

	FILE * infile, * outfile;

	infile = fopen("input.txt", "r");
	outfile = fopen("output.txt", "w");

	double height = 0.0, weight = 0.0, bmr = 0.0, caloric_intake = 0.0, activity_multiplier = 0.0;
	int age = 0; 
	char gender = '\0';

	// Read Height

	height = read_height(infile);

	// Read weight

	weight = read_weight(infile);

	// Read Gender

	gender = read_gender(infile);

	// Read Age

	age = read_age(infile);

	// Calculate BMR

	bmr = calculate_bmr(gender, weight, height, age);

	activity_multiplier = get_activity_multiplier();

	caloric_intake = calculate_caloric_intake(bmr, activity_multiplier);

	//print caloric intake to output
	fprintf(outfile,"%.2lf", caloric_intake);

	fclose(infile);
	fclose(outfile);

	printf("Finished.");
	return 0;
}