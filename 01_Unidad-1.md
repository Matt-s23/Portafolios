[⬅ Volver a la Portada](00_Portada.md)
 
# UNIDAD 1
 
---
 
## Índice
 
1. [Conceptos Fundamentales de Programación](#1-conceptos-fundamentales-de-programación)
   - 1.1 [Algoritmo](#11-algoritmo)
   - 1.2 [Pseudocódigo](#12-pseudocódigo)
   - 1.3 [Diagrama de Flujo](#13-diagrama-de-flujo)
   - 1.4 [Prueba de Escritorio](#14-prueba-de-escritorio)
   - 1.5 [Lenguajes de Programación](#15-lenguajes-de-programación)
   - 1.6 [Programación por Bloques](#16-programación-por-bloques)
2. [Ejercicios con Estructura Secuencial](#2-ejercicios-con-estructura-secuencial)
   - 2.1 [Ejercicio 1: Cálculo de presupuesto en PSeInt](#21-ejercicio-1-cálculo-de-presupuesto-en-pseint)
   - 2.2 [Ejercicio 2: Sistema de comisiones en Lenguaje C](#22-ejercicio-2-sistema-de-comisiones-en-lenguaje-c)
3. [Reflexión](#3-reflexión)
---
 
## 1. Conceptos Fundamentales de Programación
 
<div style="text-align: justify;">
### 1.1 Algoritmo
 
Antes de escribir cualquier línea de código, todo problema computacional necesita resolverse primero en el papel: eso es un algoritmo. Se trata de una serie ordenada y finita de pasos lógicos que, aplicados en el orden correcto, llevan a la solución de un problema puntual. Para que funcione como tal, un algoritmo debe cumplir tres condiciones básicas: sus pasos deben ser precisos (sin margen de interpretación), deben estar bien definidos (el orden de ejecución no debe generar ambigüedad) y el proceso debe ser finito (tiene que terminar en algún punto). Pensarlo como una receta de cocina ayuda a entender la idea: no basta con tener los ingredientes, hace falta el orden exacto de los pasos para que el resultado sea el esperado.
 
<p align="center">
<img width="400" height="250" alt="image" src="https://github.com/user-attachments/assets/73065d5b-ebe4-4ed3-86f9-7ee62936a3d1" />
</p>
---
 
### 1.2 Pseudocódigo
 
El pseudocódigo funciona como un puente entre el lenguaje natural y el código real. No sigue las reglas estrictas de sintaxis de un lenguaje de programación, pero sí adopta su estructura lógica (variables, condicionales, ciclos), lo que permite concentrarse en resolver el problema sin preocuparse todavía por errores de escritura de código. Es, básicamente, el borrador de la solución antes de convertirlo en un programa ejecutable.
 
<p align="center">
<img width="400" height="250" alt="image" src="https://github.com/user-attachments/assets/78ef6310-59d8-4a54-888e-c147db02546a" />
</p>
---
 
### 1.3 Diagrama de Flujo
 
El diagrama de flujo es la versión gráfica de un algoritmo. Usa figuras estandarizadas —óvalos para marcar inicio y fin, rectángulos para procesos, rombos para decisiones— conectadas por flechas que muestran la dirección en la que avanza el programa. Su mayor ventaja es que permite detectar de un vistazo errores que en texto pasarían desapercibidos, como un ciclo sin salida o una condición mal planteada.
 
<p align="center">
<img width="400" height="250" alt="image" src="https://github.com/user-attachments/assets/c83c1fbe-88b6-43d6-bb24-87e098597062" />
</p>
---
 
### 1.4 Prueba de Escritorio
 
La prueba de escritorio es una verificación manual: se recorre el algoritmo paso a paso con valores de entrada concretos y se anota en una tabla cómo va cambiando cada variable en cada momento del proceso. Es la forma de comprobar, antes de programar, que la lógica diseñada realmente entrega el resultado esperado, y de detectar errores de cálculo o de manejo de variables desde el papel.
 
<p align="center">
<img width="400" height="250" alt="image" src="https://github.com/user-attachments/assets/0683985c-fa0f-4ffd-9631-6a108fc565db" />
</p>
---
 
### 1.5 Lenguajes de Programación
 
Un lenguaje de programación es el conjunto de reglas sintácticas y semánticas que permite traducir un algoritmo en instrucciones que una computadora puede ejecutar. Existen lenguajes de bajo nivel, que trabajan muy cerca del hardware (como el ensamblador), y lenguajes de alto nivel, más legibles y abstractos para el programador (como C, Python o Java). La elección del lenguaje depende de la tarea: desarrollo web, análisis de datos, sistemas operativos, entre otros escenarios.
 
<p align="center">
<img width="400" height="250" alt="image" src="https://github.com/user-attachments/assets/d1e6b552-99ef-43e8-b7b0-4f1e0dc499b7" />
</p>
---
 
### 1.6 Programación por Bloques
 
La programación por bloques sustituye la escritura de texto por piezas gráficas que encajan entre sí como un rompecabezas, donde cada bloque representa una instrucción (un bucle, una condición, una operación). Esto elimina el riesgo de errores de sintaxis y deja al usuario concentrarse únicamente en la lógica del problema. Herramientas como Scratch o Blockly la usan como puerta de entrada a la programación antes de dar el salto a un lenguaje escrito.
 
<p align="center">
<img width="400" height="250" alt="image" src="https://github.com/user-attachments/assets/979ea4ec-f546-41c3-ae00-fc687f073aa1" />
</p>
</div>
---
 
## 2. Ejercicios con Estructura Secuencial
 
<div style="text-align: justify;">
### 2.1 Ejercicio 1: Cálculo de presupuesto en PSeInt
 
#### Planteamiento del problema
 
Un almacén necesita automatizar el cálculo del costo de un trabajo que se cobra según la cantidad de superficie procesada. El sistema debe permitir ingresar la medida a procesar y, a partir de una tarifa fija por metro cuadrado, generar el monto total a cobrar.
 
#### Análisis del problema
 
La entrada del sistema es la cantidad de metros cuadrados (m2), definida como número real para admitir decimales. Internamente se asigna un valor constante de 50 a la variable `Trabajo`, correspondiente a la tarifa por metro cuadrado, y se multiplica por los metros cuadrados ingresados. El resultado se almacena en la variable `Precio`, que constituye la salida del programa.
 
#### Diseño del algoritmo
 
<p align="center">
<img width="620" height="681" alt="image" src="https://github.com/user-attachments/assets/26a27771-30a1-482a-9d11-916dcd0c5c05" />
</p>
#### Diagrama de flujo
 
<p align="center">
<img width="1109" height="732" alt="image" src="https://github.com/user-attachments/assets/9e12b524-3d1a-4f7e-904f-87c11a7637b3" />
</p>
#### Ejecución del programa
 
<p align="center">
<img width="555" height="372" alt="image" src="https://github.com/user-attachments/assets/33063871-bd50-4fa7-9184-e1895d4f7efe" />
</p>
#### Prueba de escritorio
 
<p align="center">
<img width="650" height="226" alt="image" src="https://github.com/user-attachments/assets/1ee9570a-f10a-4280-be0c-34cf3e7e6532" />
</p>
---
 
### 2.2 Ejercicio 2: Sistema de comisiones en Lenguaje C
 
#### Planteamiento del problema
 
Una empresa necesita un programa en lenguaje C que gestione el pago de comisiones sobre las ventas realizadas por sus vendedores. El programa debe procesar tres montos de ventas ya definidos, aplicar sobre cada uno una comisión del 4% y calcular cuánto representa en total ese pago de comisiones para la empresa.
 
#### Análisis del problema
 
Se definen tres constantes de tipo flotante correspondientes a los montos de venta: 30 000.00, 29 000.00 y 33 000.00. Sobre cada una se calcula individualmente el 4% de comisión (`porcentaje1`, `porcentaje2`, `porcentaje3`), y la suma de estos tres valores se almacena en una variable global llamada `pagototal`. El programa debe mostrar tanto el desglose por cada venta como el total acumulado.
 
#### Diseño del algoritmo / Codificación
 
<p align="center">
<img width="1086" height="730" alt="image" src="https://github.com/user-attachments/assets/8ac9ff11-8023-4286-acdc-e7c0d0ef064a" />
</p>
#### Ejecución del programa
 
<p align="center">
<img width="912" height="233" alt="image" src="https://github.com/user-attachments/assets/94e8c4ff-66ba-4a32-bb89-b606e6990f5e" />
</p>
#### Prueba de escritorio
 
<p align="center">
<img width="591" height="238" alt="image" src="https://github.com/user-attachments/assets/fa3bafcd-c682-4eab-bab3-92f47abff73b" />
</p>
</div>
---
 
## 3. Reflexión
 
<div style="text-align: justify;">
Trabajar esta unidad me dejó claro que programar no empieza en el teclado, sino en el papel. Antes de escribir la primera línea en PSeInt o en C, tuve que pensar con cuidado qué datos entraban, qué operación había que hacer con ellos y qué debía salir como resultado; cuando me saltaba ese paso y trataba de escribir el código directamente, terminaba cometiendo errores que después me costaba más detectar.
 
La parte que más trabajo me costó fue la prueba de escritorio: al principio la veía como un paso opcional, pero al aplicarla en el ejercicio de las comisiones me permitió notar un error en el orden en que estaba sumando los porcentajes antes de tener el código terminado, lo que me ahorró tiempo de depuración más adelante. Entendí que revisar el algoritmo a mano, con valores concretos, es lo que realmente valida si la lógica está bien planteada, y no solo si el programa "corre" sin errores de sintaxis.
 
También pude notar la diferencia entre pensar en pseudocódigo y pensar directamente en un lenguaje como C: el pseudocódigo me daba más libertad para concentrarme en la lógica, mientras que en C tuve que prestar más atención a los tipos de datos y a la sintaxis exacta de cada instrucción. Esta unidad me sirvió para reforzar que la lógica de programación es la misma independientemente del lenguaje, y que dominarla primero en pseudocódigo facilita mucho la transición a un lenguaje real.
 
</div>
---
 
## 🔗 Navegación
 
[⬅ Volver a la Portada](00_Portada.md)
 
| Navegación |
|---|
| [📘 Unidad 2](02_Unidad-2.md) |
| [📘 Unidad 3](03_Unidad-3.md) |
| [📝 Conclusiones Generales](04_Conclusiones-Generales.md) |
| [📚 Bibliografía](05_Bibliografia.md) |
| [🤖 Declaración de uso de la IA](06_Declaración-de-uso-de-la-IA.md) |
 
---
---
```

