#include <stdio.h>


int main (void) {

    float cap1, cap2, cap3, capTotal, inversion1, inversion2, inversion3;
    char inversor1[20], inversor2[20], inversor3[20];

    printf("Ingresar el nombre del 1er inversor: ");
    scanf("%s", inversor1);

    printf("Ingresar el nombre del 2do inversor: ");
    scanf("%s", inversor2);

    printf("Ingresar el nombre del 3er inversor: ");
    scanf("%s", inversor3);


    printf("Ingresar el capital aportado por %s: ", inversor1);
    scanf("%f", &cap1);

    printf("Ingresar el capital aportado por %s: ", inversor2);
    scanf("%f", &cap2);

    printf("Ingresar el capital aportado por %s: ", inversor3);
    scanf("%f", &cap3);


    capTotal = cap1 + cap2 + cap3;

    inversion1 = (cap1/capTotal) * 100;
    inversion2 = (cap2/capTotal) * 100;
    inversion3 = (cap3/capTotal) * 100;

    printf("%s invirtio: %c%.2f \n", inversor1, 37, inversion1);
    printf("%s invirtio: %c%.2f \n", inversor2, 37, inversion2);
    printf("%s invirtio: %c%.2f \n", inversor3, 37, inversion3);

}
