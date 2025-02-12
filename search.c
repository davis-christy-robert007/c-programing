#include <stdio.h>
int main()
{
      int n;
      printf("enter the values you to put:");
      scanf("%d",&n);
      int a[n],i;
      for(i=0;i<n;i++) {
        printf("enter the values");
        scanf("%d",&a[i]);
        }
        int no,pos=0,flag=0;
        printf("enter the value to be searched");
        scanf("%d",&no);
        for(int i=0;i<n;i++){
        if(no==a[i]){
            flag=1;
            pos=i;
        }else{
            flag=0;
        }

        }
        if(flag==0){
            printf("the number not found");
        }else{
            printf("the number is found and its postion is %d",pos);
        }
    
        
        
        return 0;
        }
