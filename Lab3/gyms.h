/*
	gyms.h
	Authors: 
*/

#ifndef GYM_H
#define GYM_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define EXAM 1
#define LAB 2
#define PROJECT 3

#define EXAM_WEIGHT 0.30
#define PROJECT_WEIGHT 0.15
#define LAB_WEIGHT 0.05

double get_score(int type, int number);

double calculate_average(double score1, double score2);
double calculate_weighted_average(double average_exam_score, double average_lab_score, double average_project_score);

void display_weighted_average(double weighted_average);

#endif