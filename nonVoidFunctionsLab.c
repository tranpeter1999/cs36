#include <stdio.h>

char findgrade(int s)
{
    if (s>=90 && s<=100)
        return 'A';
    if (s>=80 && s<=89)
        return 'B';
    if (s>=60 && s<=79)
        return 'C';
    if (s>=1 && s<=59)
        return 'F';

        return 'I';
}


int main ()
{
    int s;
    printf("Enter a Score:");
    scanf("%d",&s);
    printf("your grade is %c\n",findgrade(s));
    /*
    char grade;
    grade=findgrade(s);
    printf"Your grade is %c\n" ,grade);
    */

    return 0;
}
