/*
	Authors: Reese, Asaf, Henry
	Description:
	Structure:
		- Find height and flight time of projectile
			- Get trajectory
				- Get launch angle (theta, radians)
				- Get launch speed (velocity, ft/s)
				- Get distance (distance, ft)
			- Calculate the flight time at the distance
			- Calculate the height at the flight time
			- Display the height and time
*/

// [Gaurd Header]
#ifndef PROJECTILES_H
#define PROJECTSILE_H

// [Includes and build warning suppresion]
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// [Constants]
#define G 32.17 // ft/s^2

double get_theta(void);
double get_distance(void);
double get_velocity(void);

double calc_time(double distance,double velocity, double theta);
double calc_height (double volocity, double time,double theta);

void display_time(double time);
void display_height(double height);


#endif