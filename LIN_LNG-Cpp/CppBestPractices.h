#pragma once

// C++ Best Practices for Developers
// Link: https://www.linkedin.com/learning/c-plus-plus-best-practices-for-developers/challenge-writing-an-integer-sum-method

namespace cpp_best_prac
{
	// 3-6 - Chalenge
	// write an integer sum method using variadic methods. It sums all the provided values.
	// only needs to work with integers.

	// returns final value.
	int summer(int v);

	// variadic template function.
	template<typename T, typename... Args>
	T summer(T first, Args... args)
	{
		return summer(args...) + first;
	}


	// 4-6 - Challenge
	//creates a file named 'count.txt' that stores numbers 1 through 10 (one char per line).
	bool writeCountFile();

	// 5-5 - Challenge
	// write a class that takes in an int that gets constructed and destructed
	class raii
	{
	public:
		// constructor
		raii(int val);

		// destructor
		~raii();

	private:
		// values
		int valueInt;
		float valueFlt;


	protected:
	};
}