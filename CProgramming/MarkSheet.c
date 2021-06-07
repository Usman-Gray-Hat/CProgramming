#include<stdio.h>
void main()
{
	float sub1,sub2,sub3,sub4,sub5;
	
	printf("Enter the marks of Physics");
	scanf("%f",&sub1);
	
	printf("Enter the marks of Maths");
	scanf("%f",&sub2);
	
	printf("Enter the marks of Urdu");
	scanf("%f",&sub3);

	printf("Enter the marks of English");
	scanf("%f",&sub4);
	
	printf("Enter the marks of Computer");
	scanf("%f",&sub5);
		
	//adding//	
	float total = sub1+sub2+sub3+sub4+sub5;
	float percentage=((total/500)*100);
	
	//marksheet format.../
	printf("Subject		Max Marks	  ObtMarks	  ObtMarks\n");
	printf("----------------------------------------------\n");
	printf("Physics		  100			%f			\n",sub1);
	printf("Maths		  100			%f			\n",sub2);
	printf("Urdu		  100			%f			\n",sub3);
	printf("English		  100			%f			\n",sub4);
	printf("Computer	  100			%f			\n",sub5);
	
	printf("----------------------------------------------\n");
	printf("Total marks %f | Percentage %f %% \n",total,percentage);
}
