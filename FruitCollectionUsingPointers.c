#include <stdio.h>
#include <string.h>

struct fruits
{
    char name[20];
    float rate;
    int quantity;
};


void addFruit(struct fruits *fruit2, char named[20], float rated, int quantityd)
{
    strcpy(fruit2->name, named);
    fruit2->rate = rated;
    fruit2->quantity = quantityd;

}

void  PrintFruit(struct fruits *nav)
{
    printf("Name of fruit :- %s\n", nav->name);
    printf("Rate of fruit:- %.2f\n", nav->rate);
    printf("Quantityof the fruits:- %d\n", nav->quantity);
}

int main()
{
   
    struct fruits fruit1, fruit2;
   // strcpy(fruit1.name, "Banan");
   // fruit1.rate = 50.10;
   // fruit1.quantity = 100;

    addFruit(&fruit1, "jamun", 88.30, 58);

    PrintFruit(&fruit1);

    printf("\n");

    addFruit(&fruit2, "kela", 70.30, 20);
    PrintFruit(&fruit2);

    //printf("Name of fruit - %s\n", fruit1.name);
    //printf("Rate of fruit - %.2f\n", fruit1.rate);
    //printf("Quantity of fruit- %d\n\n\n", fruit1.quantity);

    //printf("Name of fruit - %s\n", fruit2.name);
    //printf("Rate of fruit - %.2f\n", fruit2.rate);
    //printf("Quantity of fruit- %d\n\n\n", fruit2.quantity);
}