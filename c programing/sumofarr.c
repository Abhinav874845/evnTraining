// sum of array element
#include<stdio.h>
int main()
{
	int arr[100],i,n,sum=0;
	printf("Enter the array element  :\n");
	scanf("%d",&n);
	
	printf("Enter the element :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The array element are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf(" \nThe sum of the array element are: ");
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("%d",sum);
	return 0;
}
