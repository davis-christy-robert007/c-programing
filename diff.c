/// A PROGRAM TO SHOW DIFFERNCE IN STRUCTURE AND UNION 
#include <stdio.h>
struct stru {
  int a;
  char b[50];
  float c;
  
  }s;
  union unn {
  int d;
  char e[50];
  float f;
  }u;
  int main(){
  printf("The memory allocated to structure is %ld\n",sizeof(s));
  printf("The memory allocated to union is %ld",sizeof(u));
  return 0;
  }
