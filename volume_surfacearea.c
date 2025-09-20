//Programming a C program
/*
Name: Emmanuel Osoro
Reg Number: PA106/G/28823/25
Description: A C program to display the volume and surface area of a cylinder
*/

#include<stdio.h>
int main(){
	//variable declaration
	float radius, height, pi= 3.142, volume, surface_area;
	
	//prompt the user to enter radius 
	printf("\nenter the radius:");
	scanf("%f", &radius);
	
	//prompt the user to enter height
	printf("\nenter the height:");
	scanf("%f", &height);
	
	//computer volume
	volume = pi * radius *radius * height;
	
	//display volume
	printf("\nyour volume is %.4f",volume);
	
	//computer surface_area
	surface_area =(2 * pi * radius * radius) + (2 * pi * radius * height);
	
	//display surface area
	printf("\nyour surface_area is %.2f",surface_area);
	
	return 0;
}