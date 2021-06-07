#include<stdio.h>
// Variable declaration//
extern int a,b;
extern int c;
extern float f;

int main()
{
	//Variable defination//
	int a,b;
	int c;
	float f;
	
	//Variable initialization//
	a = 10;
	b = 20;
	c = a+b;
	
	printf("Total value of C is %d \n",c);
	//Print float/decimal values//
	f = 90.0 + 70.2;
	printf("Value of is %f \n",f);
}
