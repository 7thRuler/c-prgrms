#include<stdio.h>
#include<stdlib.h>
int queue[20];
int rear=-1;
int front=-1;
void enqueue(int a);
void dequeue();
void display();

void main()
{
	int x,a;
	while(1)
	{
		printf("\nMENU");
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
		printf("enter your choice: ");
		scanf("%d",&x);
	
		switch(x)
		{
		case 1:
			printf("\nenter the element to be inserted: ");
			scanf("%d",&a);
			enqueue(a);
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
			printf("enter correct choice");
		}
	}
}
void enqueue(int a)
{
	if(rear==19)
	{
		printf("queue become over flow");
	}
	else
	{
		front=0;
		rear=rear+1;
		queue[rear]=a;	
	}	
}
void dequeue()
{
	if(front==-1||front > rear)
	{
		printf("queue is underflow");
	}
	else
	{
		printf("dequeued element is %d",queue[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("queue is empty");
	}
	else
	{
		printf("Queue is:\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
			printf("\n");
		}
	}
}

