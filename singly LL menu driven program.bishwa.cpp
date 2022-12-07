//BishwajeetSingh7232
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};

struct node*insertnode(struct node*head)
{
	int n,i;
	printf("Enter how many nodes u want : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node*newnode=(struct node*) malloc(sizeof(struct node));
		int val;
		struct node*temp;
		printf("Enter the node data : ");
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
		}
	
		return head;
		
}
void linkedlisttraversal(struct node *ptr)
{
 printf("Insertion Succesfully completed\n");
while(ptr!=NULL)
 {
   
	printf("%d ",ptr->data);
	ptr=ptr->next;
 }
}
void linkedlisttraversalD(struct node*ptr)
{
	printf("Deletion Succesfully completed\n");
while(ptr!=NULL)
 {
   
	printf("%d ",ptr->data);
	ptr=ptr->next;
 }
 
 
}
	
struct node* insertAtfirst(struct node*head,int newdata)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
 
	newnode->next=head;
	newnode->data=newdata;
	head=newnode;
    return head;
 }
 
 struct node*insertAtend(struct node*head, int newdata)
 {
 	struct node*newnode=(struct node*)malloc(sizeof(struct node));
 	struct node*temp;
 	temp=head;
 	newnode->next=NULL;
 	newnode->data=newdata;
 	while(temp->next!=NULL)
 	{
 		temp=temp->next;
	 }
	 temp->next=newnode;
	 return head;
 }
 struct node*insertAtmiddle(struct node*head, int newdata, int position)
 {
 	struct node*newnode=(struct node*)malloc(sizeof(struct node));
 	struct node*temp;
 	temp=head;
 	int i;
 	for(i=1;i<position-1;i++)
 	{
 		temp=temp->next;
 		
	 }
	 newnode->data=newdata;
	 newnode->next=temp->next;
	 temp->next=newnode;
	 return head;
 }
 
struct node*delete_beg(struct node*head)
{
	struct node*temp;
	temp=head;
	head=head->next;
	free(temp);
	return head;
}

struct node*delete_end(struct node*head)
{
	struct node *temp,*previous;
	temp=head;
	while(temp->next!=NULL)
	{
		previous=temp;
		temp=temp->next;
	}
	previous->next=NULL;

return head;
 }
 
 struct node*delete_specificposition(struct node*head,int pos)
 {
 	struct node*temp,*next;
 	temp=head;
 	int i;
 	for(i=1;i<pos-1;i++)
 	{
 		temp=temp->next;
	 }
	 next=temp->next;
	 temp->next=next->next;
 	free(next);
 	return head;
 }
int main()
{
	printf("Insertion\n");
	printf("\n For insertion at begining : Press 1\n");
    printf("\n For insertion at end: Press 2\n");
	printf("\n For insertion at given position: Press 3\n");
	printf("\n");
	printf("Deletion\n");
	printf("\n For deletion at begining : press 4\n");
	printf("\n For deletion at end : press 5\n");
	printf("\n For deletion at specific position : Press any key except above choice :\n");
	printf("\n");
	
	struct node*head=NULL;
	head=insertnode(head);
	printf("Created linked list:\n");
	linkedlisttraversal(head);
	printf("\n");
	printf("Enter the choice :\n");
	int choice;
	scanf("%d",&choice);
	
	if(choice==1)
	{
	int newdata;
  	printf("Enter a data u want to insert at begining :\n");
	scanf("%d",&newdata);
	head=insertAtfirst(head,newdata);
	linkedlisttraversal(head);
    }

    else if(choice==2)
    {
    	int newdata;
	printf("\nEnter a data u want to insert at end :\n");
	scanf("%d",&newdata);
	head=insertAtend(head,newdata);
	linkedlisttraversal(head);
    }
    else if(choice==3)
    {
	printf("\nEnter a data u want to insert at middle and also position :\n");
	int position,newdata;
	scanf("%d %d",&newdata,&position);
	head=insertAtmiddle(head,newdata,position);
	linkedlisttraversal(head);
    }
    else if(choice==4)
    {
	printf("\nDeletion at begining :\n");
	head=delete_beg(head);
	linkedlisttraversalD(head);
    }
    else if(choice==5)
    {
	printf("\nDeletion of end node\n");
	head=delete_end(head);
	linkedlisttraversalD(head);
    }
    else
    {
    int position;
	printf("\nDelete from any specific position :");
	scanf("%d",&position);
	head=delete_specificposition(head,position);
	linkedlisttraversalD(head);
    }
	return 0;
}
