
#include <stdio.h>

int main()
{
    char name[100];
    char reg[50];
    int marks;

    printf("Enter student's full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter registration number: ");
    fgets(reg, sizeof(reg), stdin);

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("\n===== STUDENT RESULT =====\n");
    printf("Name: %s", name);
    printf("Registration Number: %s", reg);
    printf("Marks: %d\n", marks);

    if(marks >= 70)
    {
        printf("Grade: A\n");
        printf("Comment: Excellent\n");
    }
    else if(marks >= 60)
    {
        printf("Grade: B\n");
        printf("Comment: Very Good\n");
    }
    else if(marks >= 50)
    {
        printf("Grade: C\n");
        printf("Comment: Good\n");
    }
    else if(marks >= 40)
    {
        printf("Grade: D\n");
        printf("Comment: Pass\n");
    }
    else
    {
        printf("Grade: E\n");
        printf("Comment: Fail\n");
    }

    return 0;
}
