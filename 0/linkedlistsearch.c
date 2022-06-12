#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};
struct Node* create_link_list(int item,struct Node* head)
{
//printf("\n head %d",head);
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
int search_link_list(struct Node* head,int key)
{
struct Node* ptr=NULL;
int loc=0;
ptr=head;
while(ptr!=NULL)
{
if(key==ptr->data)
{
loc=ptr;
break;
}
ptr=ptr->next;
}
}
void main()
{
int n,i,item,key,loc;
struct Node* head=NULL;
printf("\nEnter the number of elements of the list:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{item = rand();
head=create_link_list(item,head);
// printf("%d",head);
}
printf("\nThe list is: ");
print_link_list(head);
printf("\nEnter the item to search:");
scanf("%d",&key);
loc=search_link_list(head,key);
if(loc==0)
printf("\Key not found");
else
printf("\n key is in position %d",loc);
}