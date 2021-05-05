#include <iostream>

#include "CppBestPractices.h"

// main function
int main()
{
	std::cout << "C++ Best Practices\n*****************" << std::endl;
	
	// sums values
	int result = cpp_best_prac::summer(1, 2, 3, 4, 5);
	std::cout << "summer(): " << result << std::endl;

	// writes to file.
	std::cout << "writeCountFile(): ";
	if (cpp_best_prac::writeCountFile())
		std::cout << "Success" << std::endl;
	else
		std::cout << "Failure" << std::endl;

	// create and destroy class
	{
		// create
		std::cout << std::endl;
		cpp_best_prac::raii temp(1);

		// new line
		std::cout << std::endl;

		// destroy
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}