#include <stdio.h>

void calcularPromedioUnidad(int n);
float calcularACD(int a);
float calcularAPE(int a);
float calcularAA(int a);
float calcularES();
void ciclo(float NF);

int main(){
    float pACD, pAPE, pAA, pES, ACD, APE, AA, ES, notaUnidad, sumaUnidad = 0, NF;
    const int NUMERODEUNIDADES = 3;
    int c;

    for(int i = 1; i <= NUMERODEUNIDADES; i++){

        calcularPromedioUnidad(i);

        c = -1;
        while (c <= 0){
            printf("Cantidad de actividades realizadas en los ACD: \n");
            scanf("%i", &c);
            if (c <= 0){
                printf("Cantidad invalida. Debe ser un numero entero.\n");
            }
        }
        pACD = calcularACD(c);

        c = -1;
        while (c <= 0){
            printf("Cantidad de actividades realizadas en los APE: \n");
            scanf("%i", &c);
            if (c <= 0){
                printf("Cantidad invalida. Debe ser un numero entero.\n");
            }
        }
        pAPE = calcularAPE(c);

        c = -1;
        while (c <= 0){
            printf("Cantidad de actividades realizadas en los AA: \n");
            scanf("%i", &c);
            if (c <= 0){
                printf("Cantidad invalida. Debe ser un numero entero.\n");
            }
        }
        pAA = calcularAA(c);

        pES = calcularES();

        notaUnidad = pACD + pAPE + pAA + pES;
        printf("=========================================================\n");
        printf("Nota total de la unidad %i: %.2f\n", i, notaUnidad);
        printf("=========================================================\n");
        sumaUnidad+=notaUnidad;
    }

    NF = sumaUnidad/3;
    printf("=========================================================\n");
    printf("La nota final del ciclo es de:%.2f\n", NF);
    ciclo(NF);
}

void calcularPromedioUnidad(int n){

    printf("La unidad %i \n",n);
    
}

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

float calcularACD(int a){
    int acomulador = 1;
    float notas, nACD, empoderado, r = 0;
    while (acomulador <= a){
        notas = -1;
        while (notas < 0 || notas > 10){
            printf("Ingresar la nota de la actividad %i: \n", acomulador);
            scanf("%f", &notas);
            if (notas < 0 || notas > 10){
                printf("Nota invalida. Debe estar entre 0 y 10.\n");
            }
        }
        r = r + notas;
        acomulador++;
    }
    nACD = (r / a);
    empoderado = nACD * 0.2;
    printf("=========================================================\n");
    printf("El promedio final del ACD es de: %.2f \n", nACD);
    printf("El empoderado total es: %.2f \n", empoderado);
    printf("=========================================================\n");

    return empoderado;
}

float calcularAPE(int a){
    int acomulador = 1;
    float notas, nAPE, r = 0, empoderado;
    while (acomulador <= a){
        notas = -1;
        while (notas < 0 || notas > 10){
            printf("Ingresar la nota de la actividad %i:\n", acomulador);
            scanf("%f", &notas);
            if (notas < 0 || notas > 10){
                printf("Nota invalida. Debe estar entre 0 y 10.\n");
            }
        }
        r = r + notas;
        acomulador++;
    }
    nAPE = (r / a);
    empoderado = nAPE * 0.25;
    printf("=========================================================\n");
    printf("El promedio final del APE es de: %.2f \n", nAPE);
    printf("El empoderado total es: %.2f \n", empoderado);
    printf("=========================================================\n");

    return empoderado;
}

float calcularAA(int a){
    int acomulador = 1;
    float notas, nAA, r = 0, empoderado;
    while (acomulador <= a){
        notas = -1;
        while (notas < 0 || notas > 10){
            printf("Ingresar la nota de la actividad %i:\n", acomulador);
            scanf("%f", &notas);
            if (notas < 0 || notas > 10){
                printf("Nota invalida. Debe estar entre 0 y 10.\n");
            }
        }
        r = r + notas;
        acomulador++;
    }
    nAA = (r / a);
    empoderado = nAA * 0.2;
    printf("=========================================================\n");
    printf("El promedio final del AA es de: %.2f \n", nAA);
    printf("El empoderado total es: %.2f \n", empoderado);
    printf("=========================================================\n");

    return empoderado;
}

float calcularES(){
    float portafolio, examen, valor, valorp, nES, empoderado; 

    valor = -1;
    while (valor < 0 || valor > 10){
        printf("Ingrese el empoderado de la evaluacion: \n");
        scanf("%f", &valor);
        if (valor < 0 || valor > 10){
            printf("Nota invalida. Debe estar entre 0 y 10.\n");
        }
    }
    valor /= 10;
    valorp = 1 - valor; 

    examen = -1;
    while (examen < 0 || examen > 10){
        printf("Ingresar la nota de la evaluacion:\n");
        scanf("%f", &examen);
        if (examen < 0 || examen > 10){
            printf("Nota invalida. Debe estar entre 0 y 10.\n");
        }
    }
    examen = examen * valor;

    portafolio = -1;
    while (portafolio < 0 || portafolio > 10){
        printf("Ingresar la nota del portafolio:\n");
        scanf("%f", &portafolio);
        if (portafolio < 0 || portafolio > 10){
            printf("Nota invalida. Debe estar entre 0 y 10.\n");
        }
    }
    portafolio = portafolio * valorp;

    printf("La nota del portafalio es de: %.2f\n", portafolio);
    printf("La nota del examen es de: %.2f\n", examen);

    printf("=========================================================\n");

    nES = portafolio + examen;
    printf("El promedio final del nES es de: %.2f \n", nES);

    empoderado = nES * 0.35;
    printf("El empoderado total es: %.2f \n", empoderado);
    printf("=========================================================\n");

    return empoderado;
}
