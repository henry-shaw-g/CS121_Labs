/*
	projects.c
	Authors: individuals of great chilledness
	Description: contains implementations for functions outlined in projectiles.h
*/

#include "projectiles.h"

double get_theta(void){
	double theta = 0;

	printf("Enter theta: ");
	scanf("%lf", &theta);

	return theta;
}
double get_distance(void) {
	double distance = 0.0;
	
	printf("Enter distance (ft): ");
	scanf("%lf", &distance);

	return distance;
}
double get_velocity(void){
	double velocity = 0;

	printf("Enter volocity: ");
	scanf("%lf",&velocity);

	return velocity;
}

double calc_time(double distance, double velocity, double theta){
	return  (distance) / (velocity * cos(theta));
}
double calc_height(double velocity, double time, double theta){
	return velocity * sin(theta) * time - ((G * pow(time,2)) / 2);
}

void display_time(double time) {
	printf("At the target distance, the projectile was in the air for time: %.3lf seconds.\n", time);
}

void display_height(double height) {
	printf("At the target distance, the projectile was at height: %.3lf feet\n", height);
}