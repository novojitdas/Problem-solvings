#include<iostream>
#include <string>
using namespace std;
int main(){
    
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    string newstr = s1 + s2;
    // match new string with s3
  int  n = s3.length();
  int  m = newstr.length(); 
  if(n==m) {
   for(int i=0;i<n;i++)
   {
         // s3 er sathe match korate hobe new ke
      int j = 0;
           if(s3[j]==newstr[i])
           {
                 j++;
           }

     }


   } 
  } 
      else 
      {
            cout << "NO";
      }     
     
    
    
    return 0;
    
    
}