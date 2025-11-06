#include<stdio.h>
int main ()
{
	int a[10][10],b[10][10],c[10][10],r,C,i,j,k;
	printf("enter the value of row: ");
	scanf("%d",&r);
	printf("enter the value of column: ");
	scanf("%d",&C);
	//for entering A value:
	printf("enter the value of A:\n");
	for(i=0;i<r;i++){
		for(j=0;j<C;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//for entering the value of B:
	printf("enter the value of B:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("printing the mul of matrix\n");
	//calulation
for(i=0;i<r;i++){
	for(j=0;j<C;j++){
		c[i][j]=0;
		for(k=0;k<C;k++){
			c[i][j]+=a[i][k]*b[k][j];
		}
	}
}
//for out put
for(i=0;i<r;i++)
{
	for(j=0;j<C;j++)
	{
		printf("%d\t",c[i][j]);
	}
	printf("\n");
}




return 0;	
}
