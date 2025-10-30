//programming
/*
Name:EMMANUEL OSORO
Reg Number:PA106/G/28823/25
Description:A C PROGRAM THAT SHOWS A WEEKLY REVENUE TRACKER
*/

#include<stdio.h>

int main(){
	int i;
	int sum = 0,average;
	int  revenue[7]= {};
	
	
	for(i=0 ;i<7 ;i++){
		printf("%d \n", revenue[i]);
		sum+=revenue[i];
		average= sum/7;
	}
	
	printf("the sum is %d\n", sum);
	printf("average revenue= %d\n", average);
	return 0;
}