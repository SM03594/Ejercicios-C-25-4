#include <stdio.h>

int main (void) {

    float precio, plan1, plan2, plan3, plan4;

    printf("Ingrese el precio del articulo: ");
    scanf("%f", &precio);

    plan1 = precio - (precio * 0.1);
    plan2 = (precio * 0.1) + precio;
    plan3 = (precio * 0.15) + precio;
    plan4 = (precio * 0.25) + precio;


    printf("Plan1: $%.2f \n", plan1);
    printf("Plan2: $%.2f \n", plan2);
    printf("Plan3: $%.2f \n", plan3);
    printf("Plan4: $%.2f \n", plan4);
}
