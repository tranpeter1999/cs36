    /*
    This program calculates your daily driving so you can estimate how much money could be saved by carpooling. The program takes
    total miles driven per day, cost per gallon of gasoline, average miles per gallon, parking fees, and tolls as inputs.
    Written by Peter Tran
    8/30/17
    C. Loke
    CS36
    */

    #include<stdio.h>

    int getCents(double amt)
    {
        int dollars,cents;

        dollars = (int) amt;
        cents = (int) ((amt-dollars)*100+0.5);

        //checking for formatting
        if(cents<10)
        {
            cents = cents + 10000;
        }

        return cents;
    }

    int getDollars(double amt)
    {
        int dollars;

        dollars = (int) amt;

        return dollars;
    }

    int main()
    {
        //declarations
        int mi;
        double cost,avg,parking,tolls,total;

        //input
        printf("How many miles to you drive a day?\n");
        scanf("%d",&mi);

        printf("How much does your gas cost per gallon?\n");
        scanf("%lf",&cost);

        printf("How many miles do you drive per gallon of gas on average?\n");
        scanf("%lf",&avg);

        printf("What is the total cost of parking fees each day?\n");
        scanf("%lf",&parking);

        printf("What is the total cost of toll fees each day?\n");
        scanf("%lf",&tolls);

        //calculation
        total = tolls + parking + ((double) mi/avg)*cost;

        //output
        printf("The total miles driven per day: %d\n",mi);

        if(getCents(cost) < 10000)
        {
            printf("The cost per gallon of gasoline: $%d.%d\n",getDollars(cost),getCents(cost));
        }
        else
        {
            printf("The cost per gallon of gasoline: $%d.0%d\n",getDollars(cost),getCents(cost)-10000);
        }

        printf("The average miles per gallon: %lf\n",avg);

        if(getCents(parking) < 10000)
        {
             printf("The parking fees per day: $%d.%d\n",getDollars(parking),getCents(parking));
        }
        else
        {
             printf("The parking fees per day: $%d.0%d\n",getDollars(parking),getCents(parking)-10000);
        }

        if(getCents(tolls) < 10000)
        {
             printf("The tolls per day: $%d.%d\n",getDollars(tolls),getCents(tolls));
        }
        else
        {
             printf("The tolls per day: $%d.0%d\n",getDollars(tolls),getCents(tolls)-10000);
        }

        if(getCents(total) < 10000)
        {
             printf("Your daily cost of driving to work is $%d.%d\n",getDollars(total),getCents(total));
        }
        else
        {
             printf("Your daily cost of driving to work is $%d.0%d\n",getDollars(total),getCents(total)-10000);
        }

        return 0;
    }
