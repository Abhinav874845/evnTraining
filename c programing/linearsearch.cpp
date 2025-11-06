/*program:-1. Write a c program to implement linear Search and 
        :-1. Write a c program to implement Binary Search*/
        
#include<stdio.h>
int linearSearch(int arr[],int n, int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		return i;
	}
	return -1;
}
int main()
{
	int arr[100],key,n,result;
	printf("Enter the element in array :\n");
	scanf("%d",&n);
	printf("Enter %d elements :\n",n);
	for(int i=0;i<n;i++) 
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the eleemt to search :\n");
	scanf("%d",&key);
	result=linearSearch(arr,n,key);
	if(result !=-1)
	{
		printf("Element %d found at index %d\n ",key,result);	
	}
	else
	printf("Element %d not found in the array .",key,result);
	return 0;
}

