#include<stdio.h>
#include<string.h>
	int main()
	{
		char s[50]="Wellcome to my world";
		int i=0,c=0;
		while(s[i]!='\0')
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			{
				c++;
			}
			i++;
		}
		printf("The number of vowels %d",c);
	}
