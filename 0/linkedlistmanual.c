#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next};
void main()
{
struct Node* head=NULL;
struct Node* second=NULL;
struct Node* third=NULL;
head=malloc(sizeof(struct Node));
second=malloc(sizeof(struct Node));
third=malloc(sizeof(struct Node));
head->data=10;
head->next=second;
second->data=20;
second->next=third;
third->data=30;
third->next=NULL;
struct Node *ptr=head;
while(ptr!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->next;
}
}