#include<stdio.h>
void main()
{
	int a;
	if((a = 0,1,2,3,4,5,6))
	{
		printf("hi%d",a);
	}
	else
	{
		printf("bye%d",a);
	}
}
