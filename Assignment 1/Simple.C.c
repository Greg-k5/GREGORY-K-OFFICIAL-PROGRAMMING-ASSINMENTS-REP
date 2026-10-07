
#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("First number: ");
    scanf("%d", &a);

    printf("Operation: ");
    scanf(" %c", &op);

    printf("Second number: ");
    scanf("%d", &b);

    if(op == '+')
        printf("Answer = %d", a + b);
    else if(op == '-')
        printf("Answer = %d", a - b);
    else if(op == '*')
        printf("Answer = %d", a * b);
    else if(op == '/')
        printf("Answer = %d", a / b);
    else
        printf("Wrong operation");

    return 0;
}
