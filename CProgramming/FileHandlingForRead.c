#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	FILE *fptr;
	if((fptr=fopen("program.txt","r")) == NULL)
	{
		printf("file not found");
		exit(1);
	}
	fscanf(fptr,"%d",&num);
	printf("The value of var is n=%d",num);
	fclose(fptr);
	return 0;
}
