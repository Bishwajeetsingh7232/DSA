//Stack using array 
//Bishwajeetsingh7232
#include<stdio.h>
int Push(int stack[],int top)
{
	int data;
	if(top==4)
	{
		printf("\nOverflow conditions");
	}
	else
	{
		printf("Enter the data u want to push : ");
	    scanf("%d",&data);
		top++;
		stack[top]=data;
	}
    return top;
}


int Pop(int stack[],int top)
{
	int item;
	if(top==-1)
	{
		printf("Underflow Conditions\n");
	}
	else
	{
		item=stack[top];
		printf(" The pop item is = %d ",item);
		top--;
	}
	return top;
}

void Display(int stack[], int top)
{
	int i;
	for(i=top;i>=0;i--)
	{
	printf("%d ",stack[i]);	
	}
}

int main()
{
	int n,stack[5],top=-1;
	printf(" Operation on Stack Using array:\n");
	printf("\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
	do{	
	printf("\nChoose what u want to Perform : ");
	scanf("%d",&n);
	switch(n)
	{
	  case 1:
	  {
	  	top=Push(stack,top);
	  	break;
	  }	
	  case 2:
	  {
	  top=	Pop(stack,top);
		break;	
	  }
	  case 3:
	  {
	  	Display(stack,top);
	  	break;
	  }
	  case 4:
	  {
	  	printf(".....EXIT......");
	  	break;
	  }
	  default:
	  {
	  	printf("\nPlss enter a valid choice ");
	  }
	}

}
while(n!=4);
return 0;
}
