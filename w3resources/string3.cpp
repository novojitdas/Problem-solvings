//  Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space.
#include <iostream> 
#include <string> 
using namespace std;
 
int main()
{
      string input;
      getline(cin,input);
      int counter = 0;
      for(int i=0;i<input.length();i++)
      {
            if(i==0)
            {
                  input[i] = toupper(input[i]);
            }
            else if (input[i-1]==' ')
            {
                  input[i] = toupper(input[i]);
            }
      }
      cout << input;

      return 0;
}