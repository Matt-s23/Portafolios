<div align="center">

<!-- ═══════════════════════════════════════════════════════════════ -->
<!--         ▼  REEMPLAZA CON TU IMAGEN  ▼                          -->
<!--  <img src="./assets/logo_unl.png" width="180" alt="Logo UNL"/> -->
<!-- ═══════════════════════════════════════════════════════════════ -->

<br/>

<picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://readme-typing-svg.demolab.com?font=Fira+Code&size=13&duration=1&pause=99999&color=5B8DD9&center=true&vCenter=true&width=480&lines=UNIVERSIDAD+NACIONAL+DE+LOJA"/>
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=13&duration=1&pause=99999&color=003366&center=true&vCenter=true&width=480&lines=UNIVERSIDAD+NACIONAL+DE+LOJA" alt="UNL"/>
</picture>

<h1>
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=700&size=28&duration=1&pause=99999&color=003366&center=true&vCenter=true&width=700&lines=Portafolio+%E2%80%94+Unidad+1" alt="Portafolio Unidad 1"/>
</h1>

<h3>
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&duration=1&pause=99999&color=5B8DD9&center=true&vCenter=true&width=600&lines=%E2%8A%A2+L%C3%B3gica+Proposicional" alt="Lógica Proposicional"/>
</h3>

<br/>

```
╔══════════════════════════════════════════════════════════════════╗
║                                                                  ║
║   Asignatura   ·   Matemáticas Discretas                         ║
║   Estudiante   ·   [ TU NOMBRE COMPLETO ]                        ║
║   Docente      ·   [ NOMBRE DEL DOCENTE ]                        ║
║   Período      ·   2026  ·  Universidad Nacional de Loja         ║
║                                                                  ║
╚══════════════════════════════════════════════════════════════════╝
```

<br/>

[![Portafolio](https://img.shields.io/badge/PORTAFOLIO-INDIVIDUAL-003366?style=for-the-badge&logo=bookstack&logoColor=white&labelColor=003366)](.)
[![Unidad](https://img.shields.io/badge/UNIDAD_1_DE_3-COMPLETA-5b8dd9?style=for-the-badge&logo=checkmarx&logoColor=white&labelColor=1a1a2e)](.)
[![Lógica](https://img.shields.io/badge/LÓGICA-PROPOSICIONAL-0d6efd?style=for-the-badge&logo=academia&logoColor=white&labelColor=0a3060)](.)

</div>

---

## 📑 Índice

| # | Sección |
|:---:|:---|
| [01](#-sección-01--resumen-teórico) | 📖 Resumen Teórico |
| [02](#-sección-02--ejercicios-resueltos) | 📊 Ejercicios Resueltos |
| [03](#-sección-03--ejercicio-aplicado) | 🧠 Ejercicio Aplicado |
| [04](#-sección-04--reflexión-personal) | 🔍 Reflexión Personal |
| [05](#-sección-05--actividades-ape) | 📁 Actividades APE |

---
---

# 📖 Sección 01 — Resumen Teórico

---

## 1.1 — ¿Qué es una Proposición?

Una **proposición** es un enunciado declarativo al que se le puede asignar exactamente un valor de verdad: **Verdadero (V)** o **Falso (F)**. Nunca los dos a la vez. Este principio se llama **ley del tercio excluido**.

> **Regla práctica:** Un enunciado es proposición si y solo si puede responderse con "verdadero" o "falso" sin ambigüedad.

**✅ Ejemplos que SÍ son proposiciones:**

| Enunciado | Valor |
|:---|:---:|
| "El número 7 es primo." | `V` |
| "Python es un lenguaje compilado." | `F` |
| "2 + 2 = 5" | `F` |
| "Todo programa tiene al menos una instrucción." | `V` |

**❌ Enunciados que NO son proposiciones:**

| Enunciado | Razón del rechazo |
|:---|:---|
| "¿Cuántos bits tiene un byte?" | Es una pregunta, no afirma nada |
| "Guarda el archivo." | Es una orden |
| "Este enunciado es falso." | Paradoja — no tiene valor definido |
| "Ojalá funcione el código." | Es un deseo, no un hecho verificable |

---

## 1.2 — Tipos de Proposiciones

### Proposiciones Simples (Atómicas)

Son unidades indivisibles que no contienen conectores lógicos. Se simbolizan con letras minúsculas: $p$, $q$, $r$, $s$...

```
p : "El servidor está activo."
q : "El usuario tiene sesión iniciada."
r : "La base de datos responde."
```

### Proposiciones Compuestas (Moleculares)

Se construyen uniendo dos o más proposiciones simples con conectores. Su valor de verdad depende de sus partes y del conector usado.

```
p ∧ q  :  "El servidor está activo Y el usuario tiene sesión."
p → r  :  "SI el servidor está activo, ENTONCES la base de datos responde."
¬p     :  "NO es cierto que el servidor está activo."
```

---

## 1.3 — Conectores Lógicos

| Símbolo | Nombre | Lectura | Falsa cuando... |
|:---:|:---|:---|:---|
| $\neg$ | **Negación** | "No es cierto que..." | Nunca — invierte el valor original |
| $\land$ | **Conjunción** | "... y ..." | Al menos una de las dos es F |
| $\lor$ | **Disyunción** | "... o ..." | Las dos son F simultáneamente |
| $\to$ | **Condicional** | "Si... entonces..." | Antecedente es V y consecuente es F |
| $\leftrightarrow$ | **Bicondicional** | "... si y solo si ..." | Tienen valores de verdad distintos |

**Tabla de verdad — los cinco conectores:**

| $p$ | $q$ | $\neg p$ | $p \land q$ | $p \lor q$ | $p \to q$ | $p \leftrightarrow q$ |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| V | V | F | **V** | V | V | **V** |
| V | F | F | **F** | V | **F** | **F** |
| F | V | V | **F** | V | V | **F** |
| F | F | V | **F** | **F** | V | **V** |

> **💡 Sobre el condicional:** Solo es falso cuando la premisa se cumple pero la conclusión no. Es como una promesa: solo se rompe si se hace y después no se cumple.

> **💡 En código:** `¬p` → `!p` · `p ∧ q` → `p && q` · `p ∨ q` → `p || q`

---

## 1.4 — Tablas de Verdad

Método para evaluar una proposición compuesta en **todas las combinaciones posibles** de sus variables.

**Procedimiento:**

```
Paso 1 → Identificar todas las variables  (p, q, r...)
Paso 2 → Calcular filas: 2ⁿ  (n = número de variables)
Paso 3 → Llenar columnas con alternancia binaria
Paso 4 → Evaluar subexpresiones de adentro hacia afuera
Paso 5 → Evaluar la expresión completa
Paso 6 → Clasificar el resultado
```

**Clasificación:**

| Tipo | Definición | Columna final |
|:---|:---|:---:|
| 🟢 **Tautología** | Verdadera para cualquier combinación | Solo `V` |
| 🔴 **Contradicción** | Falsa para cualquier combinación | Solo `F` |
| 🟡 **Contingencia** | Depende de los valores asignados | `V` y `F` mezcladas |

---

## 1.5 — Leyes Proposicionales

Equivalencias que permiten transformar expresiones sin cambiar su valor de verdad.

| Ley | Equivalencia |
|:---|:---|
| **Doble Negación** | $\neg(\neg p) \equiv p$ |
| **De Morgan — conjunción** | $\neg(p \land q) \equiv \neg p \lor \neg q$ |
| **De Morgan — disyunción** | $\neg(p \lor q) \equiv \neg p \land \neg q$ |
| **Conmutativa** | $p \land q \equiv q \land p \;\;;\;\; p \lor q \equiv q \lor p$ |
| **Asociativa** | $(p \land q) \land r \equiv p \land (q \land r)$ |
| **Distributiva** | $p \land (q \lor r) \equiv (p \land q) \lor (p \land r)$ |
| **Idempotencia** | $p \land p \equiv p \;\;;\;\; p \lor p \equiv p$ |
| **Absorción** | $p \land (p \lor q) \equiv p$ |
| **Implicación Material** | $p \to q \equiv \neg p \lor q$ |
| **Exportación** | $(p \land q) \to r \equiv p \to (q \to r)$ |
| **Identidad** | $p \land V \equiv p \;\;;\;\; p \lor F \equiv p$ |
| **Complemento** | $p \land \neg p \equiv F \;\;;\;\; p \lor \neg p \equiv V$ |

> **💡 En código:** `!(A && B)` es idéntico a `!A || !B` — eso es De Morgan aplicado directamente.

---

## 1.6 — Reglas de Inferencia

Esquemas que garantizan conclusiones válidas a partir de premisas verdaderas. Si las premisas se cumplen, la conclusión es inevitable.

---

**Modus Ponendo Ponens `(MPP)`**

$$\frac{p \to q \;\;,\;\; p}{\therefore\; q}$$

| | |
|:---|:---|
| $p \to q$ | "Si el código compila, el programa ejecuta." |
| $p$ | "El código compila." |
| $\therefore\; q$ | **∴ El programa ejecuta.** |

---

**Modus Tollendo Tollens `(MTT)`**

$$\frac{p \to q \;\;,\;\; \neg q}{\therefore\; \neg p}$$

| | |
|:---|:---|
| $p \to q$ | "Si hay conexión, la página carga." |
| $\neg q$ | "La página no carga." |
| $\therefore\; \neg p$ | **∴ No hay conexión.** |

---

**Silogismo Hipotético `(SH)`**

$$\frac{p \to q \;\;,\;\; q \to r}{\therefore\; p \to r}$$

| | |
|:---|:---|
| $p \to q$ | "Si el usuario es admin, puede modificar archivos." |
| $q \to r$ | "Si puede modificar, puede borrarlos." |
| $\therefore\; p \to r$ | **∴ Si es admin, puede borrar archivos.** |

---

**Silogismo Disyuntivo `(SD)`**

$$\frac{p \lor q \;\;,\;\; \neg p}{\therefore\; q}$$

---

**Adición y Simplificación:**

$$\text{Adición: } \frac{p}{\therefore\; p \lor q} \qquad\qquad \text{Simplificación: } \frac{p \land q}{\therefore\; p}$$

---
---

# 📊 Sección 02 — Ejercicios Resueltos

> 📂 Evidencias en la carpeta [`./Evidencias/`](./Evidencias/)

---

## Ejercicio 1 — Traducción de lenguaje natural a simbólico

**Objetivo:** Convertir enunciados cotidianos a fórmulas lógicas formales.

<details>
<summary><b>📋 Ver procedimiento completo</b></summary>

<br/>

**Enunciado:**
> _"Si el sistema detecta un error y el usuario está conectado, entonces se envía una alerta. Si el sistema no detecta ningún error, no se envía alerta."_

**Paso 1 — Proposiciones simples:**

| Variable | Proposición |
|:---:|:---|
| $p$ | El sistema detecta un error. |
| $q$ | El usuario está conectado. |
| $r$ | Se envía una alerta. |

**Paso 2 — Conectores implícitos:**

| Fragmento | Conector | Símbolo |
|:---|:---:|:---:|
| "...y el usuario está conectado..." | Conjunción | $\land$ |
| "Si... entonces..." | Condicional | $\to$ |
| "Si no... no..." | Condicional con negación | $\neg\;\to\;\neg$ |

**Paso 3 — Traducción simbólica:**

Primera oración: $(p \land q) \to r$

Segunda oración: $\neg p \to \neg r$

Expresión completa: $[(p \land q) \to r] \land [\neg p \to \neg r]$

</details>

> 📄 [Ver resolución en PDF](./Evidencias/Ejercicio_01.pdf)

---

## Ejercicio 2 — Construcción de tabla de verdad

**Objetivo:** Construir la tabla de verdad completa con todas las columnas intermedias.

<details>
<summary><b>📋 Ver procedimiento completo</b></summary>

<br/>

**Expresión a analizar:** $(p \to q) \land (\neg p \lor r)$

**Paso 1:** Variables: $p$, $q$, $r$ → $2^3 = 8$ filas

**Paso 2 — Tabla completa:**

| $p$ | $q$ | $r$ | $\neg p$ | $p \to q$ | $\neg p \lor r$ | **Resultado** |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| V | V | V | F | V | V | **V** |
| V | V | F | F | V | F | **F** |
| V | F | V | F | F | V | **F** |
| V | F | F | F | F | F | **F** |
| F | V | V | V | V | V | **V** |
| F | V | F | V | V | V | **V** |
| F | F | V | V | V | V | **V** |
| F | F | F | V | V | V | **V** |

**Paso 3 — Clasificación:** La columna final contiene V y F → 🟡 **Contingencia**

</details>

> 📄 [Ver resolución en PDF](./Evidencias/Ejercicio_02.pdf)

---

## Ejercicio 3 — Clasificación: tautología, contradicción o contingencia

**Objetivo:** Determinar el tipo lógico de tres expresiones distintas.

<details>
<summary><b>📋 Ver procedimiento completo</b></summary>

<br/>

**Expresión A — $p \lor \neg p$**

| $p$ | $\neg p$ | $p \lor \neg p$ |
|:---:|:---:|:---:|
| V | F | **V** |
| F | V | **V** |

→ 🟢 **Tautología** _(Ley del Complemento)_

---

**Expresión B — $p \land \neg p$**

| $p$ | $\neg p$ | $p \land \neg p$ |
|:---:|:---:|:---:|
| V | F | **F** |
| F | V | **F** |

→ 🔴 **Contradicción**

---

**Expresión C — $(p \to q) \leftrightarrow (\neg p \lor q)$**

| $p$ | $q$ | $p \to q$ | $\neg p \lor q$ | **Resultado** |
|:---:|:---:|:---:|:---:|:---:|
| V | V | V | V | **V** |
| V | F | F | F | **V** |
| F | V | V | V | **V** |
| F | F | V | V | **V** |

→ 🟢 **Tautología** _(confirma la Ley de Implicación Material)_

</details>

> 📄 [Ver resolución en PDF](./Evidencias/Ejercicio_03.pdf)

---

## Ejercicio 4 — Aplicación de leyes proposicionales

**Objetivo:** Simplificar una expresión paso a paso citando cada ley aplicada.

<details>
<summary><b>📋 Ver procedimiento completo</b></summary>

<br/>

**Expresión a simplificar:** $\neg(\neg p \land q) \lor (p \land \neg q)$

| Paso | Expresión | Ley aplicada |
|:---:|:---|:---|
| 0 | $\neg(\neg p \land q) \lor (p \land \neg q)$ | Expresión original |
| 1 | $(\neg\neg p \lor \neg q) \lor (p \land \neg q)$ | De Morgan |
| 2 | $(p \lor \neg q) \lor (p \land \neg q)$ | Doble Negación |
| 3 | $p \lor [\neg q \lor (p \land \neg q)]$ | Asociativa |
| 4 | $p \lor \neg q$ | Absorción |

**Resultado:** $\neg(\neg p \land q) \lor (p \land \neg q) \;\equiv\; p \lor \neg q$

</details>

> 📄 [Ver resolución en PDF](./Evidencias/Ejercicio_04.pdf)

---

## Ejercicio 5 — Validación de un argumento lógico

**Objetivo:** Determinar si un argumento es válido usando reglas de inferencia.

<details>
<summary><b>📋 Ver procedimiento completo</b></summary>

<br/>

**Argumento:**
> _"Si hay error en el servidor, el sistema falla. Si el sistema falla, se pierde la sesión. Hay error en el servidor. Por lo tanto, se pierde la sesión."_

**Proposiciones:**

| Variable | Proposición |
|:---:|:---|
| $p$ | Hay error en el servidor. |
| $q$ | El sistema falla. |
| $r$ | Se pierde la sesión del usuario. |

**Premisas:** $P_1: p \to q \quad P_2: q \to r \quad P_3: p$ · **Conclusión:** $\therefore\; r$

**Derivación:**

| Paso | Expresión | Justificación |
|:---:|:---|:---|
| 1 | $p \to q$ | Premisa $P_1$ |
| 2 | $q \to r$ | Premisa $P_2$ |
| 3 | $p \to r$ | Silogismo Hipotético (pasos 1 y 2) |
| 4 | $p$ | Premisa $P_3$ |
| 5 | $\therefore\; r$ | Modus Ponens (pasos 3 y 4) |

**Argumento: VÁLIDO ✅**

</details>

> 📄 [Ver resolución en PDF](./Evidencias/Ejercicio_05.pdf)

---
---

# 🧠 Sección 03 — Ejercicio Aplicado

## Caso: Sistema de Control de Acceso — Laboratorio de Cómputo

**Situación:**

> _"Un estudiante puede usar los equipos únicamente si presenta su carnet vigente y tiene horario asignado. Si accede sin autorización, el sistema genera un reporte y notifica al docente responsable."_

---

### Paso 1 — Definición de proposiciones

| Variable | Proposición |
|:---:|:---|
| $p$ | El estudiante presenta carnet universitario vigente. |
| $q$ | El estudiante tiene horario asignado. |
| $r$ | El estudiante puede usar los equipos. |
| $s$ | El sistema genera un reporte automático. |
| $t$ | El docente responsable es notificado. |

---

### Paso 2 — Modelo simbólico

Regla de acceso: $(p \land q) \to r$

Regla de infracción: $\neg(p \land q) \land r \;\to\; (s \land t)$

---

### Paso 3 — Tabla de verdad: regla de acceso

| $p$ | $q$ | $p \land q$ | Acceso | $(p \land q) \to r$ |
|:---:|:---:|:---:|:---:|:---:|
| V | V | V | ✅ Permitido | V |
| V | F | F | ⛔ Denegado | V |
| F | V | F | ⛔ Denegado | V |
| F | F | F | ⛔ Denegado | V |

Columna final siempre `V` → la regla es una **tautología**. El modelo es correcto.

---

### Paso 4 — Análisis de infracción con De Morgan

Cuando $r = V$ pero $p \land q = F$:

$$\neg(p \land q) \equiv \neg p \lor \neg q$$

| Escenario | Condición | Respuesta |
|:---|:---|:---:|
| Sin carnet, con horario | $\neg p \land q \land r$ | $s \land t$ ✓ |
| Con carnet, sin horario | $p \land \neg q \land r$ | $s \land t$ ✓ |
| Sin carnet ni horario | $\neg p \land \neg q \land r$ | $s \land t$ ✓ |

---

### Paso 5 — Derivación por inferencia

**Premisas:** $P_1: (p \land q) \to r \quad P_2: \neg p \quad P_3: r$

| Paso | Expresión | Justificación |
|:---:|:---|:---|
| 1 | $\neg p$ | Premisa $P_2$ |
| 2 | $\neg p \lor \neg q$ | Adición |
| 3 | $\neg(p \land q)$ | De Morgan |
| 4 | $\neg(p \land q) \land r$ | Conjunción con $P_3$ |
| 5 | $\therefore\; s \land t$ | Modus Ponens con Regla de infracción |

---

### Conclusión

El sistema es **consistente**: no existe combinación de entradas que permita acceso no autorizado sin activar la respuesta de seguridad. Este tipo de verificación formal es la base del diseño de políticas de control de acceso en ciberseguridad.

---
---

# 🔍 Sección 04 — Reflexión Personal

## ❓ ¿Qué fue lo más difícil de entender?

<!--
▼ ESCRIBE AQUÍ TU REFLEXIÓN ▼
¿Qué concepto tardaste más en comprender? ¿Por qué te costó?
¿Qué estrategia usaste para superarlo?
-->

> _[ Escribe tu reflexión aquí ]_

---

## ✅ ¿Qué tema comprendí mejor?

<!--
▼ ESCRIBE AQUÍ TU REFLEXIÓN ▼
¿Qué tema te resultó más intuitivo o satisfactorio?
¿Por qué crees que lo entendiste con facilidad?
-->

> _[ Escribe tu reflexión aquí ]_

---

## 🚀 ¿Cómo puedo aplicar la lógica en mi carrera?

<!--
▼ ESCRIBE AQUÍ TU REFLEXIÓN ▼
Menciona al menos dos áreas concretas de la ingeniería.
Sé específico: no solo "en programación", sino en qué parte exacta.
-->

> _[ Escribe tu reflexión aquí ]_

---
---

# 📁 Sección 05 — Actividades APE

> 📂 Archivos en `Evidencias/APES/`

| # | Actividad | Descripción | Archivo |
|:---:|:---|:---|:---:|
| `APE 01` | **Lógica** | Identificación y clasificación de proposiciones | [📄 Ver](./Evidencias/APES/APE_1_FASE_1.pdf) |
| `APE 02` | **Tablas de Verdad** | Construcción con conectores compuestos | [📄 Ver](./Evidencias/APES/APE_1_FASE_2.pdf) |
| `APE 03` | **Leyes Lógicas** | Aplicación y demostración de equivalencias | [📄 Ver](./Evidencias/APES/APE_1_FASE_3.pdf) |
| `APE 04` | **Compuertas Lógicas** | Relación entre lógica y hardware digital | [📄 Ver](./Evidencias/APES/APE_1_FASE_4.pdf) |
| `APE 05` | **Reglas de Inferencia** | Validación de argumentos formales | [📄 Ver](./Evidencias/APES/APE_1_FASE_5.pdf) |
| `APE 06` | **Proyecto Integrador** | Aplicación integral de todos los contenidos | [📄 Ver](./Evidencias/APES/APE_1_FASE_6.pdf) |

---

<div align="center">

![](https://img.shields.io/badge/─────────────────────────────────────────-003366?style=flat-square&labelColor=003366&color=003366)

<sub>[ TU NOMBRE ] · Matemáticas Discretas · Universidad Nacional de Loja · 2026</sub>

</div>

