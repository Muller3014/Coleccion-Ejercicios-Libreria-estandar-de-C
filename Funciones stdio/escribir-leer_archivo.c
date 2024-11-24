//
// Created by gonza on 24/11/2024.
//

#include "escribir-leer_archivo.h"
#include <stdio.h>

void escribirYLeerArchivo (char nombre_archivo[], char texto[]) {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
    }

    fprintf(file, "%s\n", texto);

    // Cerrar el archivo después de escribir
    fclose(file);

    // Abrir de nuevo para leer
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
    }

    char buffer[255];
    fscanf(file, "%s", buffer);

    printf("Leido del archivo: %s\n", buffer);

    // Cerrar el archivo después de leer
    fclose(file);
}