#include<stdio.h>
int main()
{
	float mark1,mark2,mark3,mark4;
	float total,aggregate;
	char grade;
	printf("Enter mark of 4 subject(out of 100);\n");
	scanf("%f%f%f%f",&mark1,&mark2,&mark3,&mark4);
	//calcilate total marks
	total=mark1+mark2+mark3+mark4;
	//calculate aggregate mark
	aggregate=total/4.0;
	if(aggregate>=90)
	{
	grade='A';
	}
	else if(aggregate>=80){
		grade='B';
	}
	else if(aggregate>=70){
		grade='C';
	}
	else if (aggregate>=60){
		grade='D';
	}
	else if (aggregate>=50){
		grade='E';
	}
	else
	{
		grade='F';
	}
printf("total marks%2f\n",total);
printf("aggregate percentage %2f\n",aggregate);
printf("grade%c",grade);
return 0;
}
