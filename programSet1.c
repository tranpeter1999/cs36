/*
This program finds the area and circumference of a circle, allowing the user to pick the radius of the circle.
It then displays the radius, diameter, area, and circumference up to 5 decimal places.
Written by Peter Tran
8/30/17
C. Loke
CS36
*/

#include<stdio.h>

//calculations
double roundToFiveDecimalPlaces(double f)
{
    f = (int) ((f * 100000) + 0.5);
    return f/100000;
}

int main()
{
    //declarations
    double r,pi;
    //data
    r = 0;
    pi = 3.14159;

    printf("Enter a radius!\n");
    scanf("%lf",&r);
    //output
    printf("The radius of the circle is %.5lf.\n",roundToFiveDecimalPlaces(r));
    printf("The diameter of the circle is %.5lf.\n",roundToFiveDecimalPlaces(r*2));
    printf("The area of the circle is %.5lf.\n",roundToFiveDecimalPlaces(pi*r*r));
    printf("The circumference is %.5lf.\n",roundToFiveDecimalPlaces(2*pi*r));
    
    return 0;
}
