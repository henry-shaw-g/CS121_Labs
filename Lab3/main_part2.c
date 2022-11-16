/*
	Authors: Henry, Reese, Asaf
	Description: The driver for the projectiles calculation problem.
		* Refer to headers.h for problem structure
*/

#include"projectiles.h"

int main2(void){

	double theta = 0.0, distance= 0.0, velocity = 0.0, time = 0.0, height = 0.0;

	// get angle of launch
 
	theta = get_theta();

	// get distance

	distance = get_distance();

	// get velocity

	velocity = get_velocity();

	// calculate time of flight

	time = calc_time(distance, velocity, theta);

	//calculate height

	height = calc_height(velocity, theta, time);

	// display results
	display_height(height);
	display_time(time);

}