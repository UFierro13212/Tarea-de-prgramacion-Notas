#include <stdio.h>

int main() {

    int i, j;
    float notas[5][3];

    float suma;
    float mayor;
    float menor;

    int aprobados;
    int reprobados;

    for (i = 0; i < 5; i++) {

        printf("\nEstudiante %d\n", i + 1);

        for (j = 0; j < 3; j++) {

            printf("Materia %d: ", j + 1);
            scanf("%f", &notas[i][j]);

            while (notas[i][j] < 0) {
                printf("Error, ingrese otra: ");
                scanf("%f", &notas[i][j]);
            }

            while (notas[i][j] > 10) {
                printf("Error, ingrese otra: ");
                scanf("%f", &notas[i][j]);
            }
        }
    }

    for (i = 0; i < 5; i++) {

        suma = 0;
        mayor = notas[i][0];
        menor = notas[i][0];

        for (j = 0; j < 3; j++) {
            suma = suma + notas[i][j];

            if (notas[i][j] > mayor) {
                mayor = notas[i][j];
            }

            if (notas[i][j] < menor) {
                menor = notas[i][j];
            }
        }

        printf("\nEstudiante %d\n", i + 1);
        printf("Promedio: %.2f\n", suma / 3);
        printf("Mayor: %.2f\n", mayor);
        printf("Menor: %.2f\n", menor);
    }

    for (j = 0; j < 3; j++) {
        suma = 0;
        mayor = notas[0][j];
        menor = notas[0][j];
        aprobados = 0;
        reprobados = 0;

        for (i = 0; i < 5; i++) {

            suma = suma + notas[i][j];

            if (notas[i][j] > mayor) {
                mayor = notas[i][j];
            }

            if (notas[i][j] < menor) {
                menor = notas[i][j];
            }

            if (notas[i][j] >= 6) {
                aprobados = aprobados + 1;
            } else {
                reprobados = reprobados + 1;
            }
        }
    }
}
    
  