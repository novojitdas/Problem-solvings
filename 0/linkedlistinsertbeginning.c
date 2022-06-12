#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next
};
void main()
{
struct Node* node1=NULL;
struct Node* node2=NULL;
struct Node* head=NULL;
struct Node* ptr=NULL;
struct Node* newnode=NULL;
int item;
node1=malloc(sizeof(struct Node));
node2=malloc(sizeof(struct Node));
node1->data=3;
node2->data=5;
node2->next=NULL;
node1->next=node2;
head=node1;
printf("The link list before insertion is:");
ptr=head;
while(ptr!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->next;
}
printf("\nEnter the item to insert at the beginning:");
scanf("%d",&item);
newnode=malloc(sizeof(struct Node));
newnode->data=item;
newnode->next=head;
head=newnode;
printf("The link list after insertion is:");
ptr=head;
while(ptr!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->next;
}
}