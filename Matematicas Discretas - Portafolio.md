<div align="center">

# 📚 Portafolio — Unidad 1
## ⊢ Lógica Proposicional

<img src="https://img.shields.io/badge/UNIVERSIDAD-NACIONAL_DE_LOJA-003366?style=for-the-badge&labelColor=0b1120" />

<img src="https://img.shields.io/badge/MATEMÁTICAS-DISCRETAS-5b8dd9?style=for-the-badge&labelColor=0b1120" />

<img src="https://img.shields.io/badge/PORTAFOLIO-INTERACTIVO-0d6efd?style=for-the-badge&labelColor=0b1120" />

---

### Estudiante: Matias Santiago Calva Gonzalez 
### Ing : Mario Enrique Cueva 
### Carrera: Computacion 
### Ciclo: Primer ciclo 
### Año: 2026

</div>

---

# 📑 Navegación Inteligente

<details open>
<summary><b>📖 RESUMEN TEÓRICO</b></summary>

### 🔹 Fundamentos
- [1.1 ¿Qué es una proposición?](#-11--qué-es-una-proposición)
- [1.2 Tipos de proposiciones](#-12--tipos-de-proposiciones)

### 🔹 Operadores Lógicos
- [1.3 Conectores lógicos](#-13--conectores-lógicos)
- [1.4 Tablas de verdad](#-14--tablas-de-verdad)

### 🔹 Álgebra Proposicional
- [1.5 Leyes proposicionales](#-15--leyes-proposicionales)
- [1.6 Reglas de inferencia](#-16--reglas-de-inferencia)

</details>

---

<details>
<summary><b>📊 EJERCICIOS RESUELTOS</b></summary>

- [Ejercicio 1 — Traducción simbólica](#-ejercicio-1--traducción-de-lenguaje-natural)
- [Ejercicio 2 — Tabla de verdad](#-ejercicio-2--tabla-de-verdad)
- [Ejercicio 3 — Clasificación lógica](#-ejercicio-3--tautología-contradicción-y-contingencia)
- [Ejercicio 4 — Leyes proposicionales](#-ejercicio-4--leyes-proposicionales)
- [Ejercicio 5 — Validación de argumentos](#-ejercicio-5--validación-de-argumento)

</details>

---

<details>
<summary><b>🧠 EJERCICIO APLICADO</b></summary>

- [Sistema de control de acceso](#-sistema-de-control-de-acceso)

</details>

---

<details>
<summary><b>🔍 REFLEXIÓN PERSONAL</b></summary>

- [¿Qué fue lo más difícil?](#-qué-fue-lo-más-difícil)
- [¿Qué tema comprendí mejor?](#-qué-tema-comprendí-mejor)
- [¿Cómo puedo aplicar la lógica?](#-cómo-puedo-aplicar-la-lógica)

</details>

---

<details>
<summary><b>📁 ACTIVIDADES APE</b></summary>

- [Listado de evidencias](#-actividades-ape)

</details>

---

---

# 📖 1.1 — ¿Qué es una Proposición?

> Una **proposición** es un enunciado declarativo al cual se le puede asignar un valor de verdad:
>
> - Verdadero (`V`)
> - Falso (`F`)

---

## ✅ Ejemplos Correctos

| Enunciado | Valor |
|---|---|
| 7 es un número primo | `V` |
| 2 + 2 = 5 | `F` |
| Python es un sistema operativo | `F` |

---

## ❌ No son proposiciones

| Enunciado | Motivo |
|---|---|
| ¿Cómo estás? | Pregunta |
| Guarda el archivo | Orden |
| Ojalá funcione | Deseo |

---

## 🧠 Idea Clave

```txt
Toda proposición debe poder verificarse
como verdadera o falsa.
```

---

# 📖 1.2 — Tipos de Proposiciones

---

## 🔹 Proposiciones Simples

No contienen conectores lógicos.

```txt
p : El servidor está activo
q : El usuario inició sesión
```

---

## 🔹 Proposiciones Compuestas

Se forman usando operadores lógicos.

```txt
p ∧ q
p → q
¬p
```

---

## ⚡ Diferencia Fundamental

| Tipo | Característica |
|---|---|
| Simples | No se pueden dividir |
| Compuestas | Contienen conectores |

---

# 📖 1.3 — Conectores Lógicos

---

## 📌 Tabla Principal

| Símbolo | Nombre | Lectura |
|---|---|---|
| `¬` | Negación | No |
| `∧` | Conjunción | Y |
| `∨` | Disyunción | O |
| `→` | Condicional | Si... entonces |
| `↔` | Bicondicional | Si y solo si |

---

## 💡 Ejemplos

| Expresión | Interpretación |
|---|---|
| `p ∧ q` | p y q |
| `p ∨ q` | p o q |
| `¬p` | no p |
| `p → q` | si p entonces q |

---

## 🧠 Relación con Programación

```txt
¬p     → !p
p ∧ q  → p && q
p ∨ q  → p || q
```

---

# 📖 1.4 — Tablas de Verdad

Las tablas de verdad permiten analizar todas las combinaciones posibles de una expresión lógica.

---

## ⚙️ Procedimiento

| Paso | Acción |
|---|---|
| 1 | Identificar variables |
| 2 | Calcular filas con 2ⁿ |
| 3 | Construir columnas |
| 4 | Resolver conectores |
| 5 | Obtener resultado final |

---

## 📊 Tabla de Verdad

| p | q | p ∧ q | p ∨ q | p → q |
|---|---|---|---|---|
| V | V | V | V | V |
| V | F | F | V | F |
| F | V | F | V | V |
| F | F | F | F | V |

---

## 🎯 Clasificación

| Tipo | Resultado |
|---|---|
| 🟢 Tautología | Todo verdadero |
| 🔴 Contradicción | Todo falso |
| 🟡 Contingencia | Valores mezclados |

---

# 📖 1.5 — Leyes Proposicionales

Las leyes proposicionales permiten transformar expresiones sin cambiar su valor lógico.

---

## 📌 Leyes Importantes

| Ley | Equivalencia |
|---|---|
| Doble Negación | `¬(¬p) ≡ p` |
| De Morgan | `¬(p ∧ q) ≡ ¬p ∨ ¬q` |
| Implicación Material | `p → q ≡ ¬p ∨ q` |
| Conmutativa | `p ∧ q ≡ q ∧ p` |

---

## 💡 Aplicación Real

```txt
!(A && B)
```

equivale a:

```txt
!A || !B
```

---

# 📖 1.6 — Reglas de Inferencia

Las reglas de inferencia permiten obtener conclusiones válidas.

---

## 🔹 Modus Ponens

```txt
p → q
p
∴ q
```

---

## 🔹 Modus Tollens

```txt
p → q
¬q
∴ ¬p
```

---

## 🔹 Silogismo Hipotético

```txt
p → q
q → r
∴ p → r
```

---

## 🔹 Silogismo Disyuntivo

```txt
p ∨ q
¬p
∴ q
```

---

---

# 📊 Ejercicio 1 — Traducción de lenguaje natural

<details>
<summary><b>📋 Ver procedimiento completo</b></summary>

---

## 🔹 Enunciado

> Si el sistema detecta un error y el usuario está conectado, entonces se envía una alerta.

---

## 🔹 Variables

| Variable | Significado |
|---|---|
| p | El sistema detecta un error |
| q | El usuario está conectado |
| r | Se envía una alerta |

---

## 🔹 Traducción lógica

```txt
(p ∧ q) → r
```

---

## ✅ Resultado

La expresión representa correctamente el comportamiento descrito.

</details>

---

# 📊 Ejercicio 2 — Tabla de Verdad

<details>
<summary><b>📋 Ver procedimiento completo</b></summary>

---

## 🔹 Expresión

```txt
(p → q) ∧ (¬p ∨ r)
```

---

## 📊 Desarrollo

| p | q | r | Resultado |
|---|---|---|---|
| V | V | V | V |
| V | V | F | F |
| F | V | V | V |
| F | F | F | V |

---

## 🎯 Clasificación

🟡 Contingencia

</details>

---

# 📊 Ejercicio 3 — Tautología, Contradicción y Contingencia

<details>
<summary><b>📋 Ver procedimiento completo</b></summary>

---

## 🔹 Tautología

```txt
p ∨ ¬p
```

Resultado:

🟢 Siempre verdadero

---

## 🔹 Contradicción

```txt
p ∧ ¬p
```

Resultado:

🔴 Siempre falso

</details>

---

# 📊 Ejercicio 4 — Leyes Proposicionales

<details>
<summary><b>📋 Ver procedimiento completo</b></summary>

---

## 🔹 Expresión Inicial

```txt
¬(¬p ∧ q)
```

---

## 🔹 Aplicando De Morgan

```txt
¬¬p ∨ ¬q
```

---

## 🔹 Resultado Final

```txt
p ∨ ¬q
```

</details>

---

# 📊 Ejercicio 5 — Validación de Argumento

<details>
<summary><b>📋 Ver procedimiento completo</b></summary>

---

## 🔹 Premisas

```txt
p → q
q → r
p
```

---

## 🔹 Conclusión

```txt
∴ r
```

---

## 🔹 Reglas Utilizadas

- Silogismo Hipotético
- Modus Ponens

---

## ✅ Resultado

El argumento es válido.

</details>

---

---

# 🧠 Sistema de Control de Acceso

---

## 📌 Situación

Un estudiante puede utilizar los equipos únicamente si presenta carnet vigente y posee horario asignado.

---

## 🔹 Variables

| Variable | Significado |
|---|---|
| p | Tiene carnet |
| q | Tiene horario |
| r | Puede ingresar |

---

## 🔹 Expresión lógica

```txt
(p ∧ q) → r
```

---

## 🔹 Interpretación

El acceso solo es válido cuando ambas condiciones son verdaderas.

---

## 🧠 Aplicación Real

Este tipo de lógica se utiliza en:

- Ciberseguridad
- Sistemas de autenticación
- Bases de datos
- Redes informáticas

---

# 🔍 ¿Qué fue lo más difícil?

> Comprender la construcción correcta de tablas de verdad con múltiples conectores y el análisis lógico de expresiones complejas.

---

# 🔍 ¿Qué tema comprendí mejor?

> Las leyes proposicionales y las reglas de inferencia, debido a su relación directa con programación y algoritmos.

---

# 🔍 ¿Cómo puedo aplicar la lógica?

## 🚀 Aplicaciones

- Desarrollo de software
- Validación de condiciones
- Inteligencia artificial
- Ciberseguridad
- Diseño de algoritmos

---

---

# 📁 Actividades APE

| Actividad | Descripción |
|---|---|
| APE 01 | Identificación de proposiciones |
| APE 02 | Tablas de verdad |
| APE 03 | Leyes lógicas |
| APE 04 | Compuertas lógicas |
| APE 05 | Reglas de inferencia |

---

# 🎯 Conclusión General

La lógica proposicional constituye una herramienta fundamental para el razonamiento formal, la programación y el análisis computacional. Gracias a ella es posible modelar situaciones reales, validar argumentos y desarrollar sistemas más seguros y eficientes.

---

<div align="center">

## 🎓 Universidad Nacional de Loja

### Matemáticas Discretas · Unidad 1 · Lógica Proposicional

<img src="https://img.shields.io/badge/PORTAFOLIO-COMPLETADO-success?style=for-the-badge" />

</div>
