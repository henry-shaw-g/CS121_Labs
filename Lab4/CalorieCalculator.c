#include "CalorieCalculator.h"

int get_yes_or_no() {
	char response = '\0';

	scanf(" %c", &response); // whitespace for %c to ignore newlines

	if (response == 'y') {
		return 1;
	}
	else {
		return 0;
	}

}

double get_activity_multiplier() {
	double activity_multiplier = 0.0;

	printf("Do you consider yourself sedentary? (y/n): ");
	if (get_yes_or_no()) {
		// person is sedentary:
		activity_multiplier = SEDENTARY_MULTIPLIER;
		return activity_multiplier;
	}
	
	printf("Is your activity level low? (y/n): ");
	if (get_yes_or_no()) {
		// person is low activity:
		activity_multiplier = LOW_MULTIPLIER;
		return activity_multiplier;
	}

	printf("Is your activity level moderate? (y/n): ");
	if (get_yes_or_no()) {
		// person is medium activity:
		activity_multiplier = MODERATE_MULTIPLIER;
		return activity_multiplier;
	}

	printf("Is your activity level high, otherwise your activity level is extra? (y/n): ");
	if (get_yes_or_no()) {
		// person is high activiity level.
		activity_multiplier = HIGH_MULTIPLIER;
		return activity_multiplier;
	}
	
	printf("Your activity level is extra (get out of the gym bro).\n");
	activity_multiplier = HIGH_MULTIPLIER;
	return activity_multiplier;
}

char read_gender(FILE*infile)
{
	char temp = 0;
	fscanf(infile," %c",&temp);
	return temp;
}

double read_weight(FILE* infile)
{
	double temp = 0;
	fscanf(infile,"%lf",&temp);
	return temp;
}


double read_height(FILE*infile)
{
	double height = 0.0; 
	fscanf(infile, "%lf", &height);
	return height;
}

int read_age(FILE* infile) 
{
	int age = 0;
	fscanf(infile, "%d", &age);
	return age;
}

double calculate_bmr(char gender,double weight,double height, int age)
{
	if(gender=='m'){
		return  66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
	}
	else{
		return 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
	}
}

double calculate_caloric_intake(double bmr, double activity_multiplier) 
{
	return bmr * activity_multiplier;
}