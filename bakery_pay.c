#include "bakery_pay.h"

int get_pay(int code){
	int values[4] = {1000, 20, 150, 120};
	return values[code - 1];
}
