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

        // 1 - 4: Multiple Choice Questions
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

        // 1-7 Passcode
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

        
    }
}
