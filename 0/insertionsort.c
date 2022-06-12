#include <stdio.h>
void main(){
 int la[6];
 int i,j,temp;

printf("enter 6 the value:");
 for(i=0;i<6;i++){
       scanf("%d",&la[i]);
 }

for(i=0;i<6;i++){
     int current = la[i];
     int previous = i-1;

     while(previous>=0 && la[previous]>current){
           la[previous+1] = la[previous];
           previous--;
     }
     la[previous+1] = current;
} 
printf("now the sorted is:\n");
 for(i=0;i<6;i++){
       printf("%d |",la[i]);
 }

}