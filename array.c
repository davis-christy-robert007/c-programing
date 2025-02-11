#include <stdio.h>
int main() 
{
        int a[50],i,n;
        printf("enter the size");
        scanf("%d",&n);
        printf("enter the values");
        for(i=0;i<n;i++) 
        {
        scanf("%d",&a[i]);
        }
        printf("The elements are:");
        for (i=0;i<n;i++) 
        {
        	printf("%d\t",a[i]);
        }   
        return 0;

}
   
