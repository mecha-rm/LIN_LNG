#pragma once

// C uses the struct keyword, not the class keyword 
typedef struct Car
{
	char name[32]; // name
	int age; // age in years
	float worth; // worth in dollars
} Car;

// C does not allow member functions
// So you need to pass the variable you're referencing.

void CarToString(Car* car);