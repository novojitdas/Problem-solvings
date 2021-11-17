// CPP program to print
// ASCII Value of Character
#include<iostream>
using namespace std;
int main(){
    
    string s1,s2;
    cin>>s1;
    cin>>s2;
    
    int result;
     int l = s1.length();
     
     
     for(int i=0; i<l; i++){
         
         
        int asciS1 = int(toupper(s1[i]));
         int asciS2 = int(toupper(s2[i]));
         
         
        if(asciS1 > asciS2 ){
            
            result  = 1;
            break;
            
        }
         else if(asciS1 < asciS2 ){
            
            result  = -1;
            break;
        }
         else {
            
            result  = 0 ;
            
        }
         
         
         
     }
    
    cout<<result;
    
    return 0;
    
    
}

