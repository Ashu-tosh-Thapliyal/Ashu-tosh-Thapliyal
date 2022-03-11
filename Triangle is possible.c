// triangle is possible
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	
	printf("Enter the value");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a==b)&&(b==c)&&(c==a))
	{
		printf("Triangle equilateral");
		
	}
	else if ((a!=b)&&(b!=c)&&(c!=a))
	{
		printf("Triangle is scaleteral");
		
	}
	else
	{
		printf("Triangle is isosceles");
	}
getch();
}
