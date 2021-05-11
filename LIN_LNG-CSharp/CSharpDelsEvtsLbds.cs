// C#: Delegates, Events, and Lambdas: https://www.linkedin.com/learning/c-sharp-delegates-events-and-lambdas
using System;
using System.Collections.Generic;
using System.Text;

namespace LIN_LNG_CSharp
{
    // working with lambdas, events, and delegates.
    class CSharpDelsEvtsLbds
    {
        // the event string
        static string eventString = "";

        // DELEGATES
        // delegate functon
        public delegate int IntDelegate(int i1, int i2);

        // delegate function (with refs)
        public delegate int IntDelegateRef(int i1, ref int i2);

        // event handler delegate
        public delegate void myEventHandler(string value);

        // the float delegate
        public delegate float FloatDelegateSingle(float flt);

        // the float delegate
        public delegate float FloatDelegateDouble(float f1, float f2);

        // for printing statements
        public delegate void StatementDelegate();

        // the event object (needs to be a field)
        public static event myEventHandler myEvent;



        // FUNCTIONS
        // adds to gether integers
        public static int AddInts(int i1, int i2)
        {
            return i1 + i2;
        }

        // adds to gether integers (uses references)
        public static int AddIntsRef(int i1, ref int i2)
        {
            i2 = i1 + i2;
            return i2;
        }

        // multiplies integers
        public static int MultiplyInts(int i1, int i2)
        {
            return i1 * i2;
        }

        // multiplies integers (with ref)
        public static int MultiplyIntsRef(int i1, ref int i2)
        {
            return i2 = i1 * i2;
        }

        // called when the event string changes
        public static void OnEventStringChanged1(string str)
        {
            Console.WriteLine("OnEventStringChanged1: {0}", str);
        }

        // called when the event string changes
        public static void OnEventStringChanged2(string str)
        {
            Console.WriteLine("OnEventStringChanged2: {0}", str);
        }

        // event string getter and setter
        public static string EventString
        {
            get
            {
                return eventString;
            }

            set
            {
                eventString = value; // replaces value
                myEvent(eventString); // triggers event.
            }
        }

        // TODO: try out the three challenges associated with this lesson.

        // demonstrate values
        public static void Demo()
        {
            // delegate test.
            {
                // placing function into delegate.
                IntDelegate intDel1;
                intDel1 = AddInts;
                int i1 = 5, i2 = 10;

                // delegate call
                Console.WriteLine("Delegate Call - {0} + {1} = {2}", i1, i2, intDel1(i1, i2));

                // placing definition in function directly.
                IntDelegate intDel2 = delegate (int i1, int i2)
                {
                    return i1 + i2;
                };
                
                // delegate call
                Console.WriteLine("Delegate Call (In-Line Implementation) - {0} + {1} = {2}", i1, i2, intDel2(i1, i2));
            }

            // composable delegates
            {
                IntDelegate f1 = AddInts;
                IntDelegate f2 = MultiplyInts;
                IntDelegate fx1 = f1 + f2;
                int i1 = 4, i2 = 10;

                // console prints
                Console.WriteLine("");
                Console.WriteLine("Values: {0}, {1}", i1, i2);
                
                Console.WriteLine("Calling F1 Only - A + B: {0}", f1(i1, i2));
                Console.WriteLine("Calling F2 Only - A * B: {0}", f2(i1, i2));
                Console.WriteLine("Calling FX1 (F-Chain): {0}", fx1(i1, i2));
                
                fx1 -= f2; // removed F2
                Console.WriteLine("Calling FX (F-Chain - F2 Removed): {0}", fx1(i1, i2));

                // new line
                Console.WriteLine();

                // using reference variables to carry over values
                // fx = AddIntsRef + MultiplyIntsRef; // illegal
                IntDelegateRef f3 = AddIntsRef;
                IntDelegateRef f4 = MultiplyIntsRef;
                IntDelegateRef fx2 = f3 + f4;

                // testing 
                Console.WriteLine("Calling F3 (F1 Ref Ver.) - A + B: {0}", f3(i1, ref i2));
                Console.WriteLine("Calling F3 (F2 Ref Ver.) - A * B: {0}", f4(i1, ref i2));
                Console.WriteLine("Calling FX (FX1 Ref Ver.) (F-Chain): {0}", fx2(i1, ref i2));
            }

            // events
            {
                string input = "";
                myEvent += OnEventStringChanged1;
                myEvent += OnEventStringChanged2; // changed event.

                Console.WriteLine();

                /*
                 * Event Handlers (.NET Guidelines)
                 * for event handlers, you provide the object that the event came from plus a user defined subclass for event arguments.
                 * you pass the object by using the 'this' keyword, and pass a new instance of your event arguments class.
                 * so the format would be the following: func(this, new EventArgs()).
                 */

                do
                {
                    Console.Write("Enter a string (type 'exit' to leave): ");
                    input = Console.ReadLine();
                    EventString = input;
                }
                while (input != "exit");
                
            }

            // delegates
            {
                // variables
                float x = 10, y = 5;

                Console.WriteLine();

                // single floats
                FloatDelegateSingle FltDelSgl = (x) => x + x;
                Console.WriteLine("{0} Addition Float Delegate = {1}", x, FltDelSgl(x));

                FltDelSgl = (y) => y - y;
                Console.WriteLine("{0} Subtraction Float Delegate = {1}", y, FltDelSgl(x));

                // single doubles
                FloatDelegateDouble FltDelDou = (x, y) => x * y;
                Console.WriteLine("({0}, {1}) Multiplication Delegate = {2}", x, y, FltDelDou(x, y));

                // statement lambda
                StatementDelegate smtDel = () =>
                {
                    Console.WriteLine("Statement Lambda Called");
                };

                // print statement
                Console.WriteLine("Statement Call...");
                smtDel();
            }
            
        }

    }
}
