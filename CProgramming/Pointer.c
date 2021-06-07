#include<stdio.h>
int main()
{
	//pointers 
	int var = 40; // Actual variable declaration//
	// pointer sign/represented by starix *//
	int *ip; //pointer variable declaration//
	
	ip = &var; // store adress of var in pointer variable//
	
	printf("Adress of var variable %x\n",&var);
	//adress sotred in pointer//
	printf("adress stored in ip variable: %x\n",ip);
	
	//access the value using pointer//
	printf("The value if *ip variable %d\n",ip);
	return 0;
}
