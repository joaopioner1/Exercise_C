#include <stdio.h>
#include <math.h>
int main()
{
    double base, altura;
    
    printf("Insira a base do retângulo: ");
    scanf("%lf", &base);
    printf("Insira a altura do retângulo: ");
    scanf("%lf", &altura);
   
    double area = base * altura;
    double perimetro = 2 * (base + base) + 2 * (altura + altura);
    double diagonal = sqrt(pow(base, 2) + pow(altura, 2));
    
    printf("A area do retângulo é: %.4lf\n", area);
    printf("O perímetro do retângulo é: %.4lf\n", perimetro);
    printf("A diagonal do retângulo é: %.4lf\n", diagonal);
   
    return 0;
}
