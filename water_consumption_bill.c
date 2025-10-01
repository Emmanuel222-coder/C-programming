//PROGRAMMING
/*
NAME : EMMANUUEL OSORO
REG NUMBER- PA106/G/28823/25
DESCRIPTION- A C PROGRAM THAT DISPLAYS A WATER CONSUMPTION BILL
*/

#include<stdio.h>

int main(){
	//variable declaration
	int units;
	float bill;
	
	//prompt the user to enter units 
	printf("Enter water units consumed:");
	scanf("%d", &units);
	
	if(units >=0 && units <= 30){
		(bill= units * 20);
		
	}else if(units >=31 && units <=60){
		(bill= units * 25);
		
	}else{
		(bill= units * 30);
	}
	
	//consumption bill
	printf("Total water bill is %.2f KES", bill );
	
	return 0;
}