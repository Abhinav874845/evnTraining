#include<stdio.h>
int binarySearch(int arr[],int size,int key)
{
	int low=0,high=size-1;
	
	while(low<=high)
	{
		int mid=(low+high)/2;
		
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid<key])
		{
		low=mid+1;	
		}
		else
		high=mid-1;
	}
	return -1;
}


int main()
{
	int arr[100],key,n,result;
	printf("Enter the number of elements (sorted) :\n");
	scanf("%d",&n);
	printf("Enter %d sorted element  :\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search :\n");
	scanf("%d",&key);
	result=binarySearch(arr,n,key);
	
	if(result==-1)
	{
		printf("Element not found in the array.\n");
	}
	else
	{
		printf("Element found at the position : %d\n",result);
		
	}
	return 0;
}
