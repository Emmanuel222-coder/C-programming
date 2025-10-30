//programming
/*
Name: EMMANUEL OSORO
Reg Number: PA106/G/28823/25
Description: A C PROGRAM TO DISPLAY THE TOTAL NUMBER OF OCCUPIED ROOMS
*/

#include<stdio.h>
#include <stdlib.h>
int main(){
    int chain[3][5][10];
    int i, j, k;
    int total_occupied = 0;

    // Assign random occupancy (1 or 0) to each room
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            for(k = 0; k < 10; k++){
                chain[i][j][k] = rand() % 2; // Randomly assign 0 or 1
            }
        }
    }

    // Calculate total number of occupied rooms
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            for(k = 0; k < 10; k++){
                total_occupied += chain[i][j][k];
            }
        }
    }

    printf("Total number of occupied rooms across all branches: %d\n", total_occupied);
    return 0;
}