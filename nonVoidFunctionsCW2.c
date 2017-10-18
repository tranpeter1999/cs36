#include <stdio.h>

float findbig(float n,float b, float c)
{
        if (a>b && a>=c)
            return a;
        if (b>=a && b>=c)
            return b;

            return c;

}

int main()
{
    float x,y,z;
    printf("Enter 3 floats);
    scaff("%f %f %f",&x,&y,&z);
    float big;// 1
    big=findbig(x,y,z);//2
    printf("largest %f\n",big);//3
    return 0;
}


/*
combined 1/2/3
printf("largest %f\n",findBig(x,y,z));
*/
