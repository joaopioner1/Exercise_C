#include <stdio.h>

int main ()
{
  double lKm, kmIncial, kmFinal, valorGasolina;

  printf ("Insira a quantidade de L que seu carro faz por km: ");
  scanf ("%lf", &lKm);
  printf ("Insira a quilometragem incial do automC3vel: ");
  scanf ("%lf", &kmIncial);
  printf ("Insira a quilometagem final do automC3vel: ");
  scanf ("%lf", &kmFinal);
  printf ("Insira o valor da gasolina: ");
  scanf ("%lf", &valorGasolina);

  double media = (kmFinal - kmIncial) / lKm;
  double valorPagar = (media * valorGasolina) / 4;

  printf ("Valor a ser pago por cada um C): R$ %.2lf", valorPagar);

  return 0;
}
