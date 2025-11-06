//programming
/*
Name:EMMANUEL OSORO
Reg Number:PA106/G/28823/25
Description:A C PROGRAM THAT KEEPS TRACK OF BORROWED BOOKS EACH DAY
*/

#include <stdio.h>
#include<string.h>

int main() {
    FILE *file;
    char title[200];
    char choice;

    printf("Library Borrowed Books Recorder\n");

    // Open the file in append mode so it doesn?t erase existing data
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    do {
        printf("\nEnter book title: ");
        // Read a full line including spaces
        fgets(title, sizeof(title), stdin);

        // Remove newline character from fgets if present
        if (title[0] == '\n') 
            fgets(title, sizeof(title), stdin);
        if (title[strlen(title) - 1] == '\n')
            title[strlen(title) - 1] = '\0';

        // Write the title to the file
        fprintf(file, "%s\n", title);
        printf("? Book title '%s' successfully stored.\n", title);

        printf("\nDo you want to add another title? (y/n): ");
        scanf(" %c", &choice);
        getchar();
    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("All titles have been saved to borrowed_books.txt\n");

    return 0;
}