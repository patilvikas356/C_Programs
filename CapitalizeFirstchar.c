#include <stdio.h>
#include <ctype.h>


int main()
{
    char name[20];

    printf("Type Your Full Name > ");
    scanf("%[^\n]s", name);
    name[0] = toupper(name[0]);
    name[1] = tolower(name[1]);
    puts(name);
}