// Number is Prime or Not // 
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,c;
	
	printf("Enter The Term");
	scanf("%d",n);
	c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("Numebr is prime ");
	}
	else
	{
		printf("Number is prime ");
	}
getch();

		
}
