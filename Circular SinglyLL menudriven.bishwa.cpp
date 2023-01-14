//Bishwajeetsingh7232
//singly circular
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*next;	
};
  struct node*create_nodelist(struct node*head)
  {
  	struct node*temp;
  	int choice=1;
  	while(choice)
  	{
  	struct node*newnode=(struct node*)malloc(sizeof(struct node));
  	printf("Enter data u want to insert : ");
  	int val;
  	scanf("%d",&val);
  	newnode->data=val; 
  	newnode->next=NULL;
  	if(head==NULL)
  	   {
  		head=newnode;
  		temp=newnode;
	  }
	else
	   {
	    temp->next=newnode;	
	    temp=newnode;
	  }
	  printf("If u want to continue choose 1 else 0 :" );
	  scanf("%d",&choice);	
  }
   temp->next=head;
  return head;
}
 void traversallinkedlist(struct node*temp)
 {
 	printf("\nInsertation is successfully completed :");
 	struct node*head;
 	head=temp;
 	printf("%d ",temp->data);
 	temp=temp->next;
 	while(temp!=head)
 	{
 		printf("%d ",temp->data);
 		temp=temp->next;
	 }
 }
 
 struct node*insertAtbegining(struct node*head,int newdata)
 {
 	struct node*temp,*newnode;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=newdata;
	newnode->next=head;
 	temp=head->next;
 	while(temp->next!=head)
 	{
 		temp=temp->next;
	 }
	 temp->next=newnode;
	 head=newnode;
	 return head;
 }
 
 struct node*insertAtmiddle(struct node*head,int newdata,int position)
 {
 	struct node*temp,*newnode;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=newdata;
 	int i=1;
 	temp=head;
 	while(i<position-1)
 	{
 		temp=temp->next;
 		i++;
	 }
	 newnode->next=temp->next;
	 temp->next=newnode;
	 return head;
 }
 
 struct node*insertAtend(struct node*head,int newdata)
 {
 	struct node*temp,*newnode;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=newdata;
 	temp=head;
 	temp=temp->next;
 	while(temp->next!=head)
 	{
 		temp=temp->next;
	 }
	 temp->next=newnode;
	 temp=temp->next;
	 temp->next=head;
	 return head;
 }
 
 struct node*delete_begining(struct node*head)
 {
 	struct node*temp,*traves;
 	temp=head;
 	head=head->next;
    temp->next=NULL;
    traves=head;
    traves=traves->next;
    while(traves->next!=temp)
    {
    	traves=traves->next;
	}
	traves->next=head;
	free(temp);
    return head;
 }

int main()
{
	struct node*head=NULL;
	head=create_nodelist(head);
	traversallinkedlist(head);
	int newdata;
	printf("\nEnter a data u want to insert at begining: ");
	scanf("%d",&newdata);
	head=insertAtbegining(head,newdata);
    traversallinkedlist(head);
    int position;
    printf("\nEnter a data u want to insert a middle and also in which position: ");
    scanf("%d %d",&newdata,&position);
    head=insertAtmiddle(head,newdata,position);
	traversallinkedlist(head);
	printf("\nEnter a data u want to insert at end: ");
	scanf("%d",&newdata);
	head=insertAtend(head,newdata);
	traversallinkedlist(head);
	printf("\nDeletion in begining completed");
	head=delete_begining(head);
	traversallinkedlist(head);
	head=delete_end(head);
	traversallinkedlist(head);
	return 0;
}
