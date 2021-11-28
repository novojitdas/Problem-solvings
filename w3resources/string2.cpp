// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).
#include <iostream> 
#include <string> 
using namespace std;

int main()
{
     string input;
     cin>>input;
     int ascii = 0;
     for(int i=0;i<input.size();i++)
     {
           ascii = int(input[i]);
           // for z;
           if(ascii==122)
           {
                 input[i]=char(97);
           }
           else if (ascii==90)
           {
                 input[i] = char(65);
           }
           else if (ascii >=65 && ascii <=90 || ascii >= 97 && ascii <= 122)
           {
                 input[i] = char(ascii+1);
           }
     }

     cout << input;
      return 0;
}