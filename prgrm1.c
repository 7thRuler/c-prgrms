#include<stdio.h>
void main()
{
int a[20],n,i,x;
void insert(int n,int a[]);
void delete(int n,int a[]);
void search(int n,int a[]);
printf("CREATE AN ARRAY");
printf("\nenter the limit of the array:");
scanf("%d",&n);
printf("\nenter the elements of the array:\n");
for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
printf("\nelements of array before operation");
for(i=0;i<n;i++)
	{
	printf("\n%d",a[i]);
	}
printf("\noperations on array");
printf("\n1.insert an element\n2.delete an element\n3.search an element");
printf("\nenter your choice (1/2/3): ");
scanf("%d",&x);
switch(x)
	{
	case 1:
		insert(n,a);
		break;
	case 2:
		delete(n,a);
		break;
	case 3:
		search(n,a);
		break;
	}
}
void insert(int n,int a[])
{
	int pos,ele,i;
	printf("\nenter the element to insert: ");
	scanf("%d",&ele);
	printf("\nenter the position to insert: ");
	scanf("%d",&pos);
	for(i=n;i>=pos-1;i--)
		{
		 a[i+1]=a[i];
		}
	a[pos-1]=ele;
	n=n+1;	
	

	printf("\nelements of array after insertion");
	for(i=0;i<n;i++)
		{
			printf("\n%d",a[i]);
		}
}
void delete(int n,int a[])
{
	int ele,i,j;
	printf("\nenter the element to delete: ");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
		{
			if(a[i]==ele)
				{
				for(j=i;j<n;j++)
					{
					a[j]=a[j+1];
					}
				}	
				
		}	
	n=n-1;
	printf("\nelements of array after deletion");
	for(i=0;i<=n-1;i++)
		{
			printf("\n%d",a[i]);
		}
}
void search(int n,int a[])
{
	int ele,i,j;
	printf("\nenter the element to search: ");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
		{
			
			if(a[i]==ele)
				printf("the %d in %d position",ele,i+1);
			else
				printf("element not found");	
			break;		
		}	

		
		
}

