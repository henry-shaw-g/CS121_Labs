#include "PayrollProgram.h"

// read file record into employee struct
void read_employee_record(FILE* payroll_file, Employee* employee_ptr){
	char trash_can;

	fgets(employee_ptr->name, 200, payroll_file);
	fscanf(payroll_file, " %c", &(employee_ptr->title));
	fscanf(payroll_file, "%lf", &(employee_ptr->hours_worked));
	fscanf(payroll_file, "%lf", &(employee_ptr->payrate));
	
	fscanf(payroll_file, "%c", &trash_can); // scanf bad
}

// read the wholefile into employee array
int read_payroll_record(FILE * payroll_file, Employee employee_arr[]){
	int num = 0;
	for (int i = 0; !feof(payroll_file); i++) {
		read_employee_record(payroll_file, &employee_arr[i]);
		num++;
	}
	return num;
}

// get the minimum payment
double compute_minimum_payment(Employee employees[200], int employee_num)
{

	double min_payment = employees[0].payment;

	for(int index = 1; index < employee_num; index++)
	{
		if (employees[index].payment < min_payment)
		{
			min_payment = employees[index].payment;
		}
	}

	return min_payment;

}

// get the maximum payment
double compute_maximum_payment(Employee employees[200], int employee_num)
{
	double max_payment = 0;

	for(int index = 0; index < employee_num; index++)
	{
		if (employees[index].payment > max_payment)
		{
			max_payment = employees[index].payment;
		}
	}

	return max_payment;

}

// get the sum of all employee payments
double compute_sum_of_payments(Employee employees[200], int employee_num)
{
	double total_payment = 0.0;

	for(int index = 0; index < employee_num; index++)
	{
		total_payment += employees[index].payment;
	}

	return total_payment;
}


// get and apply an employee's payment (functional programmers seethe)
double process_payment(Employee* employee) {
	double normal_hours = employee->hours_worked, overtime_hours = 0;

	// get overtime hours & normal hours
	if (normal_hours > OVERTIME_HOURS) {
		overtime_hours = normal_hours - OVERTIME_HOURS;
		normal_hours -= OVERTIME_HOURS;
	}

	// get the employees overtime rate
	double overtime_rate = BASIC_OVERTIME_RATE;
	if (employee->title == MANAGER_TITLE_SYMBOL) {
		overtime_rate = MANAGER_OVERTIME_RATE;
	}

	double payment = normal_hours * employee->payrate + overtime_hours * overtime_rate;
	employee->payment = payment;
	return payment;
}

// literally total / num
double compute_average_payment(double total_payment, int employee_num)
{
	return total_payment / employee_num;
}

// just write to output file
void write_output_data(FILE* paid_file, double total_payment, double average_payment, 
	double minimum_payment, double maximum_payment)
{
	fprintf(paid_file, "total: %lf\naverage payment: %lf\nMinimum payment: %lf\nMaximum payment: %lf",total_payment,average_payment,minimum_payment,maximum_payment);
	}