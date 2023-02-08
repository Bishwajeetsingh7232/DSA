//Stack using linklist
//Bishwajeetsingh7232
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

 struct node*PUSH(struct node*top)
 {
 	int press=1;
 	while(press)
 	{
 	struct node*newnode=(struct node*)malloc(sizeof(struct node));
 	printf("Enter a data u want to Push : ");
 	int newdata;
 	scanf("%d",&newdata);
 	if(top==NULL)
 	   {
 		 newnode->data=newdata;
 	     newnode->next=top;
 	     top=newnode;
	   }
	else
	   {
	 	newnode->data=newdata;
	 	newnode->next=top;
	 	top=newnode;
	   }
	   printf("If u want to continues this operation press 1 else 0 : ");
	   scanf("%d",&press);
}
 	return top;
 }
 
 void Display(struct node*top)
 {
 		if(top==NULL)
 		printf("...No Elements are found...");
 		else{
 	while(top!=NULL)
 	{
 		printf("%d ",top->data);
 		top=top->next;
 	}}
	 }
 
 
 struct node*Pop(struct node*top)
 {
 	struct node*temp;
 	int Next=1;
 	while(Next)
 	{
 	temp=top;
	if(top==NULL)
 	{
 	  printf("...UnderFlow Conditions... :");
 	  break;
	 }
	 else{
 	printf("The Pop elements are :%d ",top->data);
 	top=top->next;
 	free(temp);
 	printf("\nIf u want to continues this operation Press 1 else 0 : ");
 	scanf("%d",&Next);
 	} 
 }
     return top;
    }

int main()
{
   int Choose;
   struct node*top=NULL;
   printf("\n Choose operations :\n >For PUSH Chosse 1\n >For POP Choose 2\n >For DISPLAY Chosse 3\n >For EXIT Choose 4\n ");
   
do{
    printf("\n Enter the Choice : \n");
	scanf("%d",&Choose);
    switch(Choose)
    {
   	case 1:
   	{
    top=PUSH(top);
    break;
     }
    case 2:
    	{
     top=Pop(top);
     break;
		}
	case 3:
		{
	   Display(top);
	   break;
		}
	case 4:
		{
			printf(".......Exit.....");
			break;
		}
    default:
	{
	printf("Enter a valid choice");
	break;
	}
   
     }


}
while(Choose!=4);
return 0;
}


