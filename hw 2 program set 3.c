/*
This program allows the user to enter a grade in one of alphabetic letters A, B, C, D, or F
It then prints the corresponding score the numerical value.
It accounts for both uppercase and lowercase
This program uses switch statements instead of if else
*/

int main()
{
	char grade;
	
	printf("Enter a grade {A,B,C,D,F]:   ");
	scanf("%c",&grade);
	
	switch(grade)
	{
		case 'A': case 'a':	printf("\nThe score for the grade 'A' is 4.00");
		
		case 'B': case 'b':	printf("\nThe score for the grade 'B' is 3.00");
		
		case 'C': case 'c':	printf("\nThe score for the grade 'C' is 2.00");
		
		case 'D': case 'd':	printf("\nThe score for the grade 'D' is 1.00");
		
		case 'F': case 'f':	printf("\nThe score for the grade 'F' is 0.00");
		
		default: 			printf("\nInvalid");
	}
	
	return 0;
}
