/*
This program allows the user to enter a grade in one of alphabetic letters A, B, C, D, or F
It then prints the corresponding score the numerical value.
It accounts for both uppercase and lowercase
*/

int main()
{
	char grade;
	
	printf("Enter a grade {A,B,C,D,F]:   ");
	scanf("%c",&grade);
	
	if(grade == 'A' || grade == 'a')
		printf("\nThe score for the grade 'A' is 4.00");
	else if(grade == 'B' || grade == 'b')
		printf("\nThe score for the grade 'B' is 3.00");
	else if(grade == 'C' || grade == 'c')
		printf("\nThe score for the grade 'C' is 2.00");
	else if(grade == 'D' || grade == 'd')
		printf("\nThe score for the grade 'D' is 1.00");
	else if(grade == 'F' || grade == 'f')
		printf("\nThe score for the grade 'F' is 0.00");
	else
		printf("\nInvalid");
	
	return 0;
}
