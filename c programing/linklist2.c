/* write a c program that delete a node from the 
begining ,end or a given position in a single linked list*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node*head=NULL;
struct node* createnode(int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	if(!newnode)
	{
		printf("memory allocation failed \n");
		exit(1);
	}
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
void insertend(int data)
{
	struct node*newnode=createnode(data);
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	struct node*temp=head;
	while(temp->next!=NULL)
	temp=temp->next;
	temp->next=newnode;
}
void display()
{
	struct node*temp=head;
	if(head==NULL)
	{
		printf("list id empty \n");
		return;
	}
	printf("lnked list : ");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
void deletebegining()
{
	if(head==NULL)
	{
		printf("lit is empty ,notinhg to delete\n");
		return;
	}
	struct node*temp=head;
	head=head->next;
	printf("delete %d from begining\n",temp->data);
	free(temp);
}
void deleteend()
{
	if(head==NULL)
	{
		printf("list is empty,nothig to delete\n");
		free(head);
		head=NULL;
		return;
	}
	
	struct node*temp=head;
	while(temp->next->next !=NULL)
	temp=temp->next;
	printf("delete%d from end\n",temp->next->data);
	free(temp->next);
	temp->next=NULL;
void deleteposition(int pos)
{
	if(head==NULL)
	{
		printf("list is empty , nothing to delete\n");
		return;
	}
	if(pos==1)
	{
		deletebegining();
		return;
	}
	struct node*temp=head;
	for(int i=1;temp!=NULL && i<pos-1;i++)
	{
		temp=temp->next;
	}
	if(temp==NULL||temp->next==NULL)
	{
		printf("invalid position\n");
		return;
	}
	struct node*delnode=temp->next;
	temp->next=delnode->next;
	printf("delete %d from position%d\n",delnode->data,pos);
	free(delnode);
}
int main()
{
	  int choice,data,pos;
	  while(1)
	  {
	  	printf("---menu---\n");
	  	printf("1.insert at end\n");
	  	printf("2.display list\n");
	  	printf("3.delete from begining\n");
	  	printf("4.delete from end\n");
	  	printf("5.delete from postion\n");
	  	printf("6.exit\n");
	  	printf("Enter choice :\n");
	  	scanf("%d",&choice);
	  	switch(choice)
	  	{
	  		case 1:
	  			printf("Eneter data :");
	  			scanf("%d",&data);
	  			insertend(data);
	  			break;
	  		case 2:
			    dispaly();
			    break;
			case 3:
			    deletebegining();
				break;    
			case 4:
			    deleteend();
			    break;
			case 5:
			    printf("Enter position to delete :");
			    scanf("%d",&pos);
			    deleteposition(pos);
			break;
			case 6:
			    exit(0);
			default:
			    printf("Invalid choice !\n");	  	
		}
	  }
	  return 0;
}
