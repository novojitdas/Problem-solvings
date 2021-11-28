#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
      string input;

      int limit;
      cin >> limit;
       getline (cin, input);
      for(int i=0;i<limit;i++)
      {
            cout << input[i];
      }
      
      
      return 0;
}