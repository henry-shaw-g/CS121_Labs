/*
	Authors:
	Description:
*/

#include "gyms.h" 

int main(void){

	double exam1 = 0.0, exam2 = 0.0, lab1 = 0.0, lab2 = 0.0, project1 = 0.0, project2 = 0.0;
	double exam_average = 0.0, lab_average = 0.0, project_average = 0.0, weighted_average = 0.0;

	// get exam 1 score

	exam1 = get_score(EXAM,1);

	// get exam 2 score

	exam2 = get_score(EXAM,2);

	// get lab 1 score

	lab1 = get_score(LAB,1);

	// get lab 2 score

	lab2 = get_score(LAB,2);

	// get project 1 score 

	project1 = get_score(PROJECT, 1);

	// get project 2 score

	project2 = get_score(PROJECT, 2);

	// get exam average

	exam_average = calculate_average(exam1, exam2);

	// get lab average

	lab_average = calculate_average(lab1, lab2);

	// get project average 

	project_average = calculate_average(project1, project2);

	// get weighted average

	weighted_average = calculate_weighted_average(exam_average, lab_average, project_average);

	display_weighted_average(weighted_average);


	return 0;
}