#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int ConsumptionUnits;
    printf("Enter your units:");
    scanf("%d", &ConsumptionUnits);

        if (ConsumptionUnits>=401)
            printf ("Rate of charge: 400 taka plus 7 taka per unit excess of 400.\n");
        else if (ConsumptionUnits>201)
            printf ("Rate of charge: 100 taka plus 6 taka per unit excess of 100.\n");
        else if (ConsumptionUnits>101)
            printf ("Rate of charge: 250 taka plus 5 taka per unit excess of 200.\n");
        else
            printf ("Rate of charge: 4.5 taka per unit.\n");
    return 0;
}
