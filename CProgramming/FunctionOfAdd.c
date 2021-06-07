#include<stdio.h>
int sumNumbers(int a , int b);
int main()
{
	int n1,n2,sum;
	printf("Enter two numbers :");
	scanf("%d" "%d" ,&n1,&n2);
	
	sum = sumNumbers(n1,n2); //Function calling..
	printf("sum = %d",sum);
	
	return 0;
}

int sumNumbers(int a , int b)
{
	int result;
	result=a+b;
	return result;
}
