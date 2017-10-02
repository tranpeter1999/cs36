/*
This program allows the user to enter a grade in one of alphabetic letters A, B, C, D, or F
It then prints the corresponding score the numerical value.
It accounts for both uppercase and lowercase
*/

//Peter Tran
//1104985
//Program : Grade check

#include<stdio.h>

int main()
{
	char grade;

	printf("Enter a grade {A,B,C,D,F]:   ");
	scanf("%c",&grade);

	if(grade == 'A' || grade == 'a')
		printf("The score for the grade 'A' is 4.00");
	else if(grade == 'B' || grade == 'b')
		printf("The score for the grade 'B' is 3.00");
	else if(grade == 'C' || grade == 'c')
		printf("The score for the grade 'C' is 2.00");
	else if(grade == 'D' || grade == 'd')
		printf("The score for the grade 'D' is 1.00");
	else if(grade == 'F' || grade == 'f')
		printf("The score for the grade 'F' is 0.00");
	else
		printf("Invalid");

	return 0;
}

/* OUTPUTS
Testing lowercase

Enter a grade {A,B,C,D,F]:   a
The score for the grade 'A' is 4.00
Process returned 0 (0x0)   execution time : 1.971 s
Press any key to continue.

Testing uppercase

Enter a grade {A,B,C,D,F]:   D
The score for the grade 'D' is 1.00
Process returned 0 (0x0)   execution time : 0.905 s
Press any key to continue.

Testing invalid #1

Enter a grade {A,B,C,D,F]:   Y
Invalid
Process returned 0 (0x0)   execution time : 1.887 s
Press any key to continue.

Testing invalid #2

Enter a grade {A,B,C,D,F]:   6
Invalid
Process returned 0 (0x0)   execution time : 2.012 s
Press any key to continue.
*/
