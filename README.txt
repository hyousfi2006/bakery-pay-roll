Bakery Payroll
Hadjar Yousfi

This program calculates the pay of 4 different types of employees at a Bakery.
The user is prompted for a employee id in order to get started.
The program then detects which id was submitted. If it was a value that was not 
within 1-4 corresponding to each of the employees, then it puts out an invalid statement.
Then it calls the individual function for the employee's specific calculations. 

To compile:
Move to the folder containing the program and type the following:
gcc employee_pay.c pay_functions.c bakery_pay.c -g -o runPay
./runPay

You will be prompted to enter an employee id. 
Enter any number between 1-4 or -1 to exit the program. 

Sources: This program was written by Hadjar Yousfi.