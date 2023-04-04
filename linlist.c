#include<stdio.h>
#include<stdlib.h>
// structur node start hare..
struct node
{
int data;// data part
struct node * next; // address 
};
void createlist (int n); //we decliar the function , "cereatlist" is function name // void has no ruretn type 
void display();        // decliaration of function ..
struct node * head;
int main()
{
int n;
printf("Enterthe numberof node");
scanf("%d",&n);
createlist(n);  // call the function 
printf("Node io created\n");
display ();
return 0;
}
void createlist(int n)
{
struct node *newnode,*temp;

int i,value;
head =(struct node *)malloc(sizeof (struct node));//we decliar head from malloc function and the data wype was struct type data
if(head==NULL)
{
printf("Memory not found");
exit(0);// reurn is also same  its going to main function 
}
printf("Enter the number of value:-\n");
scanf("%d",&value);
head->data=value;
head->next=NULL;
temp=head;
for(i=2;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node)); // for second node creation 
if(newnode==NULL)
{
printf("Memopry not found");
break;
}
printf("Enter the number of value :- \n");
scanf("%d",&value);
newnode->data=value;
newnode->next=NULL;
temp->next=newnode;
temp=temp->next;
}
}
void display()
{
struct node *ptr;
if (head==NULL)
{
printf("list is enpty \n");
return;
}
ptr=head;
while(ptr !=NULL)
{
printf(" \n data %d\n",ptr->data);
ptr=ptr->next;
}
}
