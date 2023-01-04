#include<stdio.h>
#include<math.h>

void main()
{
	float a,b,c,x1,x2,r;
	printf("enter the values of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	r = sqrt(pow(b,2)-(4*a*c));
	x1 = (-b+r)/(2*a);
	x2 = (-b-r)/(2*a);
	printf("%f",x1);
	printf("%f",x2);
}
