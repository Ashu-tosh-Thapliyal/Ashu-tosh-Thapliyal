#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter the integer:");
	scanf("%d",&num);
	{
	if(num % 2 == 0)
	   // number is divisibal by 2
	    printf("%d is even.",& num);
	else
	    printf("%d is odd.",&num);
    }
getch();	   
 
return 0;	
}
