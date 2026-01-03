#include <stdio.h>
#include "bakery_pay.h"
#include "pay_functions.h"

int main(void)
{
    int employee_id = 0;

    //Prints welcome message
    printf("Welcome to the pay calculator.\n");

    //This loop continues to prompt the user and then calls the prompt function until they enter -1 to end the program
    while (employee_id != -1)
    {
        printf("Enter the employee code (-1 to end): ");
        scanf("%i", &employee_id);
        //Reassigns employee_id to the return value of prompt (either 0 or 1) so that if -1 is entered, the loop will end
        employee_id = prompt(employee_id);
    }

    return 0;
}

/*
intended output:
Welcome to the pay calculator.
Enter the employee code (-1 to end): 0
Invalid pay code.
Please review the following options and try again.
1: Managers
2: Hourly Workers
3: Cake Decorators
4: Janitors
Enter the employee code (-1 to end): 3
How many cakes did they decorate? 5
They earned $750.00 this week.
Enter the employee code (-1 to end): 2
How many hours did they work? 48
They earned $1040.00 this week.
Enter the employee code (-1 to end): 1
The manager earned $1000.00 this week.
Enter the employee code (-1 to end): 4
How many days did they work? 4
They earned $480.00 this week.
Enter the employee code (-1 to end): -1
*/