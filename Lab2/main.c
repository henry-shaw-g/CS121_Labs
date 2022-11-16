/*
	Authors: Henry Shaw, Reece Ozanich, Asaf Kedar
	Description: does something
*/


#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h> 

int main(void)
{
	//#1
		double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
		double slope = 0.0, x_midpoint = 0.0, y_midpoint = 0.0, y_intercept = 0.0, inverted_slope=0;

		// prompt user for two points
		printf("input x1 y1 x2 y2: ");
		scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

		// compute slope of the line between the two points
		slope = (y2 - y1) / (x2 - x1);

		// Compute the coordinates of the midpoint of the segment line

		x_midpoint = (x2 + x1) / 2;

		y_midpoint = (y2 + y1) / 2;

		//Compute the slope of the perpendicular bisector
		inverted_slope = -pow(slope, -1);
	

		// Compute the y intercept of the perpendicular bisector
		// y_midpoint = slope_bisector(x_midpoint) + y_intercept
		// y_intercept = ymidpoint - slope_bisector(x_midpoint)
		y_intercept = y_midpoint - inverted_slope * x_midpoint;

		//print
		printf("original points: (%.1lf,%.1lf) & (%.1lf,%.1lf)\n", x1, y1, x2, y2);
		printf("perpendicular bisector: y=%lfx+%lf\n", inverted_slope, y_intercept);



	//#2
		// Allocate memory for input variables
		double height_feet = 0.0, height_inches = 0.0, weight = 0.0;
		// Allocate memory for output variables
		double bmi = 0.0;

		printf("Enter weight in pounds: \n");
		scanf("%lf", &weight);

		printf("Enter height in feet: \n");
		scanf("%lf", &height_feet);

		height_inches = height_feet * 12;

		// calculate bmi from inputs
		bmi = ((weight) / pow(height_inches, 2)) * 703;

		// tell user they are overweight
		printf("Bmi: %lf\n", bmi);

		if(bmi<18){
			printf("go eat a sandwitch\n");
		}else if(bmi>=18&&bmi<25){
			printf("your what some guy abssesed with avrages claims is healthy\n");
		}else if(bmi>=25&&bmi<30){
			printf("go for a run \n");
		}else if (bmi >= 30){
			printf("have u heard of intermitant fasting\n");
		}

	// success
	return 0;

}



