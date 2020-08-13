#include <stdio.h>

int main()
{
    double km, tempo, vm;
    
    printf("Insira quantos km foram percorridos na viagem: ");
    scanf("%lf", &km);
    printf("Insira o tempo levado para chegar ao local (em horas): ");
    scanf("%lf", &tempo);

    vm = km / tempo;
    
    printf("A velocidade média é: %.2lf km/h", vm); 
    
    return 0;
}
