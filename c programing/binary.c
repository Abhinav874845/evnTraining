#include<stdio.h>
int main()
{
	int a[10],i,n,j;
	printf("enter the decimal number :\n");
	scanf("%d",&n);
	i=0;
	while(n>0){
		a[i]=n%2;
		n=n/2;
		i++;
	}
	printf("binary number is :\n");
	for(j=i-1;j>=0;j--){printf("%d",a[j]);
	}
}
