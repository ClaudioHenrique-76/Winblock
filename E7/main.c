#include <stdio.h>
#include <stdlib.h>
#define COTACAO_DOLAR 5.21
#define COTACAO_EURO 6.13
int main()
{
    //ENTRADA
    float MONTANTE, conversao1, conversao2;
    printf("COLOQUE O MONTANTE DESEJADO:");
    scanf("%f", &MONTANTE);

    //PROCESSAMENTO
    conversao1 = 1.0 * MONTANTE / COTACAO_DOLAR;
    conversao2 = 1.0 * MONTANTE / COTACAO_EURO;

    //SAÍDA
    printf("A conversão do real para dolar dá: %.2f\n", conversao1);
    printf("A conversão do real para euro dá: %.2f\n", conversao2);
}
