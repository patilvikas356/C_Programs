#include<string.h>
#include<stdio.h>

int main(){

    char fname[20];
    fgets(fname, sizeof(fname), stdin);
    puts(fname);
}