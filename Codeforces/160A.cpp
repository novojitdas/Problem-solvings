#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int size,sum=0,takenCoin=0,count=0;
   cin>>size;
   int Arr[size] = {0};
   for(int i=0;i<size;i++){
       cin>>Arr[i];
       sum+=Arr[i];
   }

   sort(Arr,Arr+size);

   int remaincoin = sum;
   
for(int j=size-1;j>-1;j--){
     
     remaincoin = remaincoin-Arr[j];
     takenCoin = takenCoin + Arr[j];
     count++;
     if(takenCoin>remaincoin){
        break;

     }
}

    cout<<count<<endl;


    return 0;
}