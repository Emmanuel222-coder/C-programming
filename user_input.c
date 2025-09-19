//programming
/*
Name:Emmanuel Osoro
Reg Number: PA106/G/28823/25
Description:A C program to prompt the user to display height, idnumber and bankbalance
*/

#include <stdio.h>
int main() {
    // variable declaration
    float height, bankbalance;
    int idnumber;
    

    // Prompt user for height
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Prompt user for ID number
    printf("\nEnter your ID number: ");
    scanf("%d", &idnumber);

    // Prompt user for bank balance
    printf("\nEnter your bank balance: ");
    scanf("%f", &bankbalance);
    
    printf("Height: %f meters\n", height);
    printf("ID Number: %d\n", idnumber);
    printf("Bank Balance: $%.2f\n", bankbalance);

    return 0;
}