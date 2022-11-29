#include<stdio.h>
int main()
{

    int n1,n2,i,j,x;
     printf("create first array\n");
     printf("\nenter the size of the array:");
     scanf("%d",&n1);
    int a[n1];
     printf("enter the elements of the array:\n");
        for(i=0;i<n1;i++)
        {
          scanf("%d",&a[i]);
        }
     printf("\nsorted first array:\n");
        for(i=0;i<n1;i++)
        {
            for (j=i+1;j<n1;j++)
                {
                    if (a[i]>a[j])
                    {

                        x=a[i];
                        a[i]=a[j];
                        a[j]=x;

                    }
                }
        }
        for(i=0;i<n1;i++)
        {
            printf("\n%d",a[i]);
        }
     printf("\ncreate second array\n");
     printf("\nenter the size of the array:");
     scanf("%d",&n2);
    int b[n2];
     printf("enter the elements of the array:\n");
        for(i=0;i<n2;i++)
        {
          scanf("%d",&b[i]);
        }
     printf("\nsorted second array:\n");
        for(i=0;i<n2;i++)
        {
            for (j=i+1;j<n2;j++)
                {
                    if (b[i]>b[j])
                    {

                        x=b[i];
                        b[i]=b[j];
                        b[j]=x;

                    }
                }
        }
        for(i=0;i<n2;i++)
        {
            printf("\n%d",b[i]);
        }
     printf("\nthe merged array ");
     i=j=0;
    int c[n1+n2],k;
        for(k=0;k<n1+n2;k++)
        {
            if(i<n1 && j<n2)
            {
                if(a[i]<b[j])
                {
                    c[k]=a[i];
                    i++;
                }
                else
                {
                    c[k]=b[j];
                    j++;
                }
            }
            else if(i<n1)
            {
                c[k]=a[i];
                i++;
            }
            else
            {
                c[k]=b[j];
                j++;
            }
        }
     printf("after sorted");
        for(k=0;k<n1+n2;k++)
        {
            printf("\n%d",c[k]);
        }

}
