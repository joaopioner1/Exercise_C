#include <stdio.h>

int main()
{
    double largura, comprimento, valorM;
    printf("Insira o valor da largura do terreno com uma casa decimal: ");
    scanf("%lf", &largura);
    
    printf("Insira o valor do comprimento do terreno com uma casa decimal: ");
    scanf("%lf", &comprimento);
    
    printf("Insira o valor do metro quadrado do terreno com uma casa decimal: ");
    scanf("%lf", &valorM);
    
    double area = largura * comprimento;
    double preco = valorM * area;
    
    printf("Area do terreno é: %.2lf\n", area);
    printf("Preço do terreno é: %.2lf\n", preco);
    
    return 0;
}

