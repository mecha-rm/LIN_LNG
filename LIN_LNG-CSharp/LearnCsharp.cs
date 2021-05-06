// Course: https://www.linkedin.com/learning/learning-c-sharp-2018
using System;
using System.Collections.Generic;
using System.Text;

namespace LIN_LNG_CSharp
{
    class LearnCsharp
    {
        // prints hello world (or input)
        public static void HelloWorld()
        {
            // var str = Console.ReadLine();
            var str = "Hello World";
            Console.WriteLine(str);
        }

        // 1-4: Multiple Choice Questions
        public static void Challenge1()
        {
            Console.WriteLine("\nChallenge 1 - Multiple Choice");

            // ask for name, age, and birht month, then print them.
            string name, age, birthMonth;
            
            Console.Write("What is your name? ");
            name = Console.ReadLine();

            Console.Write("What is your age? ");
            age = Console.ReadLine();

            Console.Write("What month were you born? ");
            birthMonth = Console.ReadLine();

            // print results
            Console.WriteLine("\nName: {0}", name);
            Console.WriteLine("Age: " + age);
            Console.WriteLine("Birth Month: " + birthMonth);

            // prints zodiac sign (doesn't account for different letter cases, or most months).
            if(birthMonth == "march")
            {
                Console.WriteLine("You are an Aries");
            }
            else if(birthMonth == "april")
            {
                Console.WriteLine("You are an Taurus");
            }
            else if(birthMonth == "may")
            {
                Console.WriteLine("You are a Gemini");
            }
            
        }

        // 1-7: Passcode
        public static void Challenge2()
        {
            // passcode and user input
            const string PASSCODE = "secret";
            string userInput = "";

            // number of attempts
            int attempts = 0; // number of attempts
            bool oneAttempt = true; // if 'true', it only allows one attempt.

            // while loop added as part of later step.
            while(userInput != PASSCODE)
            {
                Console.WriteLine("\nChallenge 2");
                Console.Write("Enter passcode: ");
                userInput = Console.ReadLine();

                // validity
                Console.WriteLine((userInput == PASSCODE) ? "Access granted." : "Access denied.");

                // has asked and gotten a respons
                attempts++;

                // if only one attempt is allowed, break the loop.
                if(attempts >= 1 && oneAttempt)
                {
                    break;
                }
            }
        }

        // 1-11: Count up to 10, then back to 1
        public static void Challenge3()
        {
            // count from 1 to 10, then back to 1. Do this 5 times
            // no if statements

            // challenge
            Console.WriteLine("\nChallenge 3");

            // loops
            for (int t = 1; t <= 5; t++)
            {
                // counting up
                for (int n = 1; n <= 10; n++)
                {
                    Console.WriteLine("Time #{0}, Number = {1}", t, n);
                }

                // counting down
                for(int n = 10; n > 0; n--)
                {
                    Console.WriteLine("Time #{0}, Number = {1}", t, n);
                }

                // writes the line
                Console.WriteLine("\n");
            }

            // counting is finished.
            Console.WriteLine("Done Counting.");
        }


        // 1-19: enter student name and grade one-by-one
        public static void Challenge4()
        {
            // ask for student number count.

            // get student name and grade from console input.
            string name = "X", grade = "A";

            // lists of values
            List<string> names = new List<string>();
            List<string> grades = new List<string>();

            // fourth challenge
            Console.WriteLine("\nChallenge 4");

            // while the name is not blank.
            while (name != "")
            {
                Console.Write("Enter the Student's Name: ");
                name = Console.ReadLine();

                // done entering students
                if (name == "")
                    break;

                Console.Write("Enter the Student's Grade: ");
                grade = Console.ReadLine();

                names.Add(name);
                grades.Add(grade);


                Console.WriteLine("\n");
            }

            Console.WriteLine("\nPrinting Content");

            // prints values
            for(int i = 0; i < names.Count; i++)
            {
                Console.WriteLine("Name: {0}, Grade: {1}", names[i], grades[i]);
            }
        }
    }
}
