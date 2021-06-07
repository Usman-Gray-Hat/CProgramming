#include <stdio.h>
int main() 
{
    int n; //int table;//
	int i; //int i;
	int r; //int range;//
	       //int sp;
	
    printf("Enter an integer: ");//console.writeline("Enter number");
    scanf("%d", &n);//int table = convert.Toint32(Console.ReadLine());
    
    //console.writeline("Enter starting point");
    //int sp = convert.Toint32(Console.ReadLine());
    
    
    printf("Enter range: ");//Console.WriteLine("Enter ending point");//
    scanf("%d", &r);//int range = Convert.Toint32(Console.ReadLine());
    
    
    //loop....//
    for (i = 1; i <= r; ++i) //for(i = sp; i <= r; ++i)
	{
        printf("%d * %d = %d \n", n, i, n * i); //Console.writeline(table+" x "+sp+" = "+table*i);
    }
    return 0;
}
