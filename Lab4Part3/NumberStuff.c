#include "NumberStuff.h"

double min(double a, double b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

double max(double a, double b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

double average(double num_1, double num_2, double num_3, double num_4, double num_5) {
	return (num_1 + num_2 + num_3 + num_4 + num_5) / 5;
}

double high_value(double num1, double num2, double num3, double num4, double num5) {
	double highest = num1;

	highest = max(highest, num2);
	highest = max(highest, num3);
	highest = max(highest, num4);
	highest = max(highest, num5);

	return highest;
}

double low_value(double num1, double num2, double num3, double num4, double num5) {
	double lowest = num1;

	lowest = min(lowest, num2);
	lowest = min(lowest, num3);
	lowest = min(lowest, num4);
	lowest = min(lowest, num5);

	return lowest;
}

double read_number(FILE* infile) {
	double number = 0.0;
	fscanf(infile, "%lf", &number);

	return number;
}

int instructions()
{

	int call = 0;

	printf("Enter a number to perform the corresponding operation: \n 1. Average \n 2. High Value \n 3. Low Value\n");
	scanf("%d", &call);

	return call;

}

void perform_computation(int mode, double num1, double num2, double num3, double num4, double num5) {
	if (mode == 1) {
		double average_number = 0.0;
		average_number = average(num1, num2, num3, num4, num5);
		
		printf("Average: %.3lf\n", average_number);
	}
	else if (mode == 2) {
		double high_value_number = 0.0;
		high_value_number = high_value(num1, num2, num3, num4, num5);

		printf("High value: %.3lf\n", high_value_number);
	}
	else if(mode == 3) {
		double low_value_number = 0.0;
		low_value_number = low_value(num1, num2, num3, num4, num5);

		printf("Low value: %.3lf\n", low_value_number);
	}
	else{
		number_stuff(num1, num2, num3, num4, num5);
	}
}

void number_stuff(double num_1, double num_2, double num_3, double num_4, double num_5){
	int mode = 0;
	mode = instructions();
	perform_computation(mode, num_1, num_2, num_3, num_4, num_5);
}