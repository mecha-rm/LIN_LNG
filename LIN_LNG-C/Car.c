#include "Car.h"

// prints car values
void CarToString(Car* car)
{
	printf("Name: %s | Age: %d | Worth: %f", car->name, car->age, car->worth);
}
