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
		case '+': 	printf("= %lf",number1 + number2); break;
		case '-': 	printf("= %lf",number1 - number2); break;
		case '*': 	printf("= %lf",number1 * number2); break;
		case '/':	if(number2 != 0)
						{
							printf("= %lf",number1 / number2);
							if((int) number1 == number1 && (int) number2 == number2)
                                printf("\nWithout decimals = %d. The remainder would be %d",(int) number1 / (int) number2, (int) number1 % (int) number2);
                            break;
						}
					else
						printf("Division by zero error!"); break;
		default:	printf("Invalid"); break;
	}
}

/* OUTPUT
Testing +

Enter the calculation
3+5.2
= 8.200000
Process returned 10 (0xA)   execution time : 3.342 s
Press any key to continue.

Testing -

Enter the calculation
9.23-2.0001
= 7.229900
Process returned 10 (0xA)   execution time : 7.287 s
Press any key to continue.

Testing *

Enter the calculation
612*0.1
= 61.200000
Process returned 11 (0xB)   execution time : 8.186 s
Press any key to continue.

Testing / without both int

Enter the calculation
5.3/2
= 2.650000
Process returned 3199 (0xC7F)   execution time : 2.245 s
Press any key to continue.

Testing / with both int

Enter the calculation
7/2
= 3.500000
Without decimals = 3. The remainder would be 1
Process returned 47 (0x2F)   execution time : 2.826 s
Press any key to continue.
*/
