#include<stdio.h>

void main()
{
	int a,b,c,sum;
	float avg;
	char name[15];
	
	printf("Enter a name");
	scanf("%s\n",name);
	printf("Enter 3 numbers");
	scanf("%d%d%%d\n",&a,&b,&c);
	
	sum = a + b + c;
	avg = (float) sum/3;
	printf("%s has an average of %f\n",name,avg);
}
