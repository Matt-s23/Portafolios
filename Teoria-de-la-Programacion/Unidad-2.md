# UNIDAD 2
## Estructuras Condicionales y Repetitivas

---

# Tabla de Contenidos

1. Introducción
2. Estructuras Condicionales
   - 2.1 Condicional Simple (if)
   - 2.2 Condicional Doble (if - else)
   - 2.3 Condicional Múltiple (if - else if)
3. Estructuras Repetitivas
   - 3.1 Ciclo while
   - 3.2 Ciclo do while
   - 3.3 Ciclo for
4. Ejercicio Integrador
   - 4.1 Planteamiento del Problema
   - 4.2 Análisis del Problema
   - 4.3 Diseño del Algoritmo
   - 4.4 Diagrama de Flujo
   - 4.5 Codificación
   - 4.6 Validación
5. Principales Dificultades y Reflexión Crítica
6. Conclusión
7. Navegación

---

# 1. Introducción

Las estructuras de control constituyen uno de los elementos fundamentales dentro de la programación, ya que permiten dirigir el flujo de ejecución de un algoritmo según determinadas condiciones o necesidades del problema planteado. Sin estas estructuras, los programas ejecutarían sus instrucciones de forma secuencial, limitando significativamente su capacidad para resolver situaciones complejas.

Dentro de las estructuras de control se encuentran las estructuras condicionales y las estructuras repetitivas. Las primeras permiten que un programa tome decisiones mediante la evaluación de expresiones lógicas, mientras que las segundas posibilitan la ejecución repetida de un conjunto de instrucciones. El estudio de estos conceptos resulta indispensable para el desarrollo de algoritmos eficientes y para la comprensión de cualquier lenguaje de programación moderno.

---

# 2. Estructuras Condicionales

Las estructuras condicionales permiten que un programa tome decisiones dependiendo de si una condición es verdadera o falsa. Estas estructuras son fundamentales porque permiten controlar el flujo de ejecución de un algoritmo y adaptar el comportamiento del programa según diferentes situaciones.

---

## 2.1 Condicional Simple (if)

La estructura `if` ejecuta un bloque de instrucciones únicamente cuando la condición establecida es verdadera.

### Pseudocódigo

```txt
INICIO

    LEER edad

    SI edad >= 18 ENTONCES
        ESCRIBIR "Mayor de edad"
    FIN_SI

FIN
```

### Diagrama de Flujo

> Espacio reservado para insertar el diagrama de flujo del condicional simple.

---

## 2.2 Condicional Doble (if - else)

La estructura `if - else` permite ejecutar una acción cuando la condición es verdadera y otra diferente cuando la condición es falsa.

### Pseudocódigo

```txt
INICIO

    LEER nota

    SI nota >= 6 ENTONCES
        ESCRIBIR "Aprobado"
    SINO
        ESCRIBIR "Reprobado"
    FIN_SI

FIN
```

### Diagrama de Flujo

> Espacio reservado para insertar el diagrama de flujo del condicional doble.

---

## 2.3 Condicional Múltiple (if - else if)

Esta estructura se utiliza cuando existen varias condiciones posibles dentro de un mismo problema.

### Pseudocódigo

```txt
INICIO

    LEER promedio

    SI promedio >= 9 ENTONCES
        ESCRIBIR "Excelente"

    SINO SI promedio >= 7 ENTONCES
        ESCRIBIR "Bueno"

    SINO SI promedio >= 6 ENTONCES
        ESCRIBIR "Suficiente"

    SINO
        ESCRIBIR "Reprobado"

    FIN_SI

FIN
```

### Diagrama de Flujo

> Espacio reservado para insertar el diagrama de flujo del condicional múltiple.

---

# 3. Estructuras Repetitivas

Las estructuras repetitivas permiten ejecutar un conjunto de instrucciones varias veces mientras se cumpla una condición determinada. Su utilización evita la repetición innecesaria de código y facilita la automatización de procesos.

---

## 3.1 Ciclo while

El ciclo `while` evalúa primero la condición y posteriormente ejecuta las instrucciones mientras dicha condición sea verdadera.

### Pseudocódigo

```txt
INICIO

    contador ← 1

    MIENTRAS contador <= 5 HACER

        ESCRIBIR contador

        contador ← contador + 1

    FIN_MIENTRAS

FIN
```

### Diagrama de Flujo

> Espacio reservado para insertar el diagrama de flujo del ciclo while.

---

## 3.2 Ciclo do while

La estructura `do while` ejecuta primero el bloque de instrucciones y posteriormente evalúa la condición, garantizando al menos una ejecución.

### Pseudocódigo

```txt
INICIO

    HACER

        ESCRIBIR "Ingrese un número positivo"
        LEER n

    MIENTRAS n <= 0

FIN
```

### Diagrama de Flujo

> Espacio reservado para insertar el diagrama de flujo del ciclo do while.

---

## 3.3 Ciclo for

La estructura `for` se utiliza cuando se conoce previamente la cantidad de veces que se repetirá una instrucción.

### Pseudocódigo

```txt
INICIO

    PARA i ← 1 HASTA 10 HACER

        ESCRIBIR i

    FIN_PARA

FIN
```

### Diagrama de Flujo

> Espacio reservado para insertar el diagrama de flujo del ciclo for.

---

# 4. Ejercicio Integrador

## 4.1 Planteamiento del Problema

Desarrollar un programa que solicite cinco notas de un estudiante, calcule el promedio general y determine si el estudiante aprueba o reprueba la asignatura.

---

## 4.2 Análisis del Problema

### Entradas

- Cinco calificaciones.

### Procesos

- Leer las notas.
- Sumar las calificaciones.
- Calcular el promedio.
- Evaluar la condición de aprobación.

### Salidas

- Promedio final.
- Estado del estudiante.

---

## 4.3 Diseño del Algoritmo

### Pseudocódigo

```txt
INICIO

    suma ← 0

    PARA i ← 1 HASTA 5 HACER

        LEER nota
        suma ← suma + nota

    FIN_PARA

    promedio ← suma / 5

    SI promedio >= 6 ENTONCES
        ESCRIBIR "APROBADO"
    SINO
        ESCRIBIR "REPROBADO"
    FIN_SI

FIN
```

---

## 4.4 Diagrama de Flujo

> Espacio reservado para insertar el diagrama de flujo completo del ejercicio.

---

## 4.5 Codificación

```c
#include <stdio.h>

int main() {

    int i;
    float nota, suma = 0, promedio;

    for(i = 1; i <= 5; i++) {

        printf("Ingrese la nota %d: ", i);
        scanf("%f", &nota);

        suma = suma + nota;
    }

    promedio = suma / 5;

    printf("\nPromedio: %.2f\n", promedio);

    if(promedio >= 6) {

        printf("Estado: APROBADO");

    } else {

        printf("Estado: REPROBADO");
    }

    return 0;
}
```

---

## 4.6 Validación

### Caso 1

**Datos de entrada**

- 8
- 9
- 7
- 10
- 8

**Resultado**

```txt
Promedio: 8.40
Estado: APROBADO
```

### Caso 2

**Datos de entrada**

- 4
- 5
- 3
- 6
- 4

**Resultado**

```txt
Promedio: 4.40
Estado: REPROBADO
```

---

# 5. Principales Dificultades y Reflexión Crítica

## Reflexión

El desarrollo de esta unidad me permitió comprender que la programación no consiste únicamente en escribir código, sino en aprender a resolver problemas mediante un razonamiento lógico y estructurado.

Durante el estudio de las estructuras condicionales y repetitivas entendí cómo un programa puede tomar decisiones y repetir procesos automáticamente dependiendo de ciertas condiciones establecidas.

Una de las mayores dificultades que tuve fue comprender el funcionamiento de los ciclos `for` y `while`, ya que inicialmente resultaban confusos debido a la manera en que controlan las repeticiones dentro de un programa. También experimenté dificultades al elaborar diagramas de flujo relacionados con estructuras repetitivas, ya que era necesario organizar correctamente la secuencia lógica del proceso para evitar errores.

Sin embargo, mediante la práctica constante, las pruebas de escritorio y la corrección de errores, logré comprender mejor el comportamiento de estas estructuras y su importancia dentro del desarrollo de software.

---

# 6. Conclusión

Las estructuras condicionales y repetitivas representan una base fundamental en la programación, ya que permiten controlar el flujo de ejecución de un programa y automatizar tareas de manera eficiente.

Además, el uso de pseudocódigo, diagramas de flujo y lenguaje C permitió relacionar la teoría con la práctica, fortaleciendo el pensamiento lógico-computacional y la capacidad para resolver problemas mediante algoritmos.

Los conocimientos adquiridos en esta unidad servirán como base para abordar temas más avanzados de programación y desarrollo de software.

---

# 7. Navegación

[Volver a la Portada](Portada.md)

| Documento |
|-----------|
| [Unidad 1](Unidad-1.md) |
| [Unidad 3](Unidad-3.md) |

---
