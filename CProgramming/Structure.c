#include<stdio.h>
//declaration of struct//
struct distance 
{
	int feet;
	float inch;
}
//Global variable//
dist1,dist2,sum;

//main method//
int main()
{
	printf("First distance\n");
	printf("Enter feet : ");
	scanf("%d",%dist1.feet);
	printf("Enter inch : ");
	scanf("%f",&dist1.inch);
	
	printf("second distance\n");
	printf("Enter feet : ");
	scanf("%d",%dist2.feet);
	printf("Enter inch : ");
	scanf("%f",&dist2.inch);
	
	sum.feet=dist1.feet+dist2.feet;
	sum.inch=dist1.inch+dist2.inch;
	//Changing to feet if inch is greater thn 12;//
	
	while(sum.inch>=12)
	{
		++sum.feet;
		sum.inch=sum.inch-12;
	}
	printf("the sum of distances=%d\'-%1f\"",sum.feet,sum.inch);
	return 0;
	

	
	
	
}
