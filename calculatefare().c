//programming
/*
Name: EMMANUEL OSORO
Reg Number: PA106/G/28823/25
Description: A C FUNCTION TO CALCULATE FARE
*/

#include<stdio.h>
//funtion prototype
int calculatefare(int distance);

int main(){
	int distance;
	//prompt the user to enter distance
	printf("Enter distance covered in KM:");
	scanf("%d", &distance);
	
	printf("your fare = KSH %d", calculatefare(distance));
	return 0;
}
//function declaration
int calculatefare(int distance){
	int fare;
	fare = distance * 50;
	return fare;
}