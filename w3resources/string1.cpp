// Write a C++ program to reverse a given string.
#include <iostream>
#include <string>
using namespace std;

int main ()
{
     string input;
     string temp;
     int counter=0;
     cin >> input;
     temp = input;
     int size = input.size();
     for(int i=size-1;i>=0;i--)
     {
           
          input[counter] = temp[i];
          counter = counter + 1;
     }

cout << input;

      return 0;
}

