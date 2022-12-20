#include<stdio.h>
#include<stdlib.h>


void bwd_dis();
void fwd_dis();
int in_b();

struct node *create();
struct node
{
    int data;
    struct node* pre;
    struct node* nxt;
};
typedef struct node node1;

node1 * start = NULL;


void main()
{
    int x;
    printf("singly linked list\n");
    printf("MENU\n");
    printf("1.forward Display\n2.Backward Display\n3.Insertion at begining\n3.Insetion at end\n4.Insetion in between\n5.Delete at begining\n6.Delete at end\n7..Delete in between \n8.backward display\n9.exit");
    while(1)
    {

        printf("\nenter your choice: ");
        scanf("%d",&x);
            switch(x)
            {
                case 1:
                    fwd_dis();
                    break;
                case 2: 
                    bwd_dis();
                    break;
                case 3:
                    in_b();
                    break;
                
                case 9:
                    exit(0);
            }
    }


}
struct node *create()
{
 node1 *nptr=((node1*)malloc(sizeof(node1)));
 if(nptr==NULL)
   {
    printf("Memory Overflow");
    return 0;
   }
  else
    return nptr;
}

void fwd_dis()
   {
      node1 *ptr=start;
      
      if(ptr==NULL)
      {
      	printf("empty list");
      }
      else
      {
      printf("\nElements in the linked list are:");
      while(ptr!=NULL)
         {
           
           printf("%d",ptr-> data);
           ptr=ptr->nxt;
         }
      }
   }
void bwd_dis()
   {
      node1 *ptr=start;
      
      if(ptr==NULL)
      {
      	printf("empty list");
      }
      else
      {
      printf("\nElements in the linked list are:");
      while(ptr->nxt!=NULL)
      {
       ptr=ptr-> nxt;
      }
      while(ptr!=NULL)
         {
           
           printf("%d",ptr-> data);
           ptr = ptr->pre;
         }
      }
   }
int in_b()
   {
     int val;
     node1 *nptr=create();
     printf("Enter the element to be inserted:");
     scanf("%d",&val);
     
     nptr->data=val;
     if(start==NULL)
       {
         start=nptr;
         nptr->nxt=NULL;
         nptr->pre=NULL;
        }
      else
        {
          nptr->nxt=start;
          nptr->pre=NULL;
          start=nptr;
         }
    }
