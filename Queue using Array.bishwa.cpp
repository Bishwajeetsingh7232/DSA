#include<stdio.h>
int front=-1;
int rear=-1;
void enqueue(int Queue[])
{
    int data;
    if(rear==4)
    {
  	printf("Overflow conditions\n");
    }
    else if(rear==-1 && front==-1) 
    {
    rear=0;
    front=0;
  	printf("Enter a data u want to insert: ");
    scanf("%d",&data);
    Queue[rear]=data;
    }
    else
	{
	printf("Enter a data u want to insert: ");
    scanf("%d",&data);
    rear++;
    Queue[rear]=data;
    }		
}

void dequeue(int Queue[])
   {
	 if(front==-1 && rear==-1)
	 {
	 	printf("underflow conditions");
	 }
	 else if(front==rear)
	 {
	 	printf("The Deleted element is %d ",Queue[front]);
	 	front=rear=-1;
	 }
	 else
	 {
	 	printf("The Deleted element is %d ",Queue[front]);
	 	front++;
	 }
   }
   
  void display(int Queue[])
  {
  	int i;
  	if(front==-1 && rear==-1)
  	{
  		printf("....Queue is empty....");
	  }
	else
	{
		for(i=front;i<rear+1;i++)
		{
			printf("%d ",Queue[i]);
		}
	}
  }


int  main()
{
	int n;
	int Queue[5];
	printf("Operation on queue using array:\n");
	printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
	do{
	printf("\nEnter a choice u want to perform : ");
	scanf("%d",&n);
	switch(n)
		{
		case 1:
		{
	     enqueue(Queue);
		  break;
		}
		case 2:
		{
		  dequeue(Queue);
		  break;		
		}
		case 3:
		{
		  display(Queue);
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
