
#include <stdio.h>

// verificar si un número es primo
int esPrimo(int numero) {
    if (numero <= 1) {
        return 0;  // toca editarlo para que no introduscan numeros menores a 1
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;  // este mini codigo en resumen dice No es primo si es divisible por algún número menor o igual a su raíz cuadrada
        }
    }

    return 1;  // Es primo
}

int main() {
    int numero;

    //este comando pide que el usuario meta su nombre
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

    // y esto dice si tu numero es primo o no.
    if (esPrimo(numero)) {
        printf("%d es un número primo.\n", numero);
    } else {
        printf("%d no es un número primo.\n", numero);
    }

    return 0;
}
