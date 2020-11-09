#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pound;
    printf("This is a Pound(eg) Yen(janpanese currency) converter program\n\n");
    printf("please enter the value of pounds : ");
    scanf("%f", &pound);
    printf("\nThe value in Yen equals %f \n",pound*6.59);


    return 0;
}
