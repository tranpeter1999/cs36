/*
This program calculates raise and salary for employees that the user inputs
Peter Tran
CS 36
C. Loke
*/

#include<stdio.h>
#include<string.h>

struct employee
{
	char name[10];
	double salary, raise, newSalary;
};

void savetext(struct employee s[], int n)
{
	int i;
	FILE *f;

	f = fopen("C:\\Users\\ptran88\\Desktop\\cfiles\\employeeSalaryDatabase.text","w");

	for(i = 0; i < n; i++)
	{
		//fprintf(f,"%s\n",s[i].name); -commented out due to using fscanf("%s") to load employee's name
		fprintf(f,"%s %lf %lf %lf\n",s[i].name,s[i].salary,s[i].raise,s[i].newSalary);
	}

	fclose(f);
}

void gettext(struct employee s[], int n)
{
	int i;
	FILE *f;

	f = fopen("C:\\Users\\ptran88\\Desktop\\cfiles\\employeeSalaryDatabase.text","r");

	for(i = 0; i < n; i++)
	{
	    //char temp[10];
		//fgets(s[i].name,sizeof(s[i].name),f);
		//strncpy(temp,s[i].name,strlen(s[i].name)-1);
		//strcpy(s[i].name,temp);
		fscanf(f,"%s %lf %lf %lf\n",&s[i].name,&s[i].salary,&s[i].raise,&s[i].newSalary); //here I was experimenting with getting the function to load without starting a new line for the doubles, ending up going with fscanf("%s") because there shouldn't be a space in someone's first/last name
	}

	fclose(f);
}

void savebin(struct employee s[], int n)
{
	FILE *f;

	f = fopen("C:\\Users\\ptran88\\Desktop\\cfiles\\employeeSalaryDatabase.bin","w");

	fwrite(&s,sizeof(s[0]),n,f);

	fclose(f);
}

void getbin(struct employee s[], int n)
{
	FILE *f;

	f = fopen("C:\\Users\\ptran88\\Desktop\\cfiles\\employeeSalaryDatabase.bin","r");

	fread(&s,sizeof(s[0]),n,f);

	fclose(f);
}

double getRate(double salary)
{
	if(salary < 30000)
		return 7.0;
	if(salary <= 40000)
		return 5.5;
	return 4.0;
}

void load(struct employee s[],int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Enter the employee's name: ");
		gets(s[i].name);
		printf("Enter the employee's salary: ");
		scanf("%lf",&s[i].salary);

		s[i].raise = s[i].salary * (getRate(s[i].salary)/100);
		s[i].newSalary = s[i].salary + s[i].raise;

		fflush(stdin);
	}
}

void print(struct employee s[],int n)
{
	printf("%-10s %-10s %-10s %-10s %-10s\n"," Name"," Salary"," Rate %"," Raise"," New Salary");

	double totalSalary = 0, totalRaise = 0, totalNewSalary = 0;

	int i;
	for(i = 0; i < n; i++)
	{
		printf("%-10s %-10.2lf %-10.2lf %-10.2lf %-10.2lf\n",s[i].name,s[i].salary,getRate(s[i].salary),s[i].raise,s[i].newSalary);
		totalSalary 	+= s[i].salary;
		totalRaise 		+= s[i].raise;
		totalNewSalary 	+= s[i].newSalary;
	}

	printf("%-10s %-10.2lf            %-10.2lf %-10.2lf\n\n\n","Total",totalSalary,totalRaise,totalNewSalary);
}

void sort(struct employee s[],int n)
{
	int i,j;
	struct employee t;
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - 1; j++)
		{
			if(strcmp(s[j].name,s[j+1].name) > 0)
			{
				t = s[j];
				s[j] = s[j+1];
				s[j+1] = t;
			}
		}
	}
}

void main()
{
	int size;
	printf("Enter the number of employees: ");
	scanf("%d",&size);
	fflush(stdin);
	struct employee s[size];
	load(s,size);
	sort(s,size);

	printf("\n\n");
	print(s,size);
	//STORING IN TEXT
	savetext(s,size);
	gettext(s,size);

	printf("This is the result from getting the text file\n");
	print(s,size);
	//STORING IN BIN
	savebin(s,size);
	getbin(s,size);

	printf("This is the result from getting the bin file\n");
	print(s,size);
}
