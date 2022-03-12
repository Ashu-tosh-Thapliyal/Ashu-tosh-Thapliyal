// 1!+2!+3!+4!.......n term
#include<stdio.h>
#include<conio.h>
void main()
{
	int f,s,i,n;
	
	printf("Enter the Term ");
	scanf("%d",n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
		s=s+f;
	
	
	}
	printf("%d",s);
getch();
}
