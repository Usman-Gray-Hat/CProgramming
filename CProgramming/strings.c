#include<stdio.h>
int main()
	{
		char str[75800],ch;
		int count=0;
		
		printf("Enter a string");
		fgets(str,sizeof(str),stdin);
	
	
		printf("Enter a character to find its frequency:  ");
		scanf("%c",&ch);
		
		for(int i=0;str[i]!='\0';++i)
		{
			if(ch==str[i])
			++count;

		}
		printf("The frequency of %c = %d",ch,count);
		return 0;
	}