#include "CppBestPractices.h"
#include <iostream>

#include <filesystem>
#include <fstream>
#include <string>

// 3-6 - Chalenge
// returns final value
int cpp_best_prac::summer(int v)
{
	return v;
}

// 4-6 - Challenge
bool cpp_best_prac::writeCountFile()
{
	// file name
	const std::string FILE_NAME = "count.txt";
	
	// file
	// TODO: you're supposed to use std::filesystem, but it didn't have ofstream
	// std::filesystem::path file{ FILE_NAME };
	// std::filesystem::ofstream fileStream{ file };
	
	std::ofstream file;

	try
	{
		// opens file
		file = std::ofstream(FILE_NAME);

		if (!file)
			throw std::runtime_error("file not found, or could not be opened.");

		// writes numbers 1 through 10, 1 number per line.
		for (int n = 1; n <= 10; n++)
		{
			// writes number and new line
			if (n < 10)
				file << n << "\n";
			else // number only
				file << n;
		}
			

		file.close();

		// write success
		return true;
	}
	catch (std::exception e) // exception
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	catch(std::string errorMessage) // string exception
	{
		std::cout << errorMessage << std::endl;
	}
	catch (...)
	{
		std::cout << "Error Occurred." << std::endl;
	}
	
	// write failure
	return false;
}

// 5-5
// RAII CLASS
// constructor
cpp_best_prac::raii::raii(int val) : valueInt(val)
{
	// integer
	std::cout << "valueInt created: " << valueInt << std::endl;

	// float
	valueFlt = 3.14F;
	std::cout << "valueFlt created: " << valueFlt << std::endl;
}

// destructor
cpp_best_prac::raii::~raii()
{
	std::cout << "valueInt destroyed: " << valueInt << std::endl;
	std::cout << "valueFlt destroyed: " << valueFlt << std::endl;
}
