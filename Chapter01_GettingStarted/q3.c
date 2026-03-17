/*
If the marks obtained by a student in five different subjects are input through the keyboard.
Find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is 100.
*/

#include <stdio.h>

int main()
{
    int mark1, mark2, mark3, mark4, mark5, aggregate;
    float percent;
    
    printf("Enter marks of subject 1: ");
    scanf("%d", &mark1);
    
    printf("Enter marks of subject 2: ");
    scanf("%d", &mark2);
    
    printf("Enter marks of subject 3: ");
    scanf("%d", &mark3);
    
    printf("Enter marks of subject 4: ");
    scanf("%d", &mark4);
    
    printf("Enter marks of subject 5: ");
    scanf("%d", &mark5);
    
    aggregate = mark1 + mark2 + mark3 + mark4 + mark5;
    percent   = (aggregate / 500.0) * 100;
    
    printf("Aggregate marks = %d\n", aggregate);
    printf("Percentage      = %.2f%%\n", percent);
    
    return 0;
}