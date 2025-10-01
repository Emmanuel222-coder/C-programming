//PROGRAMMING
/*
NAME : EMMANUUEL OSORO
REG NUMBER- PA106/G/28823/25
DESCRIPTION- A C PROGRAM TO DETERMINE IF ONE IS ELIGIBLE FOR EXAMS
*/

#include<stdio.h>

int main(){
	//variable declaration
	float attendance, average_marks;
	
	//prompt the user to enter attendance
	printf("Enter attendance:");
	scanf("%f", &attendance);
	
	//prompt the user to enter average_marks
	printf("Enter average_marks:");
	scanf("%f", &average_marks);
	
	if(attendance >= 75 && average_marks >= 40){
		printf("Eligible for final exams\n");
		
	}else {
		printf("Not eligible.\n");
	}
	
	return 0;
}