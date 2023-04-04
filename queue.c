#include<stdio.h>
#include <stdlib.h>

# define size 4
void enqueue();
void dequeue();
void display();
int arr[size];
int rear=-1,front=-1;

int main()
{
    int choice;
    while(1)
    {
        printf("1. Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Display \n");
        printf("4. Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enqueue();
            break;
            
            case 2:
            dequeue();
            break;
            
            case 3: 
             display();
            break;
            
            case 4:
            exit(0);
            
            default:
            printf("Invalid choice \n");
        }
        
    }
    return 0;
}
void enqueue()
{
    int n;
    if (rear == size-1)
    {
        printf("The Queue is Full\n");
    }
    else
    {
        if(front==-1)
        {
          front=0;
        }
        printf("Enter the data :  ");
        scanf("%d",&n);
        rear=rear+1;
        arr[rear]=n;
    }
}

void dequeue()
{
    int val;
    if(front = -1 || front >rear )
    {
       printf("--Operation cannot be done---\n");
        return;
    }
    else
    {
        front ++;
        val = arr[front];
        printf("The deleted value : %d",val);

    }
}

void display()
{
    if(front==-1 )
    {
        printf("the queue is empty \n");
        
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("data is: %d\n",arr[i]);
            printf("\n");
        }
    }
}
