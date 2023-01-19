#include <stdio.h>
#include "adxl345.h"

int main() {
    // Inicializar o acelerômetro
    adxl345_init();

    // Lê os valores de aceleração dos três eixos
    int x, y, z;
    adxl345_read_acceleration(&x, &y, &z);

    // Imprime os valores de aceleração
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    printf("Z = %d\n", z);

    return 0;
}
