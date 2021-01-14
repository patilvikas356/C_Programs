#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    char *emojis[5] = {u8""}//we have to take emojies
    srand(time(NULL));
    int randomInt = rand() % 5;
    printf("%d", randomInt);
}
