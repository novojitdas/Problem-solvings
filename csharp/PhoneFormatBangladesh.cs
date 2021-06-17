using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int phone = Convert.ToInt32(Console.ReadLine()); // user input
            string sp = Convert.ToString(phone);

            string s1 = sp.Substring(0,5); // 01xxx
            string s2 = sp.Substring(5); // xxxxxx
            string finalNumber = string.Format("{0}-{1}", s1, s2);
            Console.WriteLine("+88 " +finalNumber); // +88 01xxx-xxxxxx


        }

        }
    
}