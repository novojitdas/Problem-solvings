#include<stdio.h>
#define MaxSTK 10
int stack[MaxSTK];
int top=-1;

void stackprint(int top)
{
printf("\nThe stack is: ");
for(int i=0;i<=top;i++)
printf("%d ",stack[i]);
}

int stackpush(int item)
{
if(top==MaxSTK-1)
{
printf("Overflow");
return 0;
}
top=top+1;
stack[top]=item;
return 1;
}

void main()
{
int item;
int flag=1;
while(flag)
{
printf("\nEnter a number to push into stack:");
scanf("%d",&item);
flag=stackpush(item);
stackprint(top);
}
}