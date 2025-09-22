//PROGRAMMING
/*
Name: Emmanuel Osoro
Reg Number: PA106/G/28823/25
Description:A C program to determine whether or not one qualifies for a loan
*/

#include<stdio.h>

int main() {
	//variable declaration
	int age;
	float income;

		//prompt the user to enter age
	printf("enter age:");
	scanf("%d", &age);
	
	//prompt the user to enter income
	printf("\n enter income:");
	scanf("%f", &income);
	
	//computer qualification
	if(age >= 21 && income >= 21000) {
		printf("congratulations you qualify for a loan\n");	
	} else {
		printf("unfortunately, we are unable to offer you a loan\n");
	}
	
	return 0;
}