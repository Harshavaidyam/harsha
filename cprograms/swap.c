#include<stdio.h>

void main()
{
	int a=7,b=8;
	a = a^b;
	b = a^b;
	a = a^b;
	scanf("%d%d",&a,&b);
	printf("a:%d\n b:%d",a,b);
}

