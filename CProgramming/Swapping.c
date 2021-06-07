#include<stdio.h>
int main()
{
	//swapping
	//taking data type of double
	double first,second,temp;
	printf("Enter first number : ");
	//using %LF for data type of double..
	scanf("%lf",&first);
	scanf("%lf",&second);
	
	//exchange of holding...
	temp = first;
	first = second;
	second = temp;
	//now printing...
	printf("\n After swapping,first Number=%2lf\n",first);
	
	printf("\n After swapping,second Number=%2lf\n",second);
	return 0;
}
