//
// Created by gonza on 24/11/2024.
//

#include "Funciones stdio/abrir_archivo.h"
#include "Funciones stdlib/absoluto.h"
#include "Funciones stdlib/random.h"
#include "Funciones string/comparacion.h"
#include "Funciones string/longitud.h"
#include "Funciones stdio/escribir-leer_archivo.h"

int main() {

    valorAbsoluto(-10);
    numeroRandom();
    comparaStrings("Hola", "Mundo");
    longitudCadena("Hola Mundo");
    abrirArchivo("file.txt");
    escribirYLeerArchivo("file.txt", "Hi");

    return 0;
}
