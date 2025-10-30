//programming
/*
Name: EMMANUEL OSORO
Reg Number: PA106/G/28823/25
Description:A C PROGRAM TO DISPLAY THE NUMBER OF OCCUPIED AND VACANT ROOMS PER FLOOR
*/

#include <stdio.h>
 int main() {
 	int i,j;
 	//declare and initialise
    int occupancy[5][10] = {
        {1, 0, 1, 1, 0, 0, 1, 0, 1, 1},
        {0, 0, 1, 0, 1, 1, 0, 0, 1, 0},
        {1, 1, 1, 0, 0, 1, 1, 1, 0, 0},
        {0, 1, 0, 0, 1, 0, 1, 1, 1, 0},
        {1, 0, 0, 1, 1, 1, 0, 0, 1, 1}
    };
    //print values
    for (i = 0; i < 5; i++) {
        int occupied = 0;
        int vacant = 0;
        for (j= 0; j < 10; j++) {
            if (occupancy[i][j] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }
        printf("floor %d: Occupied Rooms = %d, Vacant Rooms = %d\n", i + 1, occupied, vacant);
    }

    return 0;
 }