#ifndef PAY_FUNCTIONS_H
#define PAY_FUNCTIONS_H

#include <stdio.h>

/***
 * prompt(int)
 * Prompt the user of the employee id and calls the appropriate function
 * 
 * Input:
 * int id: the employee code (1: manager, 2: hourly, 3: decorator, 4: janitor)
 * 
 * Returns: zero to continue prompting, and -1 to end the program
 * 
 */
int prompt(int id);

/***
 * hourlyworkers(void)
 * Prompts the user for how many hours the hourly worker worked then calculates and prints their pay
 * 
 * Input:
 * void
 * 
 * Returns: zero to continue prompting
 * 
 */
int hourlyworkers(void);

/***
 * cakedecorators(void)
 * Prompts the user for how many cakes the cake decorator decorated then calculates and  prints their pay
 * 
 * Input:
 * void
 * 
 * Returns: zero to continue prompting 
 * 
 */
int cakedecorators(void);

/***
 * janitors(void)
 * Prompts the user for how many days the janitor worked then calculates and prints their pay
 * 
 * Input:
 * void
 * 
 * Returns: zero to continue prompting
 * 
 */
int janitors(void);

#endif