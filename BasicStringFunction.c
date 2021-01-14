#include<string.h>
#include<stdio.h>

int main(){
    char name[] = "Vikash";
   // printf("Lenth of string %d", strlen(name));

    char fName[] = "Accha";
    char *lName = "Baacha";

   // fName[4] = 'i';
  //  puts(fName);

   // lName[4] = 'i';
   // puts(lName);

    strcpy(fName, lName);
    puts(fName);
}