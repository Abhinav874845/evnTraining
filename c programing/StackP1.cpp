/*Write a program to create a stack using an array and prform;
i)  push operation-Add an element
ii) pop operation- Remove an element
iii) Transverse - Display all the element      */

#include<stdio.h>
#define size 5

int stack[size];
int top = -1;
//function to push a element onto the stack: 
void push (int value){
	if (top==size-1)
	{
		printf("stack overflow! can not puch \n",value);
	}
	else{
		top++;
		stack[top] = value;
		printf("%d pushed onto stack \n",value);
	}
	}
	
	//Function to pop an element from the stack:
	void pop(){
		if (top==-1){
			printf("Stack underflow! can not pop\n");
		}
		else
		{
			printf("%d popped from stack",stack[top]);
			top-- ;
		}
	}

//Function to Transvers and display the stack
void traverse()
{
	if (top==-1){
		printf("stack is empty\n");
	}
	else
	{
			printf("stack elemet are: \n");
			for(int i=top ; i>=0 ; i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}

int main()
{
	int choice ,value;
	do
	{
		printf("\n--stack menu--\n");
		printf("1.  push\n");
		printf("2.  pop\n");
		printf("3.  Traverse\n");
		printf("4.  exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter value to push: ");
				scanf("%d",&value);
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				traverse();
				break;
			case 4:
				printf("exiting...\n");
				break;
			default:
				printf("invalid choice try again..");
		}
	}
	while(choice !=4);
	return 0;
}
