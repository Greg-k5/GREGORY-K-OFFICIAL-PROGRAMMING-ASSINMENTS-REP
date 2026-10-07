#include <stdio.h>

int main()
{
    char username[30];

    printf("What is your name? ");
    scanf("%s", username);

    printf("Welcome, %s!", username);

    return 0;
}
