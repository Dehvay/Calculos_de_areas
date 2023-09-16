//Programa que realiza el cálculo del área de un rectangulo
#include <stdio.h>

int main()
{
    int area;
    int altura;
    int base;

    altura=33;
    base=12;
    area = base * altura;

    printf("El rectangulo de %i x %i tiene area de %i", base, altura, area);
}