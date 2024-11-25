//
// Created by gonza on 24/11/2024.
//

#include "comparacion.h"
#include <stdio.h>
#include <string.h>

void comparaStrings(char str1[], char str2[]) {

    printf("============ Libreria string ============\n");

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }
}