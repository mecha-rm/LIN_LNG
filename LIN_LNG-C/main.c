// Learning C 
// Link: https://www.linkedin.com/learning/learning-c-5

/*includes*/
#include<stdio.h> // putchar, puts, printf
#include<stdlib.h>
#include<math.h> // the math header

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

	// Challenge 4 - Math Quiz
	{
		/*
		* Code the following using floats a and b (user input).
		*	- add the values
		*	- subtract the values
		*	- multiply the values
		*	- divide the values
		*	- set the value a to exponent b
		*	- square root both values
		*/

		printf("\n\nChallege 4\n************");

		// floats
		float a = 0, b = 0;
		
		// gets the values
		printf("\nType two numbers: ");
		scanf_s("%f", &a);
		scanf_s("%f", &b);

		// calculations
		printf("\n");
		printf("\n%f + %f = %f", a, b, a + b); // sum
		printf("\n%f - %f = %f", a, b, a - b); // difference
		printf("\n%f * %f = %f", a, b, a * b); // product
		printf("\n%f / %f = %f", a, b, a / b); // quotient
		printf("\npowf(%f, %f) = %f", a, b, powf(a, b)); // power
		printf("\nsqrt(%f) = %f", a, sqrtf(a)); // square root (a)
		printf("\nsqrt(%f) = %f", b, sqrtf(b)); // square root (b)
	}

	return 0;
}