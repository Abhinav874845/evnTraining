#include<stdio.h>
int main()
{
	int p=44,q;
	q=p++ +p+ p--+p--;
	q=++p+q-++p+p-- - --p;
	printf("the value is %d :",q);
	return 0;
}
