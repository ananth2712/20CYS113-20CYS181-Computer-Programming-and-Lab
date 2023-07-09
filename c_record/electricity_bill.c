#include <stdio.h>
int main() {
    char name[100];
    char ebNumber[100];
    int units, i;
    int FREEUNITS,RATE1,RATE2,RATE3,RATE4;
    float bill;
    FREEUNITS=100;
    RATE1=2.25;
    RATE2=4.50;
    RATE3=6.00;
    RATE4=8.00;
 
    for (i = 1; i <= 5; i++) {
        printf("Enter details for Home %d:\n", i);
        printf("consumer Name: ");
        scanf("%s", name);
        printf("EB Number: ");
        scanf("%s", ebNumber);
        printf("units consumed: ");
        scanf("%d", &units);
        if (units <= FREEUNITS) {
            bill = 0.0;
        } else if (units <= (FREEUNITS + 300)) {
            bill = (units - FREEUNITS) * RATE1;
        } else if (units <= (FREEUNITS + 400)) {
            bill = 300 * RATE1 + (units - (FREEUNITS + 300)) * RATE2;
        } else if (units <= (FREEUNITS + 500)) {
            bill = 300 * RATE1 + 100 * RATE2 + (units - (FREEUNITS + 400)) * RATE3;
        } else {
            bill = 300 * RATE1 + 100 * RATE2 + 100 * RATE3 + (units - (FREEUNITS + 500)) * RATE4;
        }
 
        printf("Electricity Bill for Home %d (consumer name: %s, EB Number:  %s ): %f INR\n\n", i, name, ebNumber, bill);
    }
 
    return 0;
}
