#include <stdio.h>
int main()
{
    int i,flag=0,c;
    char str[40],str2[40];
    printf("enter the first string:");
    scanf("%[^\n]",str);
    printf("enter the second string:");
    c=getchar();
    scanf("%[^\n]",str2);
    for(int i=0;str[i]!='\0' || str2[i]!='\0';i++) {
    if(str[i]!=str2[i]) {
    flag=1;
    break;
    }
    }
    if(flag==0){
    printf("the string is equal");
    }
    else{
    printf("the string is not equal");
    }
    return 0;
    
    
    
}
