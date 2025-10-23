//PROGRAMMING
/*
Name: EMMANUEL OSORO
Reg Number: PA106/G/28823/25
Description: A C FUNCTION TO CONVERT TEMPERATURE IN FAHRENHEIT TO CELCIUS
*/

#include<stdio.h>
//function prototype
int converttocelcius(float temperature_in_Fahrenheit);
int main(){
	//function call
	float temperature_in_Fahrenheit;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f", &temperature_in_Fahrenheit);
	
	printf("temperature in celcius = %d c",converttocelcius(temperature_in_Fahrenheit) );
	return 0;
}

//Function declaration
int converttocelcius(float temperature_in_Fahrenheit){
	int temperature_in_celcius;
	temperature_in_celcius= (temperature_in_Fahrenheit-32) * 5/9;
	return temperature_in_celcius;
}