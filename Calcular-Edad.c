#include <stdio.h>

int main (){

    int fechaNac, fechaHoy, diasHoy, diasNac, mesDia, dias, edad;
    float annos, meses;

    printf("Introducir la fecha de hoy en formato DDMMAAAA: ");

    scanf("%d", &fechaHoy);

    annos = fechaHoy % 10000;
    mesDia = (fechaHoy / 10000);
    meses = (mesDia % 100) -1 ;
    dias = mesDia / 100;

    diasHoy = (annos * 365) + (meses * 30) + dias;


    printf("Introducir su fecha de nacimiento en formato DDMMAAAA: ");

    scanf("%d", &fechaNac);

    annos = fechaNac % 10000;
    mesDia = (fechaNac / 10000);
    meses = mesDia % 100;
    dias = mesDia / 100;

    diasNac = (annos * 365) + (meses * 30) + dias;

    edad = (diasHoy - diasNac) / 365;

    printf("Usted tiene: %d", edad);

    return 0;
}
