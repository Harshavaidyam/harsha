#include<stdio.h>
void main(void)
{
	int months,days;
	printf("enter days/n");
	scanf("%d",&days);
	months=days / 30;
	days=days%30;
	printf("months = %d days = %d",months,days);
}

