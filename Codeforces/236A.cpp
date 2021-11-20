#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
      int count=0;
      string username;
      cin >> username;
      sort(username.begin(),username.end());
      for(int i=0;i<username.size();i++)
     {
         if(username[i]!=username[i+1])
         {
               count++;
         }
     }
      if(count%2==0)
      {
            cout <<"CHAT WITH HER!" << endl;
      }
      else
      {
            cout<<"IGNORE HIM!" << endl;
      }

      return 0;
}