//
// Created by gonza on 24/11/2024.
//

#include "abrir_archivo.h"
#include <stdio.h>

void abrirArchivo(char nombre_archivo[]) {

    printf("============ Libreria stdio ============\n");

    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
    } else {
        printf("El archivo se abrio correctamente.\n");
    }

    // Cerrar el archivo al final
    fclose(file);

}