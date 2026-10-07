
#include <stdio.h>
#include <string.h>

int main()
{
    char password[20];
    int count = 0;

    while(count < 3)
    {
        printf("Enter PIN: ");
        scanf("%s", password);

        if(strcmp(password, "1234") == 0)
        {
            printf("DOOR OPENED");
            return 0;
        }

        printf("Wrong PIN!\n");
        count++;
    }

    printf("DOOR LOCKED");

    return 0;
}
