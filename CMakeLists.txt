cmake_minimum_required(VERSION 3.29)
project(Coleccion_Ejercicios_Libreria_estandar_de_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Coleccion_Ejercicios_Libreria_estandar_de_C
    main.c
        "Funciones stdlib/absoluto.c"
        "Funciones string/longitud.c"
        "Funciones string/comparacion.c"
        "Funciones stdio/abrir_archivo.c"
        "Funciones stdio/escribir-leer_archivo.c")
