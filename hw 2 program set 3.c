/*
This program allows the user to enter a grade in one of alphabetic letters A, B, C, D, or F
It then prints the corresponding score the numerical value.
It accounts for both uppercase and lowercase
This program uses switch statements instead of if else
*/

//Peter Tran
//1104985
//Program : Grade check (with switch statements)

#include<stdio.h>

int main()
{
    char grade;

    printf("Enter a grade {A,B,C,D,F]:   ");
    scanf("%c",&grade);

    switch(grade)
    {
        case 'A': case 'a':	printf("The score for the grade 'A' is 4.00"); break;

        case 'B': case 'b':	printf("The score for the grade 'B' is 3.00"); break;

        case 'C': case 'c':	printf("The score for the grade 'C' is 2.00"); break;

        case 'D': case 'd':	printf("The score for the grade 'D' is 1.00"); break;

        case 'F': case 'f':	printf("The score for the grade 'F' is 0.00"); break;

        default: 			printf("Invalid");
    }

    return 0;
}


/* OUTPUTS
Testing lowercase

Enter a grade {A,B,C,D,F]:   b
The score for the grade 'B' is 3.00
Process returned 0 (0x0)   execution time : 0.562 s
Press any key to continue.

Testing uppercase

Enter a grade {A,B,C,D,F]:   F
The score for the grade 'F' is 0.00
Process returned 0 (0x0)   execution time : 1.671 s
Press any key to continue.

Testing invalid #1

Enter a grade {A,B,C,D,F]:   g
Invalid
Process returned 0 (0x0)   execution time : 1.749 s
Press any key to continue.

Testing invalid #2

Enter a grade {A,B,C,D,F]:   2
Invalid
Process returned 0 (0x0)   execution time : 1.565 s
Press any key to continue.
*/
