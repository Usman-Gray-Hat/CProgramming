#include<stdio.h>
int main()
{
	//For vowel...
	
	char c;
	int lowercase_vowel,uppercase_vowel;
	
	printf("Enter an Alphabet :");
	scanf("%c",&c);
	
	//lower case vowel...
	lowercase_vowel =(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	
	
	//Upper Case Vowel..
	uppercase_vowel =(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	
	
	//Condition..
	if(lowercase_vowel || uppercase_vowel)
	{
		printf("%c is a vowel...",c);
	}
	else
	{
		printf("%c is a consonant..",c);
	}
	

	
	
}
