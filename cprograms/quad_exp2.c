#include<stdio.h>
#include<math.h>

void main()
{
	float x,s1,s2;
	printf("enter the value of x:");
	scanf("%f",&x);
	s1 = sqrt(x);
	s2 = pow(x,2);
	printf("%0.2f\n%0.2f\n",s1,s2);
}

