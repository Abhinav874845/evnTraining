#include<stdio.h>
int main()
{
int age;
printf("enter your age :");
scanf("%d",&age);
if(age >18 || age<30){
printf("your age is %d\n",age);
printf("you are eligible for driving\n");
}
else
{
 
printf("you are not allowed");
}
return 0;
}
