// Course: https://www.linkedin.com/learning/learning-c-sharp-2018
using System;
using System.Collections.Generic;
using System.Text;

namespace LIN_LNG_CSharp
{
    

    // Main Class
    class LearnCsharp
    {
        private class Survey // survey class (Challenge 5)
        {
            private string name;
            private int age;
            private string birthMonth;

            // properties
            // name
            public string Name
            {
                get { return name; }
                set { name = value; }
            }

            // age
            public int Age
            {
                get { return age; }
                set { age = value; }
            }

            // birth month
            public string BirthMonth
            {
                get { return birthMonth; }
                set { birthMonth = value; }
            }

            // empty constructor
            public Survey()
            {
                name = "";
                age = 0;
                birthMonth = "";
            }

            // initialize values
            public Survey(string name, int age, string birthMonth)
            {
                this.name = name;
                this.age = age;
                this.birthMonth = birthMonth;
            }

            // prints data
            public void PrintData()
            {
                // print results
                Console.WriteLine("Name: {0}", name);
                Console.WriteLine("Age: " + age);
                Console.WriteLine("Birth Month: " + birthMonth);

                // prints zodiac sign (doesn't account for different letter cases, or most months).
                if (birthMonth == "march")
                {
                    Console.WriteLine("You are an Aries");
                }
                else if (birthMonth == "april")
                {
                    Console.WriteLine("You are a Taurus");
                }
                else if (birthMonth == "may")
                {
                    Console.WriteLine("You are a Gemini");
                }
            }
        }


        /////////////////////


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

            // ask for name, age, and birth month, then print them.
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
                Console.WriteLine("You are a Taurus");
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
            int studentCount;

            // get student name and grade from console input.
            string name, grade;

            // lists of values
            string[] names;
            string[] grades;

            // fourth challenge
            Console.WriteLine("\nChallenge 4");

            // gets the student count.
            Console.Write("Enter number of students being entered: ");
            studentCount = int.Parse(Console.ReadLine());

            names = new string[studentCount];
            grades = new string[studentCount];

            // gets each student
            for(int i = 0; i < studentCount; i++)
            {
                // enters the values.
                Console.Write("Enter Student {0}'s Name: ", i + 1);
                name = Console.ReadLine();

                Console.Write("Enter Student {0}'s Grade: ", i + 1);
                grade = Console.ReadLine();

                // saves the name and grade.
                names[i] = name;
                grades[i] = grade;

                // new line
                Console.WriteLine("");
            }

            Console.WriteLine("\nPrinting Content");

            // prints values
            for(int i = 0; i < studentCount; i++)
            {
                Console.WriteLine("Student {0} - Name: {1}, Grade: {2}", i + 1, names[i], grades[i]);
            }
        }

        
        // asks a question and gets a resposne
        public static string Ask(string question, bool endLine = false)
        {
            // provided string
            string response;
            
            // checks to see if a whole line should be used.
            switch(endLine)
            {
                case true: // writes and ends the line
                    Console.WriteLine(question);
                    break;

                case false: // writes line but does not end it.
                    Console.Write(question);
                    break;
            }

            // reads the line
            response = Console.ReadLine();

            // returns the response.
            return response;
        }

        // 2-8: survey with custom class
        public static void Challenge5()
        {
            Console.WriteLine("\nChallenge 5 - Survey");

            // ask for name, age, and birth month, then print them.
            Survey survey = new Survey();

            Console.Write("What is your name? ");
            survey.Name = Console.ReadLine();

            Console.Write("What is your age? ");
            survey.Age = int.Parse(Console.ReadLine());

            Console.Write("What month were you born? ");
            survey.BirthMonth = Console.ReadLine();

            // print data
            Console.WriteLine();
            survey.PrintData();
        }
    }
}
