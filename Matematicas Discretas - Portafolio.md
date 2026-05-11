<!DOCTYPE html>
<html lang="es">
<head>
<meta charset="UTF-8" />
<meta name="viewport" content="width=device-width, initial-scale=1.0"/>

<title>Portafolio — Lógica Proposicional</title>

<!-- ===== Fonts ===== -->
<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>

<link href="https://fonts.googleapis.com/css2?family=Inter:wght@300;400;500;600;700;800&display=swap" rel="stylesheet">

<!-- ===== Icons ===== -->
<link
rel="stylesheet"
href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.5.2/css/all.min.css"
/>

<!-- ===== MathJax ===== -->
<script>
window.MathJax = {
  tex: {
    inlineMath: [['$', '$'], ['\\(', '\\)']]
  }
};
</script>

<script defer src="https://cdn.jsdelivr.net/npm/mathjax@3/es5/tex-mml-chtml.js"></script>

<style>

/* =========================================================
   ROOT
========================================================= */

:root{
  --bg: #0b1120;
  --sidebar: #111827;
  --card: #172033;
  --card-2: #1d2940;
  --text: #e5e7eb;
  --muted: #94a3b8;
  --primary: #5b8dd9;
  --primary-dark: #003366;
  --border: rgba(255,255,255,0.08);
  --shadow: 0 10px 30px rgba(0,0,0,0.35);
  --radius: 18px;
  --transition: 0.25s ease;
}

/* =========================================================
   RESET
========================================================= */

*{
  margin:0;
  padding:0;
  box-sizing:border-box;
}

html{
  scroll-behavior:smooth;
}

body{
  font-family:'Inter', sans-serif;
  background:linear-gradient(
    135deg,
    #0b1120 0%,
    #101827 40%,
    #0f172a 100%
  );

  color:var(--text);
  min-height:100vh;
}

/* =========================================================
   LAYOUT
========================================================= */

.container{
  display:flex;
  min-height:100vh;
}

/* =========================================================
   SIDEBAR
========================================================= */

.sidebar{
  width:320px;
  background:rgba(17,24,39,0.96);
  border-right:1px solid var(--border);

  position:fixed;
  top:0;
  left:0;
  bottom:0;

  overflow-y:auto;
  padding:28px;

  backdrop-filter: blur(18px);
  z-index:999;
}

/* Logo */

.logo{
  margin-bottom:30px;
}

.logo h1{
  font-size:1.3rem;
  line-height:1.4;
  font-weight:800;
}

.logo span{
  color:var(--primary);
}

.logo p{
  color:var(--muted);
  margin-top:8px;
  font-size:0.9rem;
}

/* Navigation */

.nav-section{
  margin-bottom:18px;
}

.nav-btn{
  width:100%;
  border:none;
  outline:none;
  cursor:pointer;

  background:var(--card);

  color:white;
  padding:15px 18px;

  border-radius:14px;

  display:flex;
  justify-content:space-between;
  align-items:center;

  font-size:0.95rem;
  font-weight:600;

  transition:var(--transition);

  margin-bottom:8px;
}

.nav-btn:hover{
  background:var(--primary-dark);
  transform:translateX(4px);
}

.nav-btn i{
  transition:var(--transition);
}

.nav-btn.active i{
  transform:rotate(180deg);
}

.submenu{
  max-height:0;
  overflow:hidden;
  transition:max-height 0.35s ease;
}

.submenu a{
  display:block;

  padding:12px 18px;
  margin:5px 0;

  text-decoration:none;
  color:var(--muted);

  border-radius:12px;

  transition:var(--transition);
  font-size:0.92rem;
}

.submenu a:hover{
  background:rgba(255,255,255,0.05);
  color:white;
  transform:translateX(6px);
}

/* =========================================================
   MAIN
========================================================= */

.main{
  margin-left:320px;
  width:calc(100% - 320px);
  padding:45px;
}

/* =========================================================
   HERO
========================================================= */

.hero{
  background:linear-gradient(
    135deg,
    rgba(91,141,217,0.15),
    rgba(0,51,102,0.25)
  );

  border:1px solid var(--border);

  border-radius:28px;
  padding:45px;

  box-shadow:var(--shadow);

  position:relative;
  overflow:hidden;

  margin-bottom:40px;
}

.hero::before{
  content:"";
  position:absolute;
  width:400px;
  height:400px;
  border-radius:50%;
  background:rgba(91,141,217,0.08);

  top:-160px;
  right:-120px;
}

.hero h1{
  font-size:3rem;
  line-height:1.2;
  margin-bottom:15px;
}

.hero p{
  color:var(--muted);
  max-width:800px;
  line-height:1.8;
}

.badges{
  margin-top:25px;
  display:flex;
  flex-wrap:wrap;
  gap:12px;
}

.badge{
  background:rgba(255,255,255,0.08);
  border:1px solid rgba(255,255,255,0.1);

  padding:12px 18px;
  border-radius:999px;

  font-size:0.85rem;
  font-weight:600;
}

/* =========================================================
   SECTION
========================================================= */

.section{
  margin-bottom:45px;
}

.section-title{
  font-size:2rem;
  margin-bottom:25px;

  display:flex;
  align-items:center;
  gap:12px;
}

.section-title i{
  color:var(--primary);
}

/* =========================================================
   CARD
========================================================= */

.card{
  background:rgba(23,32,51,0.92);

  border:1px solid var(--border);

  border-radius:22px;
  padding:28px;

  margin-bottom:25px;

  box-shadow:var(--shadow);
}

.card h3{
  margin-bottom:16px;
  font-size:1.25rem;
}

.card p{
  line-height:1.8;
  color:#d8dee9;
}

/* =========================================================
   TABLE
========================================================= */

.table-wrapper{
  overflow-x:auto;
  margin-top:20px;
}

table{
  width:100%;
  border-collapse:collapse;
}

th{
  background:rgba(91,141,217,0.15);
  color:white;
}

th, td{
  padding:14px;
  border:1px solid var(--border);
  text-align:center;
}

tr:hover{
  background:rgba(255,255,255,0.03);
}

/* =========================================================
   DETAILS
========================================================= */

details{
  margin-top:20px;
  border-radius:18px;
  overflow:hidden;
  border:1px solid var(--border);
}

summary{
  cursor:pointer;
  background:var(--card-2);

  padding:18px;
  font-weight:600;
  transition:var(--transition);
}

summary:hover{
  background:#24314a;
}

.details-content{
  padding:22px;
  background:rgba(255,255,255,0.02);
}

/* =========================================================
   CODE BLOCK
========================================================= */

.code{
  background:#0f172a;

  border:1px solid rgba(255,255,255,0.06);

  padding:18px;
  border-radius:16px;

  overflow-x:auto;

  margin-top:18px;

  font-family:monospace;
  color:#93c5fd;
}

/* =========================================================
   GRID
========================================================= */

.grid{
  display:grid;
  grid-template-columns:repeat(auto-fit,minmax(280px,1fr));
  gap:20px;
}

/* =========================================================
   REFLECTION
========================================================= */

.reflection{
  border-left:4px solid var(--primary);
  padding-left:20px;
  margin-top:18px;
  color:#dce7f5;
}

/* =========================================================
   FOOTER
========================================================= */

.footer{
  margin-top:60px;
  text-align:center;
  color:var(--muted);
  padding:30px;
}

/* =========================================================
   SCROLLBAR
========================================================= */

::-webkit-scrollbar{
  width:10px;
}

::-webkit-scrollbar-thumb{
  background:rgba(255,255,255,0.15);
  border-radius:999px;
}

/* =========================================================
   RESPONSIVE
========================================================= */

@media(max-width:1100px){

  .sidebar{
    position:relative;
    width:100%;
    height:auto;
  }

  .main{
    width:100%;
    margin-left:0;
  }

  .container{
    flex-direction:column;
  }

}

@media(max-width:700px){

  .hero h1{
    font-size:2rem;
  }

  .main{
    padding:20px;
  }

  .hero{
    padding:28px;
  }

}

</style>
</head>

<body>

<div class="container">

<!-- =====================================================
     SIDEBAR
===================================================== -->

<aside class="sidebar">

  <div class="logo">
    <h1>📚 <span>Portafolio</span><br>Lógica Proposicional</h1>

    <p>
      Matemáticas Discretas · Universidad Nacional de Loja
    </p>
  </div>

  <!-- ===== SECTION 1 ===== -->

  <div class="nav-section">

    <button class="nav-btn active">
      📖 Resumen Teórico
      <i class="fa-solid fa-chevron-down"></i>
    </button>

    <div class="submenu" style="max-height:500px;">

      <a href="#proposicion">¿Qué es una proposición?</a>

      <a href="#tipos">Tipos de proposiciones</a>

      <a href="#conectores">Conectores lógicos</a>

      <a href="#tablas">Tablas de verdad</a>

      <a href="#leyes">Leyes proposicionales</a>

      <a href="#inferencia">Reglas de inferencia</a>

    </div>

  </div>

  <!-- ===== SECTION 2 ===== -->

  <div class="nav-section">

    <button class="nav-btn">
      📊 Ejercicios
      <i class="fa-solid fa-chevron-down"></i>
    </button>

    <div class="submenu">

      <a href="#ej1">Ejercicio 1</a>

      <a href="#ej2">Ejercicio 2</a>

      <a href="#ej3">Ejercicio 3</a>

      <a href="#ej4">Ejercicio 4</a>

      <a href="#ej5">Ejercicio 5</a>

    </div>

  </div>

  <!-- ===== SECTION 3 ===== -->

  <div class="nav-section">

    <button class="nav-btn">
      🧠 Caso Aplicado
      <i class="fa-solid fa-chevron-down"></i>
    </button>

    <div class="submenu">

      <a href="#caso">Sistema de Acceso</a>

    </div>

  </div>

  <!-- ===== SECTION 4 ===== -->

  <div class="nav-section">

    <button class="nav-btn">
      🔍 Reflexión
      <i class="fa-solid fa-chevron-down"></i>
    </button>

    <div class="submenu">

      <a href="#reflexion1">Dificultad</a>

      <a href="#reflexion2">Tema dominado</a>

      <a href="#reflexion3">Aplicación</a>

    </div>

  </div>

</aside>

<!-- =====================================================
     MAIN
===================================================== -->

<main class="main">

<!-- =====================================================
     HERO
===================================================== -->

<section class="hero">

  <h1>
    Portafolio — Unidad 1
  </h1>

  <p>
    Este portafolio recopila los contenidos fundamentales
    trabajados en la unidad de lógica proposicional,
    incluyendo teoría, ejercicios desarrollados,
    análisis de casos reales y reflexión personal.
  </p>

  <div class="badges">

    <div class="badge">
      📘 Matemáticas Discretas
    </div>

    <div class="badge">
      🧠 Lógica Proposicional
    </div>

    <div class="badge">
      🎓 Universidad Nacional de Loja
    </div>

  </div>

</section>

<!-- =====================================================
     PROPOSICION
===================================================== -->

<section class="section" id="proposicion">

  <h2 class="section-title">
    <i class="fa-solid fa-book"></i>
    ¿Qué es una Proposición?
  </h2>

  <div class="card">

    <p>
      Una proposición es un enunciado declarativo
      que puede ser verdadero o falso,
      pero nunca ambos al mismo tiempo.
    </p>

    <div class="table-wrapper">

      <table>

        <thead>
          <tr>
            <th>Enunciado</th>
            <th>¿Es proposición?</th>
          </tr>
        </thead>

        <tbody>

          <tr>
            <td>2 + 2 = 4</td>
            <td>✅ Sí</td>
          </tr>

          <tr>
            <td>¿Cómo estás?</td>
            <td>❌ No</td>
          </tr>

          <tr>
            <td>Guarda el archivo</td>
            <td>❌ No</td>
          </tr>

        </tbody>

      </table>

    </div>

  </div>

</section>

<!-- =====================================================
     CONECTORES
===================================================== -->

<section class="section" id="conectores">

  <h2 class="section-title">
    <i class="fa-solid fa-link"></i>
    Conectores Lógicos
  </h2>

  <div class="grid">

    <div class="card">
      <h3>Conjunción</h3>
      <p>
        $p \land q$
      </p>
    </div>

    <div class="card">
      <h3>Disyunción</h3>
      <p>
        $p \lor q$
      </p>
    </div>

    <div class="card">
      <h3>Negación</h3>
      <p>
        $\neg p$
      </p>
    </div>

    <div class="card">
      <h3>Condicional</h3>
      <p>
        $p \to q$
      </p>
    </div>

  </div>

</section>

<!-- =====================================================
     TABLAS
===================================================== -->

<section class="section" id="tablas">

  <h2 class="section-title">
    <i class="fa-solid fa-table"></i>
    Tabla de Verdad
  </h2>

  <div class="card">

    <h3>
      Ejemplo — $p \to q$
    </h3>

    <div class="table-wrapper">

      <table>

        <thead>

          <tr>
            <th>p</th>
            <th>q</th>
            <th>$p \to q$</th>
          </tr>

        </thead>

        <tbody>

          <tr>
            <td>V</td>
            <td>V</td>
            <td>V</td>
          </tr>

          <tr>
            <td>V</td>
            <td>F</td>
            <td>F</td>
          </tr>

          <tr>
            <td>F</td>
            <td>V</td>
            <td>V</td>
          </tr>

          <tr>
            <td>F</td>
            <td>F</td>
            <td>V</td>
          </tr>

        </tbody>

      </table>

    </div>

  </div>

</section>

<!-- =====================================================
     EJERCICIO
===================================================== -->

<section class="section" id="ej1">

  <h2 class="section-title">
    <i class="fa-solid fa-pen"></i>
    Ejercicio Resuelto
  </h2>

  <div class="card">

    <h3>
      Traducción de lenguaje natural
    </h3>

    <p>
      “Si el sistema detecta un error y el usuario
      está conectado, entonces se envía una alerta.”
    </p>

    <details>

      <summary>
        📋 Ver procedimiento
      </summary>

      <div class="details-content">

        <div class="code">

p = El sistema detecta un error  
q = El usuario está conectado  
r = Se envía una alerta

(p ∧ q) → r

        </div>

      </div>

    </details>

  </div>

</section>

<!-- =====================================================
     LEYES
===================================================== -->

<section class="section" id="leyes">

  <h2 class="section-title">
    <i class="fa-solid fa-scale-balanced"></i>
    Leyes Proposicionales
  </h2>

  <div class="grid">

    <div class="card">

      <h3>De Morgan</h3>

      <p>
        $\neg(p \land q) \equiv \neg p \lor \neg q$
      </p>

    </div>

    <div class="card">

      <h3>Doble Negación</h3>

      <p>
        $\neg(\neg p) \equiv p$
      </p>

    </div>

    <div class="card">

      <h3>Implicación Material</h3>

      <p>
        $p \to q \equiv \neg p \lor q$
      </p>

    </div>

  </div>

</section>

<!-- =====================================================
     INFERENCIA
===================================================== -->

<section class="section" id="inferencia">

  <h2 class="section-title">
    <i class="fa-solid fa-brain"></i>
    Reglas de Inferencia
  </h2>

  <div class="card">

    <h3>
      Modus Ponens
    </h3>

    <div class="code">

p → q  
p  
∴ q

    </div>

  </div>

</section>

<!-- =====================================================
     CASO
===================================================== -->

<section class="section" id="caso">

  <h2 class="section-title">
    <i class="fa-solid fa-shield-halved"></i>
    Caso Aplicado
  </h2>

  <div class="card">

    <h3>
      Sistema de Control de Acceso
    </h3>

    <p>
      Un estudiante puede usar los equipos
      únicamente si presenta su carnet vigente
      y tiene horario asignado.
    </p>

    <div class="code">

(p ∧ q) → r

    </div>

  </div>

</section>

<!-- =====================================================
     REFLEXIONES
===================================================== -->

<section class="section" id="reflexion1">

  <h2 class="section-title">
    <i class="fa-solid fa-lightbulb"></i>
    Reflexión Personal
  </h2>

  <div class="card">

    <h3>
      ¿Qué fue lo más difícil?
    </h3>

    <div class="reflection">

      Comprender el funcionamiento de las
      tablas de verdad complejas y la forma
      correcta de evaluar expresiones lógicas
      con múltiples conectores.

    </div>

  </div>

</section>

<!-- =====================================================
     FOOTER
===================================================== -->

<footer class="footer">

  <p>
    Universidad Nacional de Loja · Matemáticas Discretas · 2026
  </p>

</footer>

</main>
</div>

<!-- =====================================================
     SCRIPT
===================================================== -->

<script>

const buttons = document.querySelectorAll(".nav-btn");

buttons.forEach(button => {

  button.addEventListener("click", () => {

    const submenu = button.nextElementSibling;

    button.classList.toggle("active");

    if(submenu.style.maxHeight){

      submenu.style.maxHeight = null;

    } else {

      submenu.style.maxHeight =
        submenu.scrollHeight + "px";

    }

  });

});

</script>

</body>
</html>
