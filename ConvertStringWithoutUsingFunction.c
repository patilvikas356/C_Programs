#include <stdio.h>
char myStr[30];


void convertToLower(){
     for (size_t i = 0; myStr[i] != '\0'; i++)
     {
         if (myStr[i] >= 65 && myStr[i] <= 90)
         {
             myStr[i] = myStr[i] + 32;
         }
         
     }
}

void convertToUpper()
{
    for (size_t i = 0; myStr[i] != '\0'; i++)
    {
        if (myStr[i] >= 97 && myStr[i] <= 122)
        {
            myStr[i] = myStr[i] - 32;
        }
        
        
    }
}

int main()
{
    printf("Type Youer String \n");
    scanf("%[^\n]s", myStr);
    getchar();

    printf("Enter youer option for U or L ==> ");
    char option;
    option = getchar();

    switch (option)
    {
    case 'U':
        convertToUpper();
        break;
    case 'L':
        convertToLower();
        break;


    default:

        printf("Enter option is Wrong");
        break;
    }
    //convertToUpper();
    puts(myStr);
    //char one = 'a';
    //printf("%c", one -32);
}
