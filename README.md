# Colección de Ejercicios: Librería estándar de C - Gonzalo Müller

<details>
  <summary>LINK DEL REPOSITORIO</summary>
  
<br>
  
Link del repositorio: https://github.com/Muller3014/Coleccion-Ejercicios-Libreria-estandar-de-C.git

</details>



 
<details>
  <summary>INSTRUCCIONES DE ENTREGA</summary>

## Enunciados

<br>
<br>

**1. Las funciones comunes del lenguaje C (<stdlib.h>)**

<br>

a. Utiliza la función abs() para calcular el valor absoluto de un número entero. Prueba con varios números, incluyendo negativos.

b. Usa la función rand() para generar un número aleatorio. Luego, usa srand() para cambiar la semilla de la generación de números aleatorios y observa cómo cambian los números generados.

**2. Cadenas (<string.h>)**

<br>

a. Crea dos cadenas de caracteres y usa la función strcmp() para compararlas. Prueba con cadenas iguales y diferentes

b. Usa la función strlen() para calcular la longitud de una cadena.

**3. Archivos (<stdio.h>)**

<br>

a. Usa la función fopen() para abrir un archivo de texto. Si el archivo no existe, muestra un mensaje de error.

b. Escribe en un archivo de texto usando fprintf(). Después, lee lo que escribiste usando fscanf().

<br>

</details>




<details>
  <summary>EJERCICIOS</summary>
<details>
  <summary>EJ1</summary>

### Ejercicio 1
## a)
```
#include "absoluto.h"
#include <stdio.h>
#include <stdlib.h>

void valorAbsoluto(int num) {
    printf("============ Libreria stdlib ============\n");

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d\n", num, abs_num);
}
```
## b)
```
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
```

</details>
<details>
  <summary>EJ2</summary>

### Ejercicio 2
## a)
```
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
```
## b)
```
#include "longitud.h"
#include <stdio.h>
#include <string.h>

void longitudCadena(char str[]) {
    int length = strlen(str);


    printf("La longitud de %s es: %d\n", str, length);
}
```
</details>
<details>
  <summary>EJ3</summary>

### Ejercicio 3
## a)
```
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
```
## b)
```
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
```
</details>
</details>





