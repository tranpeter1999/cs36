//TAX CALC TEST

#include<stdio.h>

float rate(int a)
{
	switch(a)
	{
		case 1: return 24000	; //Single filing status bound 1
		case 2: return 58150	; //Single filing status bound 2
		case 3: return 121300	; //Single filing status bound 3
		case 4: return 263750	; //Single filing status bound 4

		case 11: return 40100	; //Married jointly filing status bound 1
		case 12: return 96900	; //Married jointly filing status bound 2
		case 13: return 147700	; //Married jointly filing status bound 3
		case 14: return 263750	; //Married jointly filing status bound 4

		case 21: return 20050	; //Married separately filing status bound 1
		case 22: return 48450	; //Married separately filing status bound 2
		case 23: return 73850	; //Married separately filing status bound 3
		case 24: return 131875	; //Married separately filing status bound 4

		case 31: return 32150	; //Head filing status bound 1
		case 32: return 48450	; //Head filing status bound 2
		case 33: return 134500	; //Head filing status bound 3
		case 34: return 263750	; //Head filing status bound 4
		
		case 41: return .28		; //Rate 1
		case 42: return .31		; //Rate 2
		case 43: return .36		; //Rate 3
		case 44: return .396	; //Rate 4
	}
}

float single(float TI)
{
    if(TI > 0 && TI <= rate(1))
        return TI*.15;
    if(TI > rate(1) && TI <= rate(2))
        return 3600 + (TI-rate(1))*(rate(41));
    if(TI > rate(2) && TI <= rate(3))
        return 13162 + (TI-rate(2))*(rate(42));
    if(TI > rate(3) && TI <= rate(4))
        return 32738.5 + (TI-rate(3))*(rate(43));
    if(TI > rate(4))
        return 84020.5 + (TI-rate(4))*(rate(44));
}

float joint(float TI)
{
	if(TI > 0 && TI <= rate(11))
        return TI*.15;
    if(TI > rate(11) && TI <= rate(12))
        return 6015 + (TI-rate(11))*(rate(41));
    if(TI > rate(12) && TI <= rate(13))
        return 21919 + (TI-rate(12))*(rate(42));
    if(TI > rate(13) && TI <= rate(14))
        return 37667 + (TI-rate(13))*(rate(43));
    if(TI > rate(14))
        return 79445 + (TI-rate(14))*(rate(44));
}

float separately(float TI)
{
	if(TI > 0 && TI <= rate(21))
        return TI*.15;
    if(TI > rate(21) && TI <= rate(22))
        return 3007.5 + (TI-rate(21))*(rate(41));
    if(TI > rate(22) && TI <= rate(23))
        return 10959.5 + (TI-rate(22))*(rate(42));
    if(TI > rate(23) && TI <= rate(24))
        return 18833.5 + (TI-rate(23))*(rate(43));
    if(TI > rate(24))
        return 39722.5 + (TI-rate(24))*(rate(44));
}

float head(float TI)
{
	if(TI > 0 && TI <= rate(31))
        return TI*.15;
    if(TI > rate(31) && TI <= rate(32))
        return 4822.5 + (TI-rate(31))*(rate(41));
    if(TI > rate(32) && TI <= rate(33))
        return 19074.5 + (TI-rate(32))*(rate(42));
    if(TI > rate(33) && TI <= rate(34))
        return 35024 + (TI-rate(33))*(rate(43));
    if(TI > rate(34))
        return 81554 + (TI-rate(34))*(rate(44));
}
void menu()
{
	float t;
	char choice;

	printf("Enter your Taxable Income (TI)\n");
	scanf("%f",&t);

	fflush(stdin);

	printf("What is your filing status? \n[A] Single, \n[B] Married filing Jointly, \n[C] Married filing separately, \n[D] Head of Household\n");
	scanf("%c",&choice);

	switch(choice)
	{
		case 'A': case 'a': t = single(t);		    break;
		case 'B': case 'b': t = joint(t);		    break;
		case 'C': case 'c': t = separately(t);  	break;
		case 'D': case 'd': t = head(t);		    break;
		default: printf("Invalid choice\n"); menu();
	}

	printf("The amount of tax due is $%.2f\n",t);

	fflush(stdin);

	printf("Continue? [Y]/[N]\n");
	scanf("%c",&choice);

	switch(choice)
	{
		case 'Y': case 'y': menu(); break;
	}
}

int main()
{
	menu();
	printf("Terminating program");
	return 0;
}
