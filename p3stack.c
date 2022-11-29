#include<stdio.h>
#include<stdlib.h>

int top = -1,stack[10];
void push(int a);
void display();
void pop();

void main()
{
    int x,a;
    while(1)
    {
     printf("stack menu");
     printf("\n1.push\n2.pop\n3.display\n4.exit\n");
     printf("enter your chice(1/2/3/4): ");
     scanf("\n%d",&x);
     switch(x)
     {
     case 1:
        printf("enter a number to push: ");
        scanf("%d",&a);
        push(a);
        break;
     case 2:
        pop();
        break;
     case 3:
        printf("the stack is\n");
        display();
        break;
     case 4:
        exit(0);
     }
    }


}
void push(int a)
{
   if(top!=10)
   {
    top=top+1;
    stack[top]=a;
   }
   else
    printf("element not inserted,stack is full");
}
void display()
{
    int i;
    for(i=top;i>-1;i--)
        printf("\n%d\n",stack[i]);
}
void pop()
{
  if(top>-1)
  {
  	printf("deleted element :%d\n",stack[top]);
  	top=top-1;
  }
  else
  	printf("stack is underflow\n");
}
