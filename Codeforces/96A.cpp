#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
      int count=0;
      string s;
      cin >> s; 
      for(int i=0;i<s.size();i++)
      {
               
            char cha = s[i];
            char chb = s[i+1];
            if(cha==chb)
            {
                  count++;
            }
            else
            {
                  count = 0;
            }
            
            if(count==6)
            break;
      }

      if(count==6)
      {
            cout<<"YES";
      }
      else 
      {
            cout<<"NO";
      }

      
      return 0;
}