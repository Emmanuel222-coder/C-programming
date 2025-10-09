//programming
/*
Name: EMMANUEL OSORO
Registeration number: PA106/G/28823/25
Description A C PROGRAM THAT REQUIRES ONE TO ENTER A PASSWORD
*/

#include <stdio.h>

int main(){
	
	//variable declaration
    int password;
    do{
        printf("Enter the password: ");
        scanf("%d", &password);
        
    }while(password != 1234);
    printf("Access Granted\n");
    return 0;
}
