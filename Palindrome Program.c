// Palindrome Number
#include<stdio.h>
#include<conio.h>
void main()
{

	
	int s,r,n,m;
	s=0;
	s=m;
	
	printf("Enter the Number");
	scanf("%d",&n);
	
	while(n!=0)
	{
	r=n%10;
    s=s*10+r;
	n=n/10;
	}
	if(s==m)
	{
		printf("Palindrome");
	}
	else
	{
	   printf("Not palindrown");	
	}
getch();
}

		

