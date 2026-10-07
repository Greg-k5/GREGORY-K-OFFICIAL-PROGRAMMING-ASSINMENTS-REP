
#include <stdio.h>

int main()
{
    char name[100];
    char reg[50];
    int marks;
    int grade;

    printf("Enter student's full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter registration number: ");
    scanf("%49s", reg);

    printf("Enter marks: ");
    scanf("%d", &marks);

    grade = marks / 10;

    printf("\n========== STUDENT RESULT ==========\n");
    printf("Student Name: %s", name);
    printf("Registration No: %s\n", reg);
    printf("Marks: %d\n", marks);

    switch(grade)
    {
        case 10:
        case 9:
        case 8:
        case 7:
            printf("Grade: A\n");
            printf("Comment: Excellent\n");
            break;

        case 6:
            printf("Grade: B\n");
            printf("Comment: Very Good\n");
            break;

        case 5:
            printf("Grade: C\n");
            printf("Comment: Good\n");
            break;

        case 4:
            printf("Grade: D\n");
            printf("Comment: Pass\n");
            break;

        default:
            printf("Grade: E\n");
            printf("Comment: Fail\n");
    }

    printf("====================================\n");

    return 0;
}
