#include <stdio.h>
#include <string.h>

int main(){
    struct fruits
    {
        char name[20];
        float rate;
        int quantity;
    };

    struct fruits fruit1, fruit2;
    strcpy(fruit1.name, "Banan");
    fruit1.rate = 50.10;
    fruit1.quantity = 100;

    printf("Name of fruit - %s\n", fruit1.name);
    printf("Rate of fruit - %.2f\n", fruit1.rate);
    printf("Quantity of fruit- %d\n\n\n", fruit1.quantity);

    printf("Name of fruit2 - %s\n", fruit2.name);
    printf("Rate of fruit2- %.2f\n", fruit2.rate);
    printf("Quantity of fruit- %d\n", fruit2.quantity);

}