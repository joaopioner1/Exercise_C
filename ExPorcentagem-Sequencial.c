#include <stdio.h>

int main()
{
    double input, porcentagem;
    
    printf("Insira um numero real: ");
    scanf("%lf", &input);
    
    porcentagem = input * 20 / 100;
    
    printf("O valor com 20 por cento a mais: %.2lf", porcentagem + input);

    return 0;
}
/*O algoritmo deve ter como entrada um número real e a saída deve ser o valor
atualizado com os 20%.
*/