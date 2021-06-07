#include<stdio.h>

int main()
{
	
	int cars[5];
	
	
	printf("Enter 5 numbers");
	
	for(int i=0;i<5;++i)
	{
		scanf("%d",&cars[i]);
		
		
	}
	
	printf("..........................Values of Array................................");
	
	
	for(int i=0;i<5;++i)
	{
		printf("%d\n",cars[i]);
		
		
	}
	
	return 0;
	
	
	
}

