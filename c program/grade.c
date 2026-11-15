#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks:\n");
    scanf("%d\n",&marks);
    if(marks>=90 & marks<=100)
    {
        printf("A-GRADE");
    }
    else if (marks>=80 & marks<=90)
    {
        printf("B-GRADE");
    }
    else if (marks >=70 & marks >=80)
    {
        printf("C-GRADE");
    }
    else if (marks >=60 & marks<=70)
    {
        printf("D-GRADE");
    }
    else if (marks >=50 & marks <=60)
    {
        printf("E-GRADE");
    }
    else 
    {
        printf("FAIL");
    }
    return 0;
}