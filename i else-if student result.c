#include<stdio.h>
#include<conio.h>

void main()

{
	int marks;
	printf("Enter number");
	scanf("%d",&marks);
	
	if(marks==200)
	
	{
	  printf("hi.briliant");	
	}
	else if(marks>=80 && marks<=100)
	{
	   printf("Topper");	
	}
	
	else if(marks>=50 && marks<=80)
	
	{
	  printf("first");	
	 }
	else
	{
		printf("average student");
	}
	getch();
	
}
	

