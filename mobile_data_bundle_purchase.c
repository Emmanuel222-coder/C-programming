//PROGRAMMING
/*
NAME: EMMANUEL OSORO
REG NUMBER: PA106/G/28823/25
DESCRIPTION:A C PROGRAM DISPLAYING MOBILE DATA BUNDLE PURCHACE 
*/

#include<stdio.h>
int main(){
	//variable declaration
	int choice = (1-4);
	
	//displays menu
	printf("select data bundle\n:");
    printf("1. 100 MB @ 50 KES\n:");
	printf("2. 500 MB @200 KES\n:");
	printf("3. 1 GB @ 350 KES\n:");
	printf("4. 2 GB @ 600 KES\n:");
	
    // prompt the user to enter their choice(1-4)
	printf("enter your choice (1-4):");
	scanf("%d", &choice);
	
	switch (choice) {
		case 1:
			printf("you selected 100 MB. Cost is 50 KES:");break;
		case 2:
			printf("you selected 500 MB. Cost is 200 KES:");break;
		case 3:
			printf("you selected 1 GB. Cost is 350 KES:");break;
		case 4:
			printf("you selected 2 GB. Cost is 600 KES:");break;
		default:
			printf("invalid choice:");break;				
	}
	
	return 0;
}