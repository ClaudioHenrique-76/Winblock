#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415
int main()

{
    //algoritmo: entrada
    float R, area, volume;
    printf("PROGRAMA: ESFERA\n");
    printf("Entre com o raio(R) em metros: ");
    scanf("%f",&R);
    // processamento
    area = 4 * PI * pow(R, 2);
    volume = 4.0 / 3 * PI * pow(R, 3);
    printf("DADOS DA ESFERA; \n");
    printf("AREA DA ESFERA: %.4f metros quadrados\n", area);
    printf("VOLUME: %.4f metros cubicos\n", volume);
    printf("VOLUME: %.4f litros\n", volume * 1000);
    volume = volume * 1000;
    printf("VOLUME: %.4f Litros\n", volume);
    return 0;
}

