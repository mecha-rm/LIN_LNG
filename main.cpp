#include <iostream>

// C++ Best Practices for Developers
// Link: https://www.linkedin.com/learning/c-plus-plus-best-practices-for-developers/challenge-writing-an-integer-sum-method
// 3-6 - Chalenge
// write an integer sum method using variadic methods. It sums all the provided values.
// only needs to work with integers.

// returns final value.
int summer(int v)
{
	return v;
}

// variadic template function.
template<typename T, typename... Args>
T summer(T first, Args... args)
{
	return summer(args...) + first;
}

// main function
int main()
{
	int result = summer(1, 2, 3, 4, 5);
	std::cout << "summer(): " << result << std::endl;

	system("pause");
	return 0;
}