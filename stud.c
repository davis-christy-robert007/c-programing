#include <stdio.h>
struct student
{
char name[50];
int rollno;
int marks[3];
int total;
float avg;
};
int main(){
int i,n,j;
struct student s[n];
printf("enter the number of students:");
scanf("%d",&n);
for(i=0;i<n,i++){
printf("enter the details of student :");
scanf("%d",&n);
printf("enter the student name");
scanf("%s",s[i].name);
printf("enter the rollno");
scanf("%d",&s[i].rollno);
s[i].total=0;
for(j=0;j<3;j++){
printf("enter the marks for the subject %d",j+1);
scanf("%d",&s[i].marks[j]);
s[i].total=s[i].marks[j];
}
s[i].avg=s[i].total;
}
printf("\n student details \n");
for(i=0;i<n;i++){
printf("student:%d\n",i+1);
printf("name:%s\n",s[i].name);
printf("roll no:%d\n",s[i].rolllno);
printf("marks:%d\n",s[i].total);
printf("Average :%f\n",s[i].avg);
}
return 0;
}
