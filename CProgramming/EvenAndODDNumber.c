#include<stdio.h>
int main()
{
	int num;
	printf("Enter any numeric value: ");
	
	//Taking input from user//
scanf("%d",&num);

//condition//
if(num % 2 == 0)
{
	printf("%d is even",num);
}
else
{
	printf("%d is odd",num);
}
 return 0;
}


