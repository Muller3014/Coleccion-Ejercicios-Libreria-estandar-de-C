//
// Created by gonza on 24/11/2024.
//

#include "abrir_archivo.h"
#include <stdio.h>

void abrirArchivo(char nombre_archivo[]) {
    FILE *archivo = fopen(nombre_archivo, "r");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
    } else {
        printf("Archivo abierto correctamente.\n");
        fclose(archivo);
    }
}