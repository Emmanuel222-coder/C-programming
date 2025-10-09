//programming
/*
Name: EMMANUEL OSORO
Registeration number: PA106/G/28823/25
Description A WHILE LOOP DISPLAYING BALANCE AFTER WITHDRAWAL
*/

#include<stdio.h>

int main(){
	
	//variable declaration
	float balance,withdraw;
	
	//prompt the user to enter amount
	printf("Enter balance:");
	scanf("%f", &balance);
	
	//while balance is>0
	while(balance>0){
		printf("Enter amount to withdraw:");
		scanf("%f", &withdraw);
		
		balance-=withdraw;
		printf("Remaining balance is %.2f\n", balance);
	}
	return 0;
}