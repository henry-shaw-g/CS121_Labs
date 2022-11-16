/*
	Authors: Asaf, Reese, 
	Description: Calculates BMI
	Structure Chart:
	- Calculate BMI
		- Get Height and Weight
		- Calculate BMI
			- Convert feet to inches
		- Display BMI
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double get_weight(void);
double get_height(void);
double convert_feet_to_inches(double height_in_feet);
double calculate_bmi(double weight_in_pounds, double height_in_inches);
void display_bmi(double bmi);

int main1(void) {
	// input variables
	double weight = 0.0, height_feet = 0.0;
	// calculated variables
	double height_inches = 0.0, bmi = 0.0;

	// get height & weight
	weight = get_weight();
	height_feet = get_height();

	// convert height into inches
	height_inches = convert_feet_to_inches(height_feet);

	// calculate bmi
	bmi = calculate_bmi(weight, height_inches);

	// output bmi
	display_bmi(bmi);


	return 0;
}

double get_weight(void) {
	double weight = 0.0;

	printf("Enter weight(lbs): ");
	scanf("%lf", &weight);

	return weight;
}
double get_height(void){
	double height = 0;

	printf("Enter Hight(ft): ");
	scanf("%lf",&height);

	return height;
}
double convert_feet_to_inches(double height_in_feet){
	return height_in_feet * 12;
}
double calculate_bmi(double weight_in_pounds, double height_in_inches){
	return ((weight_in_pounds) / ((height_in_inches * height_in_inches)) * 703);
}
void display_bmi(double bmi){
	printf("BMI: %.2lf", bmi);
}