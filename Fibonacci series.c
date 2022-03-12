// o 1 1 2 3 5 ........nth Term
#include<stdio.h>
#include<conio.h>
void main()
{
	int t1,t2,nt,n,i;
	t1=0;
	t2=1;
	
	
	printf("Enter the Term");
	scanf("%d",n);
	
	for(i=1;i<=n;i++);
	{
		printf("%d",&t2);
		nt=t1+t2;
		t1=t2;
		t2=nt;
	}
getch();

	
}
