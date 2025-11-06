#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
	struct node * pre;
};
 struct node * head=NULL;
 
 //function to creat a new node
 
 struct node * createnode(int data)
 {
 	struct node *newnode=(struct node *)malloc(sizeof(struct node));
 	newnode->data=data;
 	newnode->next=newnode->pre=NULL;
 	return newnode;
 }
 
 // insert at end 
 
 void insertEnd(int data)
 {
 	struct node *newnode=createnode(data);
 	if(head==NULL)
 	{
 		head=newnode;
 		return;
	 }
	 struct node*temp=head;
	 while (temp->next !=NULL)
	 temp=temp->next;
	 temp->next=newnode;
	 newnode->pre=temp;
 }
 
 // insert at begining
 void insertBeg(int data)
 {
 	struct node*newnode=createnode(data);
 	if(head==NULL)
 	{
 		head =newnode;
 		return;
	 }
	 newnode->next=head;
	 head->pre=newnode;
	 head=newnode;
 }
 // delete from begining
 
 void  deleteBeg(){
 if(head==NULL)
 {
 	printf("List is empty\n");
 	return;
 }
 struct node*temp=head;
 head=head->next;
 if(head!=NULL)
 head->pre=NULL;
 free(temp);
}

//Delete from end
void deleteEnd()
{
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	struct node*temp=head;
	while(temp->next !=NULL)
	{
		temp=temp->next;
	}
	if(temp->pre)
	{
		temp->pre->next=NULL;
	}
	else{
	head=NULL;
      }
      free(temp);
}

//dislay list

void display()
{
	struct node*temp=head;
	if(head==NULL)
	{
		printf("Empty List\n");
		return;
	}
	printf("Doubly Linked list : ");
	while(temp!=NULL)
	{
		printf("%d<-> ",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}

// Main menu
int main()
{
	int choice,data;
	while(1)
	{
		printf("\nMENU\n");
		printf("1.insert at ent\n2.insert at begining\n3.Delete from begining\n4.Delete from End\n5.Display\n6.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter to insert at End: ");
				scanf("%d",&data);
				insertEnd(data);
				break;
			case 2:
			    printf("Enter data to insert at begining: ");
				scanf("%d",&data);
				insertBeg(data);
				break;
			case 3:
			    deleteBeg();
				break;
			case 4:
			    deleteEnd();
				break;
			case 5:
			    display();
				break;
			case 6:
			exit(0);
			default :
			printf("invalid choice !\n");					
		}
	}
	return 0;
}

