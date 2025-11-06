#include<stdio.h>
int main()
{
	int arr[100],i,n;
	printf("enter the no of arr : \n");
	scanf("%d",&n);
	printf("enter the element :\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	printf("the array element are : \n");
	for(i=0;i<n;i++)
	{
	printf("%d  ",arr[i]);
	}
	return 0;
}
