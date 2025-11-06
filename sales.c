//programming
/*
Name:EMMANUEL OSORO
Reg Number:PA106/G/28823/25
Description:A C PROGRAM THAT STORESDAILY SALES TRANSACTIONS IN A FILE
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float amount, total = 0.0;

    //  Open the file 
    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error opening file! Make sure sales.txt exists.\n");
        return 1;
    }

    //  Read all transactions and calculate total
    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    //  Close the file
    fclose(fp);

    // Display total sales
    printf("Total sales for the day: %.2f\n", total);

    return 0;
}
