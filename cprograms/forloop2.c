#include<stdio.h>
void main()
{
	int a;
	for(a=1; a<=100; a++)
	{
		if(a>=50)
		continue;
		printf("%d\t",a);
	}
	printf("sequence is completed");
}
