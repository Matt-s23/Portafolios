#include <stdio.h>

// Declaracion de funciones y procedimientos
void calcularPromedioUnidad(int n);   // Procedimiento: muestra en pantalla la unidad actual
float calcularACD(int a);             // Funcion: calcula el ponderado del ACD
float calcularAPE(int a);             // Funcion: calcula el ponderado del APE
float calcularAA(int a);              // Funcion: calcula el ponderado del AA
float calcularES();                   // Funcion: calcula el ponderado del ES
void ciclo(float NF);                 // Procedimiento: determina si el ciclo esta aprobado, en supletorio o reprobado

int main(){
    float pACD, pAPE, pAA, pES, ACD, APE, AA, ES, notaUnidad, sumaUnidad = 0, NF;
    const int NUMERODEUNIDADES = 3;   // El ciclo esta compuesto por 3 unidades
    int c;

    // Ciclo que recorre cada una de las 3 unidades
    for(int i = 1; i <= NUMERODEUNIDADES; i++){

        calcularPromedioUnidad(i);    // Muestra en que unidad se encuentra el programa

        // Validacion: la cantidad de actividades del ACD debe ser un numero entero positivo
        c = -1;
        while (c <= 0){
            printf("Cantidad de actividades realizadas en los ACD: \n");
            scanf("%i", &c);
            if (c <= 0){
                printf("Cantidad invalida. Debe ser un numero entero.\n");
            }
        }
        pACD = calcularACD(c);        // Se calcula el ponderado del ACD

        // Validacion: la cantidad de actividades del APE debe ser un numero entero positivo
        c = -1;
        while (c <= 0){
            printf("Cantidad de actividades realizadas en los APE: \n");
            scanf("%i", &c);
            if (c <= 0){
                printf("Cantidad invalida. Debe ser un numero entero.\n");
            }
        }
        pAPE = calcularAPE(c);        // Se calcula el ponderado del APE

        // Validacion: la cantidad de actividades del AA debe ser un numero entero positivo
        c = -1;
        while (c <= 0){
            printf("Cantidad de actividades realizadas en los AA: \n");
            scanf("%i", &c);
            if (c <= 0){
                printf("Cantidad invalida. Debe ser un numero entero.\n");
            }
        }
        pAA = calcularAA(c);          // Se calcula el ponderado del AA

        pES = calcularES();           // Se calcula el ponderado del ES

        // Se suman los 4 componentes para obtener la nota total de la unidad
        notaUnidad = pACD + pAPE + pAA + pES;
        printf("=========================================================\n");
        printf("Nota total de la unidad %i: %.2f\n", i, notaUnidad);
        printf("=========================================================\n");
        sumaUnidad+=notaUnidad;       // Se acumula la nota de cada unidad
    }

    // Se calcula la nota final del ciclo como el promedio de las 3 unidades
    NF = sumaUnidad/3;
    printf("=========================================================\n");
    printf("La nota final del ciclo es de:%.2f\n", NF);
    ciclo(NF);                        // Se evalua el estado final del ciclo
}

// Procedimiento que muestra en pantalla el numero de unidad actual
void calcularPromedioUnidad(int n){

    printf("La unidad %i \n",n);
    
}

// Procedimiento que evalua la nota final y determina si el ciclo
// esta aprobado, en supletorio o reprobado
void ciclo(float NF){

    if ( NF >= 7){
        printf("El ciclo esta aprobado");
    }else if( NF < 7 || NF >= 4){
        printf("Se queda a supletorios");
        printf("=========================================================\n");
    }else{
        printf("Reprobo el ciclo");
        printf("=========================================================\n");
    }
}

// Funcion que calcula el promedio y el ponderado del Aprendizaje en Contacto con el Docente (ACD)
// Recibe la cantidad de actividades y retorna el valor ponderado sobre 2.0
float calcularACD(int a){
    int acomulador = 1;
    float notas, nACD, empoderado, r = 0;

    // Se pide la nota de cada actividad, validando que este entre 0 y 10
    while (acomulador <= a){
        notas = -1;
        while (notas < 0 || notas > 10){
            printf("Ingresar la nota de la actividad %i: \n", acomulador);
            scanf("%f", &notas);
            if (notas < 0 || notas > 10){
                printf("Nota invalida. Debe estar entre 0 y 10.\n");
            }
        }
        r = r + notas;            // Se acumulan las notas ingresadas
        acomulador++;
    }
    nACD = (r / a);                // Promedio simple de las actividades
    empoderado = nACD * 0.2;       // Ponderado sobre 2.0
    printf("=========================================================\n");
    printf("El promedio final del ACD es de: %.2f \n", nACD);
    printf("El empoderado total es: %.2f \n", empoderado);
    printf("=========================================================\n");

    return empoderado;
}

// Funcion que calcula el promedio y el ponderado del Aprendizaje Practico Experimental (APE)
// Recibe la cantidad de actividades y retorna el valor ponderado sobre 2.5
float calcularAPE(int a){
    int acomulador = 1;
    float notas, nAPE, r = 0, empoderado;

    // Se pide la nota de cada actividad, validando que este entre 0 y 10
    while (acomulador <= a){
        notas = -1;
        while (notas < 0 || notas > 10){
            printf("Ingresar la nota de la actividad %i:\n", acomulador);
            scanf("%f", &notas);
            if (notas < 0 || notas > 10){
                printf("Nota invalida. Debe estar entre 0 y 10.\n");
            }
        }
        r = r + notas;            // Se acumulan las notas ingresadas
        acomulador++;
    }
    nAPE = (r / a);                // Promedio simple de las actividades
    empoderado = nAPE * 0.25;      // Ponderado sobre 2.5
    printf("=========================================================\n");
    printf("El promedio final del APE es de: %.2f \n", nAPE);
    printf("El empoderado total es: %.2f \n", empoderado);
    printf("=========================================================\n");

    return empoderado;
}

// Funcion que calcula el promedio y el ponderado del Aprendizaje Autonomo (AA)
// Recibe la cantidad de actividades y retorna el valor ponderado sobre 2.0
float calcularAA(int a){
    int acomulador = 1;
    float notas, nAA, r = 0, empoderado;

    // Se pide la nota de cada actividad, validando que este entre 0 y 10
    while (acomulador <= a){
        notas = -1;
        while (notas < 0 || notas > 10){
            printf("Ingresar la nota de la actividad %i:\n", acomulador);
            scanf("%f", &notas);
            if (notas < 0 || notas > 10){
                printf("Nota invalida. Debe estar entre 0 y 10.\n");
            }
        }
        r = r + notas;            // Se acumulan las notas ingresadas
        acomulador++;
    }
    nAA = (r / a);                 // Promedio simple de las actividades
    empoderado = nAA * 0.2;        // Ponderado sobre 2.0
    printf("=========================================================\n");
    printf("El promedio final del AA es de: %.2f \n", nAA);
    printf("El empoderado total es: %.2f \n", empoderado);
    printf("=========================================================\n");

    return empoderado;
}

// Funcion que calcula el ponderado de la Evaluacion Sumativa (ES)
// Solicita el empoderado, la nota de la evaluacion y la nota del portafolio
// y retorna el valor ponderado sobre 3.5
float calcularES(){
    float portafolio, examen, valor, valorp, nES, empoderado; 

    // Se pide el empoderado de la evaluacion (0 a 10) y se convierte a un valor entre 0 y 1
    valor = -1;
    while (valor < 0 || valor > 10){
        printf("Ingrese el empoderado de la evaluacion: \n");
        scanf("%f", &valor);
        if (valor < 0 || valor > 10){
            printf("Nota invalida. Debe estar entre 0 y 10.\n");
        }
    }
    valor /= 10;                   // Peso del examen
    valorp = 1 - valor;            // Peso del portafolio (complemento del examen)

    // Se pide la nota de la evaluacion (examen), validando el rango 0 a 10
    examen = -1;
    while (examen < 0 || examen > 10){
        printf("Ingresar la nota de la evaluacion:\n");
        scanf("%f", &examen);
        if (examen < 0 || examen > 10){
            printf("Nota invalida. Debe estar entre 0 y 10.\n");
        }
    }
    examen = examen * valor;       // Se aplica el peso correspondiente al examen

    // Se pide la nota del portafolio, validando el rango 0 a 10
    portafolio = -1;
    while (portafolio < 0 || portafolio > 10){
        printf("Ingresar la nota del portafolio:\n");
        scanf("%f", &portafolio);
        if (portafolio < 0 || portafolio > 10){
            printf("Nota invalida. Debe estar entre 0 y 10.\n");
        }
    }
    portafolio = portafolio * valorp;  // Se aplica el peso correspondiente al portafolio

    printf("La nota del portafalio es de: %.2f\n", portafolio);
    printf("La nota del examen es de: %.2f\n", examen);

    printf("=========================================================\n");

    // Se suman examen y portafolio ya ponderados para obtener el promedio del ES
    nES = portafolio + examen;
    printf("El promedio final del nES es de: %.2f \n", nES);

    empoderado = nES * 0.35;       // Ponderado sobre 3.5
    printf("El empoderado total es: %.2f \n", empoderado);
    printf("=========================================================\n");

    return empoderado;
}
