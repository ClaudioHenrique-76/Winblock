#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //entrada

   float largura, altura, profundidade, gasolina, precoalcool;
   float alcool, volume1, volume2, precogasolina;
   printf("Colocar o valor da largura em metros:");
   scanf("%f", &largura);
   printf("Colocar o valor da altura em metros:");
   scanf("%f", &altura);
   printf("Colocar o valor da profundidade em metros:");
   scanf("%f", &profundidade);
   printf("Preco da gasolina:");
   scanf("%f", &gasolina);
   printf("Preco do alcool");
   scanf("%f", &alcool);

   //processamento

   volume1 = largura * altura * profundidade;
    volume2 = 1000 * volume1;
    precogasolina = gasolina * volume2;
    precoalcool = alcool * volume2;

   //saida

   printf("volume em metros cubicos: 2.%f\n", volume1);
   printf("volume em litros: 3.%f\n", volume2);
   printf("Preco da gasolina: 4.%f\n", precogasolina);
   printf("Preco do alcool: 4.%f\n", precoalcool);
   printf("preco do tanque com 20%% de alcool e 80%% de gasolina: R$%.2f",(0.2*precoalcool) + (0.8*precogasolina));
}
