/*
Loops - sections of code that is done multiple times

3 LOOPING STATEMENTS IN C AND C++

	while loop
	indeterministic entrance control

	do loop
	indeterministic exit control (like opposite of while loop)

	for loop
	deterministic or indeterministic entrance control

	DETERMINISTIC
		know # of times to do loop

		EXAMPLE
			sum 1000 numbers
			or
			process 50 employees

	INDETERMINISTIC
		do not know # of times to do loop

		EXAMPLE
			keep doing x until i say stop

		HOW TO QUIT OUT?
			cop out -> ctrl c (your program is bad)

			sentinel or flag -> user enters 222 or -999 to get out (programmer determines flag)

	ENTRANCE CONTROL
		condition is at the top
		
		STATEMENT
			condition
			{
				...;
				...;
				...;
			}
		
		minimum number of times to do loop = 0
		
	EXIT CONTROL
		condition is at the bottom
		code runs once, then checks condition to run again
		
		STATEMENT
			{
				...;
				...;    (stuff in braces = loop body)
				...;
			}
			condition
	
		minimum number of times to do loop = 1
	
	INDETERMINISTIC ENTRANCE CONTROL
		WHILE LOOPS
			STRUCTURE
				while(condition)
				{
					...;
					...;
					...;
				}
			
			FUNCTION
				read condition
				check condition
				keep looping while condition = true
*/

//EXAMPLE FUNCTION - calculate sum of numbers using loops

#include<stdio.h>

int main()
{
	int num,sum;
	
	printf("Enter a value, -999 to quit");
	scanf("%d",&num);
	
	while(num!=-999)
	{
		sum = sum + num;
		printf("Enter a value, -999 to quit");
		scanf("%d",&num);
	}
	
	printf("Sum is %d\n",sum);
	return 0;
}

/*
Find the sum and average of a series of numbers entered by the user using a loop
*/

#include<stdio.h>

int main()
{
	int num;
	int sum = 0;
	int numNums = 0;
	float avg;

	printf("Enter a value, -999 to quit");
	scanf("%d",&num);

	while(num!=-999)
	{
		sum = sum + num;
		numNums ++;
		printf("Enter a value, -999 to quit");
		scanf("%d",&num);
	}
	
	printf("Sum is %d\n",sum);

	if(numNums != 0)
	{
		avg = (float) sum / numNums;
		printf("Average is %f\n",avg);
	}
	
	return 0;
}

/*
Find the largest number of a series of numbers the user inputs
*/

#include<stdio.h>

int main()
{
	int num;
	int biggestNum = -999;

	printf("Enter a value, -999 to quit");
	scanf("%d",&num);

	while(num!=-999)
	{
		if(num > biggestNum)
			biggestNum = num;
		printf("Enter a value, -999 to quit");
		scanf("%d",&num);
	}
	
	printf("Your biggest number is %d",biggestNum);
	
	return 0;
}





















