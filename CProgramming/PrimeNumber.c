#include<stdio.h>
int main()
{
	int n,i,flag = 0;
	printf("Enter a positive number");
	scanf("%d",&n);
	
	//for loop//
	for(i=2;i<=n/2;++i)
	{
		//for non prime number//
		if(n%i==0)
		{
			flag = 1;
			break;
		}
	}
	if(n==1)
	{
		printf("1 is neither prime nor composite");
	}
	else
	{
		if(flag==0)
		{
			printf("%d is a prime number");
		}
		else
		{
			printf("%d is not a prime number");
		}
		return 0;
	}
}
