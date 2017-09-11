#include <stdio.h>

int main ()
{
    char name[10];
    int sh;
    float bp,cp,fees;
    float ic,cc,profit;

    float totalProfit;

    int done = 0;

    while(done == 0)
    {
        fflush(stdin);

        printf("Enter stock name OR enter DONE to exit: ");
        gets(name);

        if(strcmp(name,"DONE")==0)
        {
            done = 1;
        }
        else
        {
            printf("Enter number of shares:");
            scanf("%d",&sh);
            printf("Enter buying price:");
            scanf("%f",&bp);
            printf("Enter current price:");
            scanf("%f",&cp);
            printf("Enter yearly fees:");
            scanf("%f",&fees);

            float tempProfit = (float) sh * cp - (float) sh * bp - fees;

            printf("Name of Stock: %s\nInitial Cost: $%.2f\nCurrent Cost: $%.2f\nProfit: $%.2f\n", name, (float) sh * bp, (float) sh * cp, tempProfit);

            totalProfit += tempProfit;
        }
    }

    printf("Your total profit is $%.2f.\nGoodbye!",totalProfit);
}
