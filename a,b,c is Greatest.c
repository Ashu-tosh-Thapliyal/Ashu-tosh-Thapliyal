// a,b,c Greatest
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	
	        printf("Enter the Value");
	        scanf("%d%d%d",&a,&b,&c);
	        if((a>b)&&(a>c))
	        {
	        	printf("a is Greatest");
	        	
			}
			else if((b>c)&&(b>a))
			{
				printf("b is Greatest");
				
			}
			else
			{
				printf("c is Greatest");
			}
getch();
			
	               
}
