#include<stdio.h>
#include<stdlib.h>
int cq[20];
int rear=-1;
int front=-1;
void enqueue(int a);
void dequeue();
void display();
int z;

void main()
{
	int x,a;
	printf("enter the size of the queue:");
	scanf("%d",&z);
	while(1)
	{
		printf("\nMENU");
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
		printf("\n Enter your choice: ");
		scanf("%d",&x);
	
		switch(x)
		{
		case 1:
			printf("\n Enter the element to be inserted: ");
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
			printf("Enter correct choice");
		}
	}
}
void enqueue(int a)
{
	if((front==rear+1)||(front==0 && rear==z-1))
	{
		printf("Queue become over flow");
	}
	else 
	{	
		if(front==-1)
		{
		front=0;
		rear=(rear+1) % z;
		cq[rear]=a;	
		}
		else 
		{	
		rear=(rear+1) % z;
		cq[rear]=a;
		}	
	}		
printf("front=%d,""rear=%d",front,rear);

}
void dequeue()
{
	int data;
	if(front==-1)
	{
		printf("Queue is underflow");
	}
	else
	{
		data=cq[front];
		if (front==rear)
		{
			front==-1;
			rear==-1;
		}
		else
		{
			printf("Dequeued element is %d",cq[front]);
			front=(front+1)% z;
		}
	}
printf("front=%d,""rear=%d",front,rear);	
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Queue is:\n");
		for(i=front;i!=rear;i=(i+1)%z)
		{
			printf("%d\t",cq[i]);
			
		}
	printf("%d",cq[i]);
	
	}
}
