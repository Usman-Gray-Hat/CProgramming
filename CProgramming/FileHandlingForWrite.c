#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int num;
	FILE *fptr;
	fptr= fopen("Program.txt","w");
	if(fptr == NULL)
	{
		printf("File not found");
		exit(1);
	}
	printf("Enter number :");
	scanf("%d",&num);
	fprintf("fptr %d",num);
	fclose(fptr);
	return 0;
}
