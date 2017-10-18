#include<stdio.h>

float single(float TI)
{
    if(TI > 0 && TI <= 24000)
        return TI*.15;
    if(TI > 24000 && TI <= 58150)
        return 3600 + (TI-24000)*.28;
    if(TI > 58150 && TI <= 121300)
        return 13162 + (TI-58150)*.31;
    if(TI > 121300 && TI <= 263750)
        return 32738.5 + (TI-121300)*.36;
    if(TI > 263750)
        return 84020.5 + (TI-263750)*.396;
}

float joint(float TI)
{
	if(TI > 0 && TI <= 40100)
        return TI*.15;
    if(TI > 40100 && TI <= 96900)
        return 6015 + (TI-40100)*.28;
    if(TI > 96900 && TI <= 147700)
        return 21919 + (TI-96900)*.31;
    if(TI > 147700 && TI <= 263750)
        return 37667 + (TI-147700)*.36;
    if(TI > 263750)
        return 79445 + (TI-263750)*.396;
}

float separately(float TI)
{
	if(TI > 0 && TI <= 20050)
        return TI*.15;
    if(TI > 20050 && TI <= 48450)
        return 3007.5 + (TI-20050)*.28;
    if(TI > 48450 && TI <= 73850)
        return 10959.5 + (TI-48450)*.31;
    if(TI > 73850 && TI <= 131875)
        return 18833.5 + (TI-73850)*.36;
    if(TI > 131875)
        return 39722.5 + (TI-131875)*.396;
}

float head(float TI)
{
	if(TI > 0 && TI <= 32150)
        return TI*.15;
    if(TI > 32150 && TI <= 83050)
        return 4822.5 + (TI-32150)*.28;
    if(TI > 83050 && TI <= 134500)
        return 19074.5 + (TI-83050)*.31;
    if(TI > 134500 && TI <= 263750)
        return 35024 + (TI-134500)*.36;
    if(TI > 263750)
        return 81554 + (TI-263750)*.396;
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
		default: printf("Invalid choice"); menu();
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
