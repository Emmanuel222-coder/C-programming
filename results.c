//programming
/*
Name:EMMANUEL OSORO
Reg Number:PA106/G/28823/25
Description:A C PROGRAM THAT STORES EXAMINATION RESULTS
*/
#include <stdio.h>
#include <stdlib.h>


struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    struct Student s;
    FILE *fp;

    //  Open the binary file for reading
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file! Make sure results.dat exists.\n");
        return 1;
    }

    printf("STUDENT RESULTS\n");
    printf("-----------------------------\n");

    // Read and display all records
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
    	
    // Display name and marks
        printf("Name: %s\n", s.name);
        printf("Total Marks: %.2f\n", s.totalMarks);
        
    }

    fclose(fp);
    return 0;
}
