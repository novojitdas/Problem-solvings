#include<stdio.h>
#define MaxSTK 10
int stack[]={34,23,45,56,3,45,23,45,43,56};
int top=9;
void stackprint(int top)
{
printf("\nThe stack is: ");
for(int i=0;i<=top;i++)
printf("%d ",stack[i]);
}

int stackpop()
{
int item;
if(top==-1)
{
printf("\nUnderflow");
return 0;
}
item=stack[top];
printf("\nPopped item is: %d",item);
top=top-1;
return 1;
}

void main()
{
int flag=1;
while(flag)
{
stackprint(top);
flag=stackpop();
}
}