using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

namespace LIN_LNG_CSharp
{


    class CSharpIntrGenr
    {
        interface ILine
        {
            // no access modifiers,

            string Name { get; set; }
            int GetLineLength();

            string LineString { get; set; }
        }


        /*
         * Notes about interfaces
         *  - 1. you cannot implement multiple parent classes, but you can use multiple interfaces.
         *      - The syntax is as follows: class A: B, C
         *  - 2. if you have multiple interfaces with the same function name, preface the definitions with...
         *      the interfaces they belong to.
         *      - syntax: return_type interface_name.function_name(arguments...) {}
         */

        class Line : ILine
        {
            public Line()
            {
            }

            public Line(string str)
            {
                line = str;
            }

            // returns the length of the line
            public int GetLineLength()
            {
                return line.Length;
            }

            // name variable
            public string Name
            {
                get
                {
                    return name;
                }

                set
                {
                    name = value;
                }
            }

            // line variable
            public string LineString
            {
                get
                {
                    return line;
                }

                set
                {
                    line = value;
                }
            }

            public string name = "";
            private string line = "";
        }


        // testing out the interface
        public static void Demo()
        {
            // Interfaces
            Line line = new Line("this is a line.");
            ILine lineIntr = null;

            // calls method if valid.
            if(line is ILine)
            {
                Console.WriteLine(line.LineString);
            }

            // casts to interface
            lineIntr = line as ILine;

            // if valid, print.
            if(lineIntr != null)
            {
                Console.WriteLine(lineIntr.LineString);
            }

            // Generics
            // non-generic
            ArrayList arrList = new ArrayList();
            arrList.Add(1);
            arrList.Add(2);
            arrList.Add(3);
            // this would be valid, but would throw an exception if it was assumed to be an int.
            // arr.Add("Four");
            
            // prints lines
            foreach(int n in arrList)
            {
                Console.WriteLine("Value in arrList: {0}", n);
            }

            // generic
            // this is more efficient due to not having to convert values to objects and vice-versa.
            // the object conversion process is called boxing and un-boxing
            List<int> intList = new List<int>();
            intList.Add(1);
            intList.Add(2);
            intList.Add(3);

            // stacks and queues are generic types as well
            // queue
            Queue<int> intQueue = new Queue<int>();
            intQueue.Enqueue(1);
            intQueue.Enqueue(2);
            intQueue.Enqueue(3);

            // stack
            Stack<int> intStack = new Stack<int>();
            intStack.Push(1);
            intStack.Push(2);
            intStack.Push(3);

            // dictionaries are also generic types
            // it pairs a key with a value, just like the map object in C++.
            Console.WriteLine();
            Dictionary<string, int> dict = new Dictionary<string, int>();

            dict.Add("A", 12);
            dict.Add("B", 18);
            dict.Add("C", 1);

            // current amount
            Console.WriteLine("Amount in Dictionary: {0}", dict.Count);

            // an atempt to add a key already in the list throws an exception
            try
            {
                dict.Add("A", 11);
            }
            catch(ArgumentException e)
            {
                Console.WriteLine("Error: {0}", e.ToString());
                Console.WriteLine("\nKey already used.");
            }

            Console.WriteLine("");

            // prints out all values
            foreach(KeyValuePair<string, int> kvp in dict)
            {
                Console.WriteLine("Key: {0} | Value: {1}", kvp.Key, kvp.Value);
            }

            // use .Remove to remove a given key.
            Console.WriteLine();
            dict.Remove("A");
            Console.WriteLine("Item removed");

            // current amount
            Console.WriteLine("Amount in Dictionary: {0}", dict.Count);


        }

    }


}