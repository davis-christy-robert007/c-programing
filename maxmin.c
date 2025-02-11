#include <stdio.h>
int main() 
{
        int a[50],i,max,min,p1=0,p2=0,n;
        printf("enter the size");
        scanf("%d",&n);
        printf("enter the values");
        for(i=0;i<n;i++) 
        {
        scanf("%d",&a[i]);
        }
        for (i=0;i<n;i++)
        {
         printf("%d\t",a[i]);
         }
         max = a[0];
         min = a[0];
         for (i=1;i<n;i++)
         {
           if(a[i]>max)
           {
               max =a[i];
               p1=i;
            }
           if(a[i]<min)
            {
              min =a[i];
              p2=i;
            }
            }
            printf("max is%d in at postion %d",max,p1);
            printf("min is %d in at postion %d",min,p2);
           return 0;
           }        
