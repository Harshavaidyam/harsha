#include<stdio.h>
void main()
{
	int a,b = -100;
	for(a=100; a>=b; a--)
	{
		printf("%d\t",a);
	}
	printf("out of range");
}
