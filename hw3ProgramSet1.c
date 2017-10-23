/*
This function takes salaries as user input, calculates their raises, and prints out the salaries, raise percentage, raise amount, and new salaries in a grid.
Written by Peter Tran
CS 36 C. Loke
*/

#include<stdio.h>

double input(double sal)
{
    scanf("%lf",&sal);

    return sal;
}

double getRaisePercent(double sal)
{
    if(sal > 0 && sal < 30000)
        sal = 0.07;
    if(sal >= 30000 && sal <= 40000)
        sal = 0.055;
    if(sal > 40000)
        sal = 0.04;

    return sal;
}

double getRaise(double sal)
{
    return sal*getRaisePercent(sal);
}

void calc(double sal1, double sal2, double sal3, double sal4, double sal5, double sal6, double sal7, double *total, double *raise, double *newtotal)
{
    *total = sal1 + sal2 + sal3 + sal4 + sal5 + sal6 + sal7;

    *raise = getRaise(sal1) + getRaise(sal2) + getRaise(sal3) + getRaise(sal4) + getRaise(sal5) + getRaise(sal6) + getRaise(sal7);

    *newtotal = *total + *raise;
}

void print(double sal1, double sal2, double sal3, double sal4, double sal5, double sal6, double sal7, double total, double raise, double newtotal)
{
    printf("                Calculation of Salary Raises\n\n");
    /* pretty version
    printf("          Salary    Rate      Raise     New Salary\n");
    printf("          $%-9.2lf%-10.2lf$%-9.2lf$%-9.2lf   \n", sal1, 100.0*getRaisePercent(sal1), getRaise(sal1), sal1+getRaise(sal1));
    printf("          $%-9.2lf%-10.2lf$%-9.2lf$%-9.2lf   \n", sal2, 100.0*getRaisePercent(sal2), getRaise(sal2), sal2+getRaise(sal2));
    printf("          $%-9.2lf%-10.2lf$%-9.2lf$%-9.2lf   \n", sal3, 100.0*getRaisePercent(sal3), getRaise(sal3), sal3+getRaise(sal3));
    printf("          $%-9.2lf%-10.2lf$%-9.2lf$%-9.2lf   \n", sal4, 100.0*getRaisePercent(sal4), getRaise(sal4), sal4+getRaise(sal4));
    printf("          $%-9.2lf%-10.2lf$%-9.2lf$%-9.2lf   \n", sal5, 100.0*getRaisePercent(sal5), getRaise(sal5), sal5+getRaise(sal5));
    printf("          $%-9.2lf%-10.2lf$%-9.2lf$%-9.2lf   \n", sal6, 100.0*getRaisePercent(sal6), getRaise(sal6), sal6+getRaise(sal6));
    printf("          $%-9.2lf%-10.2lf$%-9.2lf$%-9.2lf   \n", sal7, 100.0*getRaisePercent(sal7), getRaise(sal7), sal7+getRaise(sal7));
    printf("Total     $%-9.2lf          $%-9.2lf$%-9.2lf   \n", total, raise, newtotal);
    */

    // textbook version
    printf("          Salary     Rate       Raise      New Salary\n");
    printf("          %10.2lf %10.2lf %10.2lf %10.2lf   \n", sal1, 100.0*getRaisePercent(sal1), getRaise(sal1), sal1+getRaise(sal1));
    printf("          %10.2lf %10.2lf %10.2lf %10.2lf   \n", sal2, 100.0*getRaisePercent(sal2), getRaise(sal2), sal2+getRaise(sal2));
    printf("          %10.2lf %10.2lf %10.2lf %10.2lf   \n", sal3, 100.0*getRaisePercent(sal3), getRaise(sal3), sal3+getRaise(sal3));
    printf("          %10.2lf %10.2lf %10.2lf %10.2lf   \n", sal4, 100.0*getRaisePercent(sal4), getRaise(sal4), sal4+getRaise(sal4));
    printf("          %10.2lf %10.2lf %10.2lf %10.2lf   \n", sal5, 100.0*getRaisePercent(sal5), getRaise(sal5), sal5+getRaise(sal5));
    printf("          %10.2lf %10.2lf %10.2lf %10.2lf   \n", sal6, 100.0*getRaisePercent(sal6), getRaise(sal6), sal6+getRaise(sal6));
    printf("          %10.2lf %10.2lf %10.2lf %10.2lf   \n", sal7, 100.0*getRaisePercent(sal7), getRaise(sal7), sal7+getRaise(sal7));
    printf("Total     %10.2lf            %10.2lf %10.2lf   \n", total, raise, newtotal);
}

int main()
{
    double sal1,sal2,sal3,sal4,sal5,sal6,sal7,total,raise,newtotal;

    printf("Enter salaries\n");

    sal1 = input(sal1);
    sal2 = input(sal2);
    sal3 = input(sal3);
    sal4 = input(sal4);
    sal5 = input(sal5);
    sal6 = input(sal6);
    sal7 = input(sal7);

    calc(sal1,sal2,sal3,sal4,sal5,sal6,sal7,&total,&raise,&newtotal);

    print(sal1,sal2,sal3,sal4,sal5,sal6,sal7,total,raise,newtotal);

    return 0;
}
