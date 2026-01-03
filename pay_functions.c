#include "pay_functions.h"
#include "bakery_pay.h"

int prompt(int id) {
    //If id is equal to -1, return -1 to end the program
    if (id == -1) {
        return -1;
    } else if (id != 1 && id != 2 && id != 3 && id != 4) {
        //If the id is equal to anything other than 1-4, print invalid statement and return 0 to continue prompting
        printf("Invalid pay code.\nPlease review the following options and try again.\n");
        printf("1: Managers\n2: Hourly Workers\n3: Cake Decorators\n4: Janitors\n");
        return 0;
    } else {
        //Call the appropriate function based on the id entered and return 0 to continue prompting, manager does not have a function as it is a fixed pay
        switch (id)
        {
        case 1:
            //Prints the manager's pay formatted to 2 decimal places.
            printf("The manager earned $%.2f this week.\n", get_pay(1)*1.0);
            break;
        case 2:
            //Calls the hourlyworkers function
            hourlyworkers();
            break;
        case 3:
            //Calls the cakedecorators function
            cakedecorators();
            break;
        case 4:
            //Calls the janitors function
            janitors();
            break;
        default:
            break;
        }
        //Returns 0 to continue prompting
        return 0;
    }
}

int hourlyworkers(void) {
    int hours_worked = 0;
    float pay = 0.0;

    //Prompts the user for how many hours the hourly worker worked
    printf("How many hours did they work? ");
    scanf("%d", &hours_worked);

    //Calculates the pay based on whether they worked over 40 hours or not
    if (hours_worked <= 40) {
        pay = hours_worked * get_pay(2);
    }
    else {
        //Overtime pay is $30.00 per hour
        pay = (40 *get_pay(2)) + ((hours_worked - 40) * 30.00);
    }

    //Prints the pay formatted to 2 decimal places
    printf("They earned $%.2f this week.\n", pay);
    return 0;
}

int cakedecorators(void){
    int cakes_decorated = 0;
    float pay = 0.0;

    //Prompts the user for how many cakes the cake decorator decorated
    printf("How many cakes did they decorate? ");
    scanf("%d", &cakes_decorated);

    //Calculates the pay
    pay = cakes_decorated * get_pay(3);

    //Prints the pay formatted to 2 decimal places
    printf("They earned $%.2f this week.\n", pay);
    return 0;
}

int janitors(void){
    int days_worked = 0;
    float pay = 0.0;

    //Prompts the user for how many days the janitor worked
    printf("How many days did they work? ");
    scanf("%d", &days_worked);

    //Calculates the pay
    pay = days_worked * get_pay(4);

    //Prints the pay formatted to 2 decimal places
    printf("They earned $%.2f this week.\n", pay);
    return 0;
}