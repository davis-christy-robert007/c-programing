#include <stdio.h>

struct student {
    char name[50];
    int rollno;
    int marks[3];
    int total;
    float avg;
};

int main() {
    int i, j, n;

   
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];  
    for(i = 0; i < n; i++) {
        printf("\nEnter the details of student %d:\n", i + 1);

        printf("Enter the student's name: ");
        scanf("%s", s[i].name);  

        printf("Enter the roll number: ");
        scanf("%d", &s[i].rollno);  

        s[i].total = 0;  

        
        for(j = 0; j < 3; j++) {
            printf("Enter the marks for subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];  
        }

        
        s[i].avg = s[i].total / 3.0;  
    }

   
    for(i = 0; i < n; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("student name: %s\n", s[i].name);
        printf("roll_number: %d\n", s[i].rollno);
        printf("Marks: ");
        for(j = 0; j < 3; j++) {
            printf("%d ", s[i].marks[j]);  
        }
        printf("\ntotal mark: %d\n", s[i].total);
        printf("Average mark: %.2f\n", s[i].avg);
    }

    return 0;  
}
