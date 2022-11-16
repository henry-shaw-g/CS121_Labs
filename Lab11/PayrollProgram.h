/*
	PayrollProgram.h
	Desc: Official payroll computation program for walmart (real and true)
*/

#ifndef PAYROLL_PROGRAM_H
#define PAYROLL_PROGRAM_H

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#define OVERTIME_HOURS 40
#define BASIC_OVERTIME_RATE 1.5
#define MANAGER_OVERTIME_RATE 1.8

#define BASIC_TITLE_SYMBOL 'B'
#define MANAGER_TITLE_SYMBOL 'M'

typedef struct employee_t {
	char name[100]; // name of employee (last, first)
	char title; // title of employee (M: manager, B: BASIC employee)
	double hours_worked;
	double payrate;
	double payment;
} Employee;

// read 1 file record into employee struct
void read_employee_record(FILE* payroll_file, Employee* employee_ptr);

// read the wholefile into employee array
int read_payroll_record(FILE * payroll_file, Employee employee_arr[]);

// get the minimum payment
double compute_minimum_payment(Employee employees[200], int employee_num);

// get the maximum payment
double compute_maximum_payment(Employee employees[200], int employee_num);

// get the sum of all employee payments
double compute_sum_of_payments(Employee employees[200], int employee_num);

// get the payment for each employee and apply to their structure (also returns their payment)
double process_payment(Employee* employee);

// literally total / num
double compute_average_payment(double total_payment, int employee_num);

// just write to output file
void write_output_data(FILE* paid_file, double total_payment, double average_payment, 
	double minimum_payment, double maximum_payment);
#endif