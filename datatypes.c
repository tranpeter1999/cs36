#include<stdio.h>

int main()
{
    //declaration
    int a = 5; //-32,768 to 32,767
    long b = 1230953; //-2,147,483,648 to 2,147,483,647

    //USE int OVER long WHENEVER POSSIBLE; USES LESS MEMORY AND ITS FASTER

    float c = 42903.231; //1.2E-38 to 3.4E+38
    double d = 3890893089.4783; //2.3E-308 to 1.7E+308

    //USE double MOST COMMONLY; double = 15 decimal places, float = 6 decimal places

    printf("Int:    %d\n",a);
    printf("Long:   %ld\n",b);
    printf("Float:  %f\n",c);
    printf("Double: %lf\n",d);

    char e = 97; //one character (97 = 'a')
    char f[] = "Hello!\n"; //collection of char

    //printing char and strings
    printf("%c\n",e);
    printf(f);

    //random int
    srand(time(NULL));
    int abc = rand();
    printf("%d\n",abc);

    //printing String
    char dollarSign[] = "$";
    printf("%s\n",dollarSign);

    // \t = new tab  \b = backspace \n = new line \" = double quote
    printf("Hey\ttab!\nWhoo\b \n\"Hello \"Mickey\" Mouse!\" says the dog.\n");

    /*
    %d = int
    %f = float
    %ld = long
    %lf = double
    %c = char
    %s = string
    %X = uppercase hex
    %x = lowercase hex
    %o = octal
    */

    int i = 40;
    float x = 12.352;

    //formatting: - = left justify, 10.3 << 10 spaces, 3 digits
    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
    printf("|%10.3f|%15.3e|%-10g|\n",x,x,x);
}
