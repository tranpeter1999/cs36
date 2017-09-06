#include<stdio.h>

void main()
{
	int a,b,c,sum;
	float avg;
	char name[15];
	
	printf("Enter a name");
	scanf("%s",name);
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	sum = a + b + c;
	avg = sum/3;
	printf("%s has an average of %f\n",name,avg);
}