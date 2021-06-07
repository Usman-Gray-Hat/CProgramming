#include<stdio.h>
int main()
{
	
	int num1,num2,max;
	printf("Enter two numbers");
	scanf("%d" "%d",&num1,&num2);
	//Logic for taking lcm between two numbers..
	max = (num1>num2) ? num1 : num2; //Each condition can run..
	while(1)
	{
		if(max% num1 == 0 && max% num2 == 0)
		{
			printf("The lcm of %d and %d is %d",num1,num2,max);
			break;
		}
		++max;//ek ka izafa krte hue loop execute hoga
		
	}
	return 0;
	
	
	
}
