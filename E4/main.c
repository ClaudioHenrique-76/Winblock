#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  //ENTRADA + PROCESSAMENTO
  float X1, Y1, X2, Y2, D;
  printf("calculo de distancia dos pontos");
  printf("coloque os pontos de Q X1 e Q Y1: \n");
  scanf("%f%f", &X1, &Y1);
  printf("coloque os pontos de P X2 e P Y2:  \n");
  scanf("%f%f", &X2, &Y2);

  D = sqrt( pow(X1 - X2, 2) +  pow(Y1 - Y2, 2));
  //SAIDA

  printf("A distancia dos pontos é: %.2f\n", D);
  return 0;
}
