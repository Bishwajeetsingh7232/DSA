#include<stdio.h>
#include<stdlib.h>
struct node*Front=NULL;
struct node*Rear=NULL;
struct node
{
	int data;
	struct node*next;
};
 void Enqueue()
 {
 	struct node*newnode;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	if(newnode==NULL)
 	{
 		printf("Sufficient memory is not available to create node");
	}
	else
	{
	printf("\nEnter a data u want to insert : ");
    int newdata;
    scanf("%d",&newdata);
 	newnode->data=newdata;
 	newnode->next=NULL;
 	if(Front==NULL && Rear==NULL)
 	{
 		Front=Rear=newnode;
	 }
	else
	{
	  Rear->next=newnode;
	  Rear=newnode;	
	}

}
}
 void Dequeue()
 {
 	struct node*temp;
 	temp=Front;
 	if(Front==NULL && Rear==NULL)
 	{
 		printf("Underflow conditions");
	 }
	 else{
 	printf("The deleted Data is %d",Front->data);
 	Front=Front->next;
 	free(temp);	
	 }	
 }
 
void Display()
{
  struct node*temp;
  temp=Front;
  while(temp!=NULL)
  {
  	printf("%d ",temp->data);
  	temp=temp->next;
  }	
	
}

int main()
{
int n;	
printf("\n1.Enqueue.\n2.Dequeue.\n3.Display.\n4.Exit. ");
struct node*Front,*rear;
Front=rear=NULL;
do
{
	printf("\nEnter ur choice: ");
    scanf("%d",&n);
	switch(n)
	{
		case 1:
		{
		Enqueue();
		break;
	    }
		case 2:
		{
		Dequeue();
		break;
		}
		case 3:
		{
		Display();
		break;
		}
		case 4:
		{
		printf("....Exit....");
		break;
		}
		
		
	}
	
}
while(n!=4);
	
	return 0;
}