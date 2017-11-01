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
	int num, biggestNum;

	printf("Enter a value, -999 to quit");
	scanf("%d",&num);
	
	biggestNum = num;

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

/*
DO LOOPS

do
{
	...
	...
	...
} while(condition);

EXAMPLE

do
{
	printf("Enter a number from 1 to 5");
	scanf("%d",&num);
} while(num < 1 || num > 5);
*/

//SECOND CODE SNIPPET USING DOWHILE

#include<stdio.h>

int main()
{
	int num = 0;
	int sum = 0;
	int numNums = -1;
	float avg;

	do
	{
		sum = sum + num;
        numNums ++;
		printf("Enter a value, -999 to quit");
		scanf("%d",&num);
	} while(num!=-999);

	printf("Sum is %d\n",sum);

	if(numNums != 0)
	{
		avg = (float) sum / numNums;
		printf("Average is %f\n",avg);
	}

	return 0;
}

//THIRD CODE SNIPPET USING DOWHILE

#include<stdio.h>

int main()
{
	int num = -2147483648, biggestNum = num, i = -1;

	do
	{
        if(num > biggestNum)
            biggestNum = num;
        printf("Enter a value, -999 to quit");
        scanf("%d",&num);
        i++;
	} while(num!=-999);

	if(i != 0)
		printf("Your biggest number is %d",biggestNum);
	else
		printf("You did not enter any numbers");

	return 0;
}

/*
Write a program to calculate the sum of numbers from m to n
User inputs m and n
No -999 or flag
*/

#include<stdio.h>

int main()
{
	int m,n,sum = 0;

	printf("Enter a value for m\n");
	scanf("%d",&m);
	printf("Enter a value larger or equal to m for n\n");
	scanf("%d",&n);

	while(m<=n)
	{
		sum = sum + m;
		m++;
	}

	printf("The sum is %d",sum);
	return 0;
}

/*
Use while loops
Write a program read the user inputted numbers until -1 is inputted. Count how many negatives, zeros, and positives
*/

#include<stdio.h>

int main()
{
	int num, neg = 0, zer = 0, pos = 0;
	
	printf("Enter a value, -1 to exit\n");
	scanf("%d",&num);
	
	while(num != -1)
	{
		if(num < 0)
			neg++;
		if(num == 0)
			zer++;
		if(num > 0)
			pos++;
		printf("Enter a value, -1 to exit\n");
		scanf("%d",&num);
	}
	
	printf("%d negatives, %d zeros, %d positives",neg,zer,pos);
	
	return 0;
}

/*
Write a program using do-loops only to display the square and cube of the first n integers

output
enter a value 5
1 1  1
2 4  8
3 9  27
4 16 64
5 25 125
*/

#include<stdio.h>

int main()
{
	int num,i = 0;
	
	printf("Enter a value\n");
	scanf("%d",num);
	
	while(i<num)
	{
		i++;
		printf("%d %d %d",i,i*i,i*i*i);
	}
	
	return 0;
}

/*
Write a program to list all the leap years from 1900 to 2100 (do while)
*/

#include<stdio.h>

int main()
{
	int year = 1900;
	
	do
	{
		printf("%d\n",year);
		year+=4;
	} while(year <= 2100);
	
	return 0;
}

/*
Write a program to read characters until a star (*) is entered. Count the number of uppercase, lowercase, and numbers with a do-while
*/

#include<stdio.h>

int main()
{
	char c;
	int up = 0, lo = 0, nu = 0;

	do
	{
		printf("Enter a char, * to exit\n");
		scanf("%c",&c);
		if(c >= 97 && c <= 122)
			lo++;
		if(c >= 65 && c <= 90)
			up++;
		if(c >= 48 && c <= 57)
			nu++;
	} while(c != '*');
	
	printf("%d uppercase, %d lowercase, %d numbers",up,lo,nu);
	
	return 0;
}









