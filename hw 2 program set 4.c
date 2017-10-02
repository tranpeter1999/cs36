/*
This program is a simple calculator that can add, subtract, multipy, divide and find the remainder
The program can take input that is keyed in a natural way
*/

//Peter Tran
//1104985
//Program : A calculator

#include<stdio.h>

void main()
{
	double number1 = 0.0;	//First operand value a decimal number
	double number2 = 0.0;	//Second operand value a decimal number
	char operation = 0;		//Operation - must be +,-,*,/ or %
	
	printf("\nEnter the calculation\n");
	scanf("%lf%c%lf",&number1,&operation,&number2);
	
	switch(operation)
	{
		case '+': 	printf("= %lf",number1 + number2);
		case '-': 	printf("= %lf",number1 - number2);
		case '*': 	printf("= %lf",number1 * number2);
		case '/':	if(number2 != 0)
						{
							printf("= %lf",number1 / number2);
							printf("\nThe remainder is %d",number1 % number2);
						}
					else
						printf("Division by zero error!");
		default:	printf("Invalid");
	}
}
