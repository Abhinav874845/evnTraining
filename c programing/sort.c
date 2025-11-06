#include<stdio.h>
int main()
{
	int i,n,arr[100],item;
	int found=0;
	
	printf("Enter the element :\n");
	scanf("%d",&n);
	
	printf("Enter the value of element :");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	
	printf("Enter the searching item :\n");
	scanf("%d",&item);
	
	for(i=0;i<n;i++){
		if(arr[i]==item){
				printf("Item %d found at the position %d\n",item,i);
		found=1;
		break;
		}
	
	}
	if(!found)
	{
		printf("item %d is not found ",item);
	}
	
	
	return 0;
	}
