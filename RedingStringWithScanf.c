#include <stdio.h>

int main()
{
    char name[20];

    printf("Type Your Full Name");
    scanf("%[^\n]s", name);
    puts(name);
}