//
// Created by gonza on 24/11/2024.
//

#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numeroRandom() {
    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // Generar un número aleatorio entre 0 y 100
    int random_num = rand();

    printf("Numero aleatorio: %d\n", random_num);
}