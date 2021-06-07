#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,discriminat,root1,root2,realpart,imagpart;
	printf("Enter the coefficient a,b and c :");
	scanf("%lf %lf %lf ",&a,&b,&c);
	
	discriminat=b*b-4*a*c;
	
	// Condition for real and different roots
	
	if(discriminat>0)
	{
		root1=(-b+sqrt(discriminat))/(2*a);
		root2=(-b-sqrt(discriminat))/(2*a);
		printf("root1= %.2lf and root2 = %.2lf",root1,root2);
		
		
	}
	
	// Condition for real and equal roots
	
	else if(discriminat==0)
	{
		root1=root2 =-b/(2*a);
		printf("root1 = root2 = %.2lfi;",root1);
	}	
	
	// if roots are not real..
	
	else
	{
		realpart=-b/(2*a);
		imagpart=sqrt(-discriminat)/(2*a);
		printf("root1 =%.2lf+%.2lfi and root2 =%.2f-%.2fi",realpart,imagpart,realpart,imagpart);
		
		
	
	
	}
	return 0;
}
