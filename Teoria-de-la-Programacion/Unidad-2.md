# 📘 Unidad 2

---

# 📚 Contenido de la Unidad

- [Estructuras condicionales](#1-estructuras-condicionales)
- [Estructuras repetitivas](#2-estructuras-repetitivas)
- [Ejercicio con estructura condicional y repetitiva](#3-ejercicio-con-estructura-condicional-y-repetitiva)
- [Principales dificultades y reflexión crítica](#4-principales-dificultades-y-reflexión-crítica)

---

# 1. Estructuras Condicionales

Las estructuras condicionales permiten que un programa tome decisiones dependiendo de si una condición es verdadera o falsa.

---

## 🔹 Tipos de estructuras condicionales

### ✅ Condicional simple (`if`)

Ejecuta una acción únicamente si la condición se cumple.

### 📌 Pseudocódigo

```txt
INICIO

  LEER edad

  SI edad >= 18 ENTONCES
      ESCRIBIR "Mayor de edad"
  FIN_SI

FIN
```

---

### ✅ Condicional doble (`if - else`)

Permite ejecutar una acción si la condición es verdadera y otra diferente si es falsa.

### 📌 Pseudocódigo

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

---

### ✅ Condicional múltiple (`if - else if`)

Evalúa varias condiciones consecutivas.

### 📌 Pseudocódigo

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

---

## 🔹 Estructura en diagrama de flujo

### Condicional simple

```txt
        ┌─────────────┐
        │  Condición  │
        └──────┬──────┘
               │
         ┌─────▼─────┐
         │ Verdadero │
         └───────────┘
```

---

### Condicional doble

```txt
          ┌─────────────┐
          │ Condición   │
          └──────┬──────┘
          Sí     │     No
      ┌────────┐ │ ┌────────┐
      │ Acción │ │ │ Acción │
      └────────┘ │ └────────┘
```

---

# 2. Estructuras Repetitivas

Las estructuras repetitivas permiten ejecutar instrucciones varias veces mientras se cumpla una condición.

---

## 🔹 Tipos de estructuras repetitivas

### ✅ Ciclo `while`

Evalúa primero la condición.

### 📌 Pseudocódigo

```txt
INICIO

  contador ← 1

  MIENTRAS contador <= 5 HACER

      ESCRIBIR contador

      contador ← contador + 1

  FIN_MIENTRAS

FIN
```

---

### ✅ Ciclo `do while`

Ejecuta al menos una vez el bloque de instrucciones.

### 📌 Pseudocódigo

```txt
INICIO

  HACER

      ESCRIBIR "Ingrese un número positivo"
      LEER n

  MIENTRAS n <= 0

FIN
```

---

### ✅ Ciclo `for`

Se usa cuando se conoce el número de repeticiones.

### 📌 Pseudocódigo

```txt
INICIO

  PARA i ← 1 HASTA 10 HACER

      ESCRIBIR i

  FIN_PARA

FIN
```

---

## 🔹 Estructura en diagrama de flujo

### Ciclo while

```txt
      ┌─────────────┐
      │ Condición   │
      └──────┬──────┘
          Sí │
             ▼
      ┌─────────────┐
      │ Instrucción │
      └──────┬──────┘
             │
             └───────────↺
```

---

### Ciclo for

```txt
      ┌─────────────┐
      │ Inicializar │
      └──────┬──────┘
             ▼
      ┌─────────────┐
      │ Condición   │
      └──────┬──────┘
          Sí │
             ▼
      ┌─────────────┐
      │ Instrucción │
      └──────┬──────┘
             ▼
      ┌─────────────┐
      │ Incremento  │
      └──────┬──────┘
             └────────↺
```

---

# 3. Ejercicio con estructura condicional y repetitiva

---

## 🔹 Planteamiento del problema

Desarrollar un programa que solicite 5 notas de un estudiante, calcule el promedio y determine si el estudiante aprueba o reprueba.

---

## 🔹 Análisis del problema

### 📥 Entradas
- 5 calificaciones

### ⚙ Procesos
- Leer notas
- Sumar notas
- Calcular promedio
- Evaluar condición

### 📤 Salidas
- Promedio final
- Estado del estudiante

---

## 🔹 Diseño del algoritmo (diagrama de flujo)

```txt
        ┌────────────┐
        │ Inicio     │
        └─────┬──────┘
              ▼
      ┌───────────────┐
      │ Leer notas    │
      └─────┬─────────┘
            ▼
      ┌───────────────┐
      │ Calcular prom │
      └─────┬─────────┘
            ▼
      ┌───────────────┐
      │ ¿Prom >= 6?   │
      └─────┬─────────┘
         Sí │ No
            ▼
   ┌─────────────┐
   │ Aprobado    │
   └─────────────┘
```

---

## 🔹 Codificación (código fuente)

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

## 🔹 Validación (prueba de escritorio)

### ✅ Caso 1

Notas:
- 8
- 9
- 7
- 10
- 8

Resultado:

```txt
Promedio: 8.40
Estado: APROBADO
```

---

### ✅ Caso 2

Notas:
- 4
- 5
- 3
- 6
- 4

Resultado:

```txt
Promedio: 4.40
Estado: REPROBADO
```

---

# 4. Principales dificultades y reflexión crítica

## 🔹 Principales dificultades

- Comprender la lógica de los ciclos repetitivos.
- Diferenciar correctamente operadores de comparación.
- Organizar diagramas de flujo complejos.
- Entender el uso correcto de variables acumuladoras.

---

## 🔹 Reflexión crítica

El estudio de estructuras condicionales y repetitivas permitió comprender cómo los programas toman decisiones y automatizan tareas.

Además, el desarrollo de ejercicios prácticos ayudó a fortalecer la lógica de programación y la capacidad de análisis para resolver problemas computacionales.

Las pruebas de escritorio facilitaron detectar errores antes de ejecutar el código, mejorando el razonamiento lógico y la comprensión del funcionamiento interno de los algoritmos.

---

# 🔗 Navegación

[⬅ Volver a la Portada](Portada.md)

| Navegación |
|---|

[📘 Unidad 1](Unidad-1.md)
[📘 Unidad 3](Unidad-3.md)

---
