#include <stdio.h>

int main()
{
    double input, soma = 0;
    
    printf("Insira quantos numeros quiser, no final sera imprimida a soma tota. \nPara parar o programa, digite 0. \nInsira um numero: ");
    while (input != 0) {
        printf("Insira um numero: ");
        scanf("%lf", &input);
        soma += input;
    } 
    printf("Soma total = %.2lf", soma);

    return 0;
}
