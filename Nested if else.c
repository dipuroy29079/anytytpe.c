#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10,b=20,c=30;
	
	printf("Enter number");
	scanf("%d",&a,b,c);
	
	if(a>b)
	{
		if(a>c)
		{
		  printf("%d",a);	
		}
		else
		{
			printf("%d",c);
		}
	}
	else
	{
	    
	       if(b>c)
	       {
	         printf("%d",b);	
		   }
		   else
		   {
		   	 printf("%d",c);
		   }
		
		
	getch();
}
	
 } 
 
 
 
