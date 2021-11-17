// CPP program to print
// ASCII Value of Character
#include<iostream>
using namespace std;
int main(){
    
    string s1;
    cin>>s1;

     int n = s1.length();
     
     for(int i=0; i<n; i++){
           char ch = tolower(s1[i]);
           if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y')
           {
                 
           }
           else {
                 cout <<"."<<ch;
                 
           }
           
     }
    
    
    return 0;
    
    
}

