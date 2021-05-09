// Learning C 
// Link: https://www.linkedin.com/learning/learning-c-5

/*includes*/
#include<stdio.h> // putchar, puts, printf
#include<stdlib.h>
#include<math.h> // the math header
#include<string.h>

// user defined files
#include "Car.h";

#define PI 3.14159F
#define ARR_DOU_SIZE 10

// prototypes
void printHelloWorld(); // including void in the brackets is optional.

int add(int, int);
int subtract(int, int);

// 3-13 - Challenge 7 - check value relative to 10
void evaluate(int);

// reduces value by 10
void minus10(int*);

// capitalizes all chars in a string
// this doesn't need to return anything, but it does.
char* toUpperAll(char*, int);


// hello world
void printHelloWorld()
{
	puts("\nHello World!");
}

// addition
int add(int x, int y)
{
	return x + y;
}

// subtract
int subtract(int x, int y)
{
	return x - y;
}

// 3-13 - Challenge 7 - check value relative to 10
void evaluate(int x)
{
	// check relative to 10
	if (x < 10) // less than 10
	{
		printf("\n%d is less than 10.", x);
	}
	else if (x > 10) // greater than 10
	{
		printf("\n%d is greater than 10.", x);
	}
	else if (x == 10) // equal to 10
	{
		printf("\n%d is equal to 10.", x);
	}
}

// subtracts a value by 10.
void minus10(int* value)
{
	*value = *value - 10;
}

// sends all to upper
char* toUpperAll(char* input, int len)
{
	char* ptr = input;

	// capitalizes all elements
	for (int i = 0; i < len; i++)
	{
		*ptr = toupper(*ptr);
		ptr = ptr + 1;
	}

	return input;
}

int main()
{
	putchar('A');
	puts("\nHello World!"); // adds new line char
	printf("Welcome to the C Language!\n"); // does not add new line char (needs \n to be added)
	printf("\"C\" is lower-level than C++");
	
	printf("\n\n%d + %d = %d", 2, 2, 2 + 2);
	printf("\nThis is a %s program", "C");

	// number print test
	{
		float num = 10;
		num = 5;

		printf("\nNumber: %f", num);
	}

	// // get user input
	// {
	// 	int c = 0;
	// 	printf("\n\nType a letter: ");
	// 	c = getchar();
	// 	printf("You typed '");
	// 	putchar(c); // displays char, not int.
	// 	printf("' \n");
	// 
	// 	// characters in c are read like a string of chars.
	// 	int a = 0, b = 0;
	// 	printf("\nType two letters: ");
	// 	a = getchar();
	// 	b = getchar();
	// 	
	// 	/* 
	// 	 * NOTE: this is supposed to get the two characters you type in.
	// 	 * However, due to the input with the c variable, it saves the first letter...
	// 	 * inputted as the second letter. You can fix this by commenting out the c input calls.
	// 	*/
	// 	printf("You typed '");
	// 	putchar(a);
	// 	printf("' and '");
	// 	putchar(b);
	// 	printf("'. \n");
	// }

	// {
	// 	float x = 0.0F;
	// 
	// 	printf("\nType a number: ");
	// 
	// 	/*
	// 	* NOTE
	// 	* 1. for some reason regular 'scanf' didn't work, so you used 'scanf_s'
	// 	* 2. getting input before this caused it to skip.
	// 	*	- this probably has something to do with an input character left unaccounted for.
	// 	*	- as such, that other function has been commented out.
	// 	*	- otherwise this gets skipped.
	// 	*/
	// 	scanf_s("%f", &x);
	// 	
	// 	printf("\nNumber: %f\n", x);
	// }

	// strings (char arrays)
	{
		// for explicit size setting, make it your desired size + 1 to...
		// leave space for the null char (/0).
		char string[] = "string";
		char input[64];

		// scanf star
		// scanf stops reading at the first whitespace char.
		// it overflows if the stream size is larger than the array itself.
		// scanf_s("%s", input);

		printf("\nThe string is %s", string);
		printf("\n\nEnter a string (no more than 63 characters): ");

		// fgets
		// fgets is for reading in lines for a file, but it can be used for string input too.
		// this cuts off early if you provided more data than it can store.
		fgets(input, 64, stdin);
		puts("\nString provided: ");
		puts(input);
	}

	// // 2-21 - Challenge 4 - Math Quiz
	// {
	// 	/*
	// 	* Code the following using floats a and b (user input).
	// 	*	- add the values
	// 	*	- subtract the values
	// 	*	- multiply the values
	// 	*	- divide the values
	// 	*	- set the value a to exponent b
	// 	*	- square root both values
	// 	*/
	// 
	// 	printf("\n\nChallege 4\n************");
	// 
	// 	// floats
	// 	float a = 0, b = 0;
	// 	
	// 	// gets the values
	// 	printf("\nType two numbers: ");
	// 	scanf_s("%f", &a);
	// 	scanf_s("%f", &b);
	// 
	// 	// calculations
	// 	printf("\n");
	// 	printf("\n%f + %f = %f", a, b, a + b); // sum
	// 	printf("\n%f - %f = %f", a, b, a - b); // difference
	// 	printf("\n%f * %f = %f", a, b, a * b); // product
	// 	printf("\n%f / %f = %f", a, b, a / b); // quotient
	// 	printf("\npowf(%f, %f) = %f", a, b, powf(a, b)); // power
	// 	printf("\nsqrt(%f) = %f", a, sqrtf(a)); // square root (a)
	// 	printf("\nsqrt(%f) = %f", b, sqrtf(b)); // square root (b)
	// }

	// conditional statements
	// {
	// 	int x = 1, y = 2, z = 1;
	// 
	// 	printf("\nx = %d, y = %d, z = %d", x, y, z);
	// 
	// 	if (x == z)
	// 	{
	// 		printf("\nx is equal to z");
	// 	}
	// 	else
	// 	{
	// 		printf("\nx is not equal to z");
	// 	}
	// 
	// 	// switch statement
	// 	switch (y)
	// 	{
	// 	case 0:
	// 		printf("\ny = 0");
	// 		break;
	// 	case 1:
	// 		printf("\ny = 1");
	// 		break;
	// 	case 2:
	// 		printf("\ny = 2");
	// 	default:
	// 		printf("\ny is some value.");
	// 	}
	// }


	// 3-3 - Challenge 5 - make a decision
	{
		int input = 0;
		
		printf("\nChallenge 5\n**********\n");

		printf("Provide Integer Input: ");
		scanf_s("%d", &input);

		// checks input (this could also work with an if statement)
		switch (input)
		{
		case 1:
			printf("Red");
			break;
		case 2:
			printf("Green");
			break;
		case 3:
			printf("Blue");
			break;
		default:
			printf("No colour set.");
			break;
		}

		printf("\n");
	}

	// 3-7 - Challenge 6 - output series of numbers
	{
		printf("Challenge 6\n********");
		
		// 1 - 20
		for (int i = 1; i <= 20; i++)
		{
			printf("\nL1: %d\n", i);
		}

		// -10 - 10 (even only)
		int x = -10;

		while (x <= 10)
		{
			printf("\nL2: %d\n", x);
			x += 2;
		}
	}

	// function test
	{
		printHelloWorld();
		printf("\n%d + %d = %d", 10, 15, add(10, 15));

	}

	// 3_13 - Challenge 7 - evaluate a number
	{
		printf("\n");
		printf("\nChallenge 7\n**********");
		evaluate(8);
		evaluate(10);
		evaluate(12);
	}

	// functions
	{
		int ch = 'a';

		printf("\n\n");
		printf("Original: %c\n", ch);
		printf("Lowercase: %c\n", tolower(ch));
		printf("Uppercase: %c\n", toupper(ch));
		
		// checks to see if it's a letter or not.
		if(isalpha(ch))
			printf("IsAlpha: %c returned true.\n", ch);
		else
			printf("IsAlpha: %c returned false.\n", ch);

		// checks to see if it's a value from 0 to 9.
		if (isdigit(ch))
			printf("IsDigit: %c returned true.\n", ch);
		else
			printf("IsDigit: %c returned false.\n", ch);
	}

	// string function
	{
		// this skips if the input stream still has data.

		char str[] = "How long is this string?";
		int len = strlen(str);

		printf("\nHow long is the string below?\n");
		puts(str);
		printf("It is %d characters long.\n", len);
		
		char strInput[64];
		int strInputLen = 0;

		printf("\n\nEnter a string (63 chars or less): ");
		fgets(strInput, 64, stdin);
		strInputLen = strlen(strInput); // does not count null char
		printf("\n%d characters were typed total", strInputLen);
	
	
		// copying strings
		char str1[8] = "string1";
		char str2[8] = "string2";
		char str3[16]; // as long as the number is big enough, it's fine.

		// copying data
		// regular strcpy and strcat didn't work, so you needed to use strcpy_s and strcat_s.
		// regular strcpy and strcat do not require the inclusion of the byte amounts.
		// the byte size is the maximum amount of chars to copy, which is usually just the buffer size.
		strcpy_s(str3, sizeof(str3), str1); // copies first string from start of destination.
		strcat_s(str3, sizeof(str3), str2); // copies second string to end of data at destination.
		
		// make new lines
		printf("\n\n");
		puts(str3);
		printf("\n");

		// use fgets to avoid overflowing the input buffer.
	}


	// 4_4 - Challenge  8
	// {
	// 	// storage strings
	// 	char str1[32], str2 [32];
	// 	
	// 	// combined strings
	// 	char strx[128];
	// 
	// 	// challenge 8
	// 	printf("\nChallege 8\n************\n");
	// 
	// 	
	// 	// fgets
	// 	// fgets is for reading in lines for a file, but it can be used for string input too.
	// 	// this cuts off early if you provided more data than it can store.
	// 	printf("\nEnter string 1 (31 chars max): ");
	// 	fgets(str1, 32, stdin);
	// 
	// 	printf("\nEnter string 2 (31 chars max): ");
	// 	fgets(str2, 32, stdin);
	// 
	// 	puts("\nString provided: ");
	// 
	// 	strcpy_s(strx, sizeof(strx), str1); // copies first string from start of destination.
	// 	strcat_s(strx, sizeof(strx), str2); // copies second string to end of data at destination.
	// 
	// 	// prints result
	// 	printf("\nResult: \n");
	// 	puts(strx);
	// 	printf("\n");
	// }

	// single arrays
	{
		// note: using a constant variable to set the size doesn't work.
		// you need to use a macro or enum constant to set the size.
		const int SIZE = 10;

		
		int arrInt[] = { 0, 1, 2, 3, 4, 5 };
		double arrDou[ARR_DOU_SIZE] = { 32.2F, -12.0F, 4.1F };
		float arrFlt[3] = {1.21, 4.42, 52.1};
		char arrStr[] = "This is a string array."; // automatically adds null char (\0) to the end
		char arrChr[] = { 'C', 'h', 'a', 'r', '\0' }; // requires the null char (\0) to be added manually.

		// sizeof(arr);

		// sizeof returns the size in bytes of the data.
		// for string and char arrays, it includes the null character.
		//	- e.g. the sizeof the string "cat" would return 4, because it is actually ('c', 'a', 't', '\0').
		// to get the length, divide it by the sizeof the data type itself (e.g. sizeof(arrInt) / sizeof(int)).

		printf("\nArray Sizeofs:\n******\n");
		printf("\nInt: %d", sizeof(arrInt));
		printf("\nDouble: %d", sizeof(arrDou));
		printf("\nFloat: %d", sizeof(arrFlt));
		printf("\nString: %d", sizeof(arrStr));
		printf("\nChar: %d", sizeof(arrChr));
		printf("\n");
	}

	// multi-dimentional arrays
	{
		// 2D array
		int grid[3][3] =
		{
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}
		};


		// print values
		printf("\n");

		// row and column
		// row
		for (int row = 0; row < 3; row++)
		{
			printf("[");

			// column
			for (int col = 0; col < 3; col++)
			{
				printf("%d", grid[row][col]);

				// seperators
				if (col < 2)
					printf(", ");
			}

			printf("]\n");
		}

		
		// 2D array of strings
		// remember to leave space for null termination character (\0)
		char pets[4][5] =
		{
			"Cat",
			"Dog",
			"Newt",
			"Fish",
		};
		
		// change 'cat' to 'car'
		pets[0][2] = 'r';

		// you reference the strings using only the single dimension array notation.
		printf("\n");
		for (int i = 0; i < 4; i++)
		{
			printf("%s\n", pets[i]);
		}

		// array of fruits
		// the amount of columns needs to be specified
		// the amount of rows does not.
		char fruits[][10] =
		{
			"Apple",
			"Banana",
			"Orange"
		};
	}

	// 4_9 - Challenge 9 - Add a dimension to an array
	{
		// added the word elephant and changed the size accordingly.
		char animals[][10] = 
		{
			"Lion",
			"Tiger",
			"Bear",
			"Elephant"
		};
	}

	// structure
	{
		// the bank struct
		struct bank
		{
			char name[32];
			int account;
			float balance;
		};

		// creating the bank object
		struct bank checking = { "John", 31, 21.5F };
		struct bank savings;

		// you can't use the assignment operator (=) to set a char array...
		// after initialization. You must use fgets or a string copy function...
		// in order to set the value.
		{
			char name[] = "Jessica";
			strcpy_s(savings.name, sizeof(savings.name), name);
		}

		savings.account = 34;
		savings.balance = 241.13F;

		// you cannot forward declare tructs.
		// date of birth
		struct dateOfBirth
		{
			int year, month, day;
		};

		// person
		// struct contains another struct.
		struct person
		{
			char name[32];
			int age;
			struct dateOfBirth birth;
		};

	}

	// variables
	{
		int x;
		int y = 5;
		int z = 10;

		// use %p as placeholder
		// use &value to get memory location
		
		printf("\n");
		printf("\nx memory location: %p", &x);
		printf("\nx value: %d", x);
		printf("\ny memory location: %p", &y);
		printf("\ny value: %d", y);
		printf("\nz memory location: %p", &z);
		printf("\nz value: %d", z);
	}

	// pointers
	{
		int val;
		int* ptr;
		int val2;
		int* ptr2;

		ptr = &val; // gets memory location
		val = 35;
		ptr2 = ptr;
		val2 = *ptr;

		printf("\n\nAddress of Ptr: %p", ptr);
		printf("\nValue in Ptr: %d", *ptr);
		printf("\nValue in Variable: %d", val);
	}

	// 5_4 - Challenge 10 - create a char pointer
	{
		// Step 1 - variables
		char a, b, c;
		char* p;

		// assigning values
		a = 'A'; // Step 2
		p = &a; // Step 3
		b = *p; // Step 4
		p = &c; // Step 5
		*p = 'Z'; // Step 6

		printf("\n\nChallenge 10\n***********\n");
		printf("\nA value: %c", a);
		printf("\nB value: %c", b);
		printf("\nC value: %c", c);
		printf("\n");
	}

	
	// pointers and array
	{
		int arr[] = { 3, 52, -42, 14 };
		int* aptr;
		int len = sizeof(arr) / sizeof(int);

		aptr = arr; // array

		// printf
		printf("\nPrinting array data with pointer (length %d)", len);

		// print each element
		for (int i = 0; i < len; i++)
		{
			printf("\narr[%d] = %d", i, *aptr);
			aptr++; // aptr = aptr + 1 is also valid.
		}

		// printing elements in reverse.
		printf("\nPrinting in reverse.");

		// print each element
		for (int i = len - 1; i >= 0; i--)
		{
			aptr = aptr - 1; // aptr-- is also valid.
			printf("\narr[%d] = %d", i, *aptr);
		}
	}

	// pointer functions
	{
		int num = 24;

		printf("\n\nNumber Bofre: %d", num);
		minus10(&num);
		printf("\nNumber Now: %d", num);

		char str[5] = {"wolf"};
		char* res; // returns cannot be put into arrays, but they can be put into pointers.

		printf("\n\Word Bofore: %s", str);
		res = toUpperAll(str, sizeof(str) / sizeof(char));
		printf("\n\Word After: %s", str);
	}

	{
		// storing strings in a pointer array
		// this is more efficent than a 2D array, but editing the strings are difficult.
		char* numbers[11] =
		{
			"Zero",
			"One",
			"Two",
			"Three",
			"Four",
			"Five",
			"Six",
			"Seven",
			"Eight",
			"Nine",
			"Ten"
		};

		printf("\n");

		// shows each element
		for (int i = 0; i < 11; i++)
		{
			printf("\nnumbers[%d] value: %s", i, numbers[i]);
			printf("\nnumbers[%d] memory location: %p", i, numbers[i]);
			printf("\n");
		}
	}

	// malloc (manual memory allocation)
	{
		int intSize = sizeof(int);
		int* intPtr;
		
		intPtr = malloc(intSize);

		// int value
		printf("\n");
		if (intPtr == NULL)
		{
			printf("\nMemory allocation failure.");
		}
		else
		{
			printf("\nMemory allocation successful.");
		
			// puts data into allocated memory slot.
			*intPtr = 10;

			// print data
			printf("\nMemory Location: %p", intPtr);
			printf("\nValue Entered: %d", *intPtr);
		}
	}


	// 5_10 - Challenge 11 - Hello Program
	{
		int allocSize = 64;
		char* chrPtr;

		chrPtr = malloc(allocSize);

		// checks for valid memory
		printf("\n");
		if (chrPtr == NULL)
		{
			printf("\nHello unknown person (memory allocation failed).");
		}
		else
		{
			printf("\nMemory allocation successful.");
			printf("\nEnter your name (no more than %d characters): ", allocSize - 1);

			// gets the data and puts it into the chrPtr
			fgets(chrPtr, allocSize, stdin);
			printf("\Hello %s! Nice to meet you", chrPtr);
		}
	}


	// EX: uses enements from another file
	{
		Car vec = { "Honda", 5, 1000.25F };
		printf("\n\n");
		CarToString(&vec);
		printf("\n");
	}

	return 0;
}