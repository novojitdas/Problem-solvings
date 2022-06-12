#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};
struct Node* create_link_list(int item,struct Node* head)
{
struct Node* newnode=NULL;
struct Node* ptr=NULL;
struct Node* save=NULL;
newnode=malloc(sizeof(struct Node));
newnode->data=item;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
}
else
{
ptr=head;
while(ptr!=NULL)
{
save=ptr;
ptr=ptr->next;
}
save->next=newnode;
}
return head;
}
void print_link_list(struct Node* head)
{
struct Node* ptr=NULL;
ptr=head;
while(ptr!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->next;
}
}
void main()
{
int n,i,item;
struct Node* head=NULL;
printf("\nEnter the number of elements of the list:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("\nEnter %dth item to insert:",i);
scanf("%d",&item);
head=create_link_list(item,head);
// printf("%d",head);
}
print_link_list(head);
}