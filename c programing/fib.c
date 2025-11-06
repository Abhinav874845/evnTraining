#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,r1,r2;
	printf("Enter tha value of a,b,and c \n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("the root is equal and real");
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("root1 is %f root 2 is %f",r1,r2);
		
	}
	else if(d>0)
	{
		printf("roots are real and different ");
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("root1 is %f root 2 is %f",r1,r2);
	}
	else{
		printf("root are imeginary");
	}
	return 0;
}
