/*
Adding fractions
Enter first fraction:   5/6
Enter second fraction:  3/4
The sum is:            38/24
*/

#include<stdio.h>

int main()
{
	int na,da,nb,db;

	printf("Enter first fraction: ");
	scanf("%d/%d",&na,&da);
	printf("Enter second fraction: ");
	scanf("%d/%d",&nb,&db);

	int dt = da*db;
	int nt = na*db + nb*da;

	printf("The sum is: %d/%d",nt,dt);

	return 0;
}
